#include <Rcpp.h>
#include <array>
#include "swephapi.h"

//' @title Expert interface
//'
//' @description For experts that are familiar with the C API of the underlying
//'   \code{libswe}, an expert interface that mimicks that interface as closely
//'   as possbile is provided.
//' @param jd  Julian date as numeric vector
//' @param t_acc tidal acceleration as double (arcsec/century^2)
//' @param tjd  Julian day Number
//' @param path  the directory where the ephemeris files are stored (a string)
//' @param geolon  Topocentric Longitude (deg)
//' @param geolat  Topocentric Latitude (deg)
//' @param geopos The position vector (longitude, latitude, height)
//' @param altitude  the height (m)
//' @param delta_t DeltaT value (sec)
//' @param tjd_et  Julian day, Ephemeris time
//' @param ipl  body/planet number (-1 for no planet possible with \code{swe_rise_trans_true_hor})
//' @param iflag  a 32 bit integer containing bit flags that indicate what
//'               kind of computation is wanted
//' @param star,starname  star name ("" for no star possible with \code{swe_rise_trans_true_hor})
//' @param tjd_ut  Julian day, UT time
//' @param calc_flag Type of reference system
//' @param atpress atmospheric pressure in mbar (hPa)
//' @param attemp atmospheric temperature in degrees Celsius
//' @param epheflag Type of ephemeris (4=Moshier, 1=JPL, 2=SE)
//' @param horhgt The apparent horizon at rise/set in degrees
//' @param xin  position of body in either ecliptical or equatorial coordinates, depending on calc_flag
//' @param rsmi  integer specifying that rise, set, or one of the two meridian transits is wanted
//' @return \code{swe_rise_trans_true_hor} returns a list with named entries: \code{i} success of function
//'      \code{tret} for azi/alt info and \code{serr} for possible error code
//' @return \code{swe_azalt} returns a list with named entries:
//'      \code{xaz} for azi/alt info.
//' @return \code{swe_calc} returns a list with named entries \code{rc},
//'         \code{xx}, and \code{serr} for return code, calculated values
//'         and error message.
//' @return  \code{swe_deltat} returns the DeltaT (sec)
//' @return \code{swe_day_of_week} retruns the day of week as integer vector
//' @return \code{get_tid_acc} returns the tidal acceleration as double (arcsec/century^2)
//' @return \code{swe_version} returns the Swiss Ephemeris version number as string
//' @name expert-interface


//' Compute day of week
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_day_of_week)]]
Rcpp::IntegerVector day_of_week(Rcpp::NumericVector jd) {
  Rcpp::IntegerVector result(jd.size());
  std::transform(jd.begin(), jd.end(), result.begin(), swe_day_of_week);
  return result;
}

//' Get the present configured tidal acceleration
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_get_tid_acc)]]
double get_tid_acc() {
  return swe_get_tid_acc();
}

//' Get the Swiss Ephemeris version number
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_version)]]
std::string version() {
  std::array<char, 256> version{'\0'};
  swe_version(&version[0]);
  return std::string(&version[0]);
}

//' Set the tidal acceleration
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_set_tid_acc)]]
void set_tid_acc(double t_acc) {
  swe_set_tid_acc(t_acc);
}

//' Determine the DeltaT at a certain date
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_deltat)]]
Rcpp::NumericVector deltat(Rcpp::NumericVector tjd) {
  Rcpp::NumericVector result(tjd.size());
  std::transform(tjd.begin(), tjd.end(), result.begin(), swe_deltat);
  return result;
}

//' Set the directory for the sefstar.txt, swe_deltat.txt and jpl files
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_set_ephe_path)]]
void set_ephe_path(Rcpp::Nullable<Rcpp::CharacterVector> path) {
  if (path.isNotNull()) {
    swe_set_ephe_path(path.as().at(0));
  } else {
    swe_set_ephe_path(NULL);
  }
}

//' Determine Julian date number from calendar date
//' @param year  Year
//' @param mont  Month
//' @param day  Day
//' @param hour  Hour
//' @param gregflag  Greogiran (1) or juian calandar (0)
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_julday)]]
double julday(int year, int month, int day, double hour, int gregflag) { 
    double i;
    i = swe_julday(year, month, day, hour, gregflag);
  return i;
}

//' Set the topocentric location (lon, lat, height)
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_set_topo)]]
void set_topo(double geolon, double geolat, double altitude) {
  swe_set_topo(geolon, geolat, altitude);
}

//' Set one's own DeltaT
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_set_delta_t_userdef)]]
void set_delta_t_userdef (double delta_t) {
  swe_set_delta_t_userdef (delta_t);
}

// Compute information of planet (ET)
// [[Rcpp::export]]
Rcpp::List calc(Rcpp::NumericVector tjd_et, Rcpp::IntegerVector ipl, int iflag) {
  if (tjd_et.length() != ipl.length())
    Rcpp::stop("The number of bodies in 'ipl' and the number of dates in 'tjd_et' must be identical!");

  Rcpp::IntegerVector rc_(ipl.length());
  Rcpp::CharacterVector serr_(ipl.length());
  Rcpp::NumericMatrix xx_(ipl.length(), 6);

  for (int i = 0; i < ipl.length(); ++i) {
    std::array<double, 6> xx{0.0};
    std::array<char, 256> serr{'\0'};
    rc_(i) = swe_calc(tjd_et[i], ipl(i), iflag, &xx[0], &serr[0]);
    Rcpp::NumericVector tmp(xx.begin(), xx.end());
    xx_(i, Rcpp::_) = tmp;
    serr_(i) = std::string(&serr[0]);
  }
  // remove dim attribute to return a vector
  if (ipl.length() == 1)
    xx_.attr("dim") = R_NilValue;
  
  return Rcpp::List::create(Rcpp::Named("return") = rc_,
                            Rcpp::Named("xx") = xx_,
                            Rcpp::Named("serr") = serr_);
}

  // Compute information of planet (UT)
  // [[Rcpp::export]]
  Rcpp::List calc_ut(Rcpp::NumericVector tjd_ut, Rcpp::IntegerVector ipl, int iflag) {
    if (tjd_ut.length() != ipl.length())
      Rcpp::stop("The number of bodies in 'ipl' and the number of dates in 'tjd_ut' must be identical!");
    
    Rcpp::IntegerVector rc_(ipl.length());
    Rcpp::CharacterVector serr_(ipl.length());
    Rcpp::NumericMatrix xx_(ipl.length(), 6);
    
    for (int i = 0; i < ipl.length(); ++i) {
      std::array<double, 6> xx{0.0};
      std::array<char, 256> serr{'\0'};
      rc_(i) = swe_calc_ut(tjd_ut[i], ipl(i), iflag, &xx[0], &serr[0]);
      Rcpp::NumericVector tmp(xx.begin(), xx.end());
      xx_(i, Rcpp::_) = tmp;
      serr_(i) = std::string(&serr[0]);
    }
    
  // remove dim attribute to return a vector
  if (ipl.length() == 1)
    xx_.attr("dim") = R_NilValue;

  return Rcpp::List::create(Rcpp::Named("return") = rc_,
			    Rcpp::Named("xx") = xx_,
			    Rcpp::Named("serr") = serr_);
}


//' Compute the magnitude of star
//' @return \code{swe_fixstar2_mag} returns a list with named entries \code{return},
//'         \code{star} updated star name, \code{mag} magnitude of star, and \code{serr} for error message.
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_fixstar2_mag)]]
Rcpp::List fixstar2_mag(Rcpp::CharacterVector star) {
  Rcpp::IntegerVector rc_(star.length());
  Rcpp::CharacterVector serr_(star.length());
  Rcpp::NumericVector mag_(star.length());

  for (int i = 0; i < star.length(); ++i) {
    double mag;
    std::array<char, 256> serr{'\0'};
    std::string star_(star(i));
    star_.resize(41);
    rc_(i) = swe_fixstar2_mag(&star_[0], &mag, &serr[0]);
    mag_(i) = mag;
    serr_(i) = std::string(&serr[0]);
    star(i) = star_;
  }
    
  return Rcpp::List::create(Rcpp::Named("return") = rc_,
                            Rcpp::Named("star") = star,
                            Rcpp::Named("mag") = mag_,
                            Rcpp::Named("serr") = serr_);
}


// Compute information of star
// [[Rcpp::export]]
Rcpp::List fixstar2(Rcpp::CharacterVector star, Rcpp::NumericVector tjd_et, int iflag) {
  if (tjd_et.length() != star.length())
    Rcpp::stop("The number of stars in 'star' and the number of dates in 'tjd_et' must be identical!");
  
  Rcpp::IntegerVector rc_(star.length());
  Rcpp::CharacterVector serr_(star.length());
  Rcpp::NumericMatrix xx_(star.length(), 6);
  
  for (int i = 0; i < star.length(); ++i) {
    std::array<double, 6> xx{0.0};
    std::array<char, 256> serr{'\0'};
    std::string star_(star(i));
    star_.resize(41);
    rc_(i) = swe_fixstar2(&star_[0], tjd_et(i), iflag, &xx[0], &serr[0]);
    Rcpp::NumericVector tmp(xx.begin(), xx.end());
    xx_(i, Rcpp::_) = tmp;
    serr_(i) = std::string(&serr[0]);
    star(i) = star_;
  }
  
  // remove dim attribute to return a vector
  if (star.length() == 1)
    xx_.attr("dim") = R_NilValue;
  
  return Rcpp::List::create(Rcpp::Named("return") = rc_,
                            Rcpp::Named("star") = star,
                            Rcpp::Named("xx") = xx_,
                            Rcpp::Named("serr") = serr_);
}

// Compute information of star (UT)
// [[Rcpp::export]]
Rcpp::List fixstar2_ut(Rcpp::CharacterVector star, Rcpp::NumericVector tjd_ut, int iflag) {
  if (tjd_ut.length() != star.length())
    Rcpp::stop("The number of stars in 'star' and the number of dates in 'tjd_ut' must be identical!");
  
  Rcpp::IntegerVector rc_(star.length());
  Rcpp::CharacterVector serr_(star.length());
  Rcpp::NumericMatrix xx_(star.length(), 6);
  
  for (int i = 0; i < star.length(); ++i) {
    std::array<double, 6> xx{0.0};
    std::array<char, 256> serr{'\0'};
    std::string star_(star(i));
    star_.resize(41);
    rc_(i) = swe_fixstar2_ut(&star_[0], tjd_ut(i), iflag, &xx[0], &serr[0]);
    Rcpp::NumericVector tmp(xx.begin(), xx.end());
    xx_(i, Rcpp::_) = tmp;
    serr_(i) = std::string(&serr[0]);
    star(i) = star_;
  }
  
  // remove dim attribute to return a vector
  if (star.length() == 1)
    xx_.attr("dim") = R_NilValue;
  
  return Rcpp::List::create(Rcpp::Named("return") = rc_,
                            Rcpp::Named("star") = star,
                            Rcpp::Named("xx") = xx_,
                            Rcpp::Named("serr") = serr_);
}

//' Compute the heliacale event of celestial object
//' @param tjdstart  Julian day, UT time
//' @param dgeo Geographic position
//' @param datm Atmospheric conditions
//' @param dobs Observer description
//' @param objectname  celectial object
//' @param event_type  event type
//' @param helflag calcuation flag
//' @return \code{swe_heliacal_ut} returns a list with named entries \code{return},
//'         \code{dret} results, and \code{serr} error message.
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_heliacal_ut)]]
Rcpp::List heliacal_ut(double tjdstart, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs,std::string objectname,int event_type, int helflag) {
  if (dgeo.length() < 3) Rcpp::stop("Geographic position 'dgeo' must have at least length 3");
  if (datm.length() < 4) Rcpp::stop("Atmospheric conditions 'datm' must have at least length 4");
  if (dobs.length() < 6) Rcpp::stop("Observer description 'dobs' must have at least length 6");
  std::array<double, 50> dret{0.0};
  std::array<char, 256> serr{'\0'};
  int rtn = swe_heliacal_ut(tjdstart, &dgeo[0],&datm[0],&dobs[0],&objectname[0],event_type,helflag, dret.begin(), serr.begin());
  return Rcpp::List::create(Rcpp::Named("return") = rtn,
			    Rcpp::Named("dret") = dret,
                            Rcpp::Named("serr") = std::string(serr.begin()));
}


//' Determine DeltaT
//' @param ephe_flag  the epheemris flag (one of SEFLG_SWIEPH=2, SEFLG_JPLEPH=1, SEFLG_MOSEPH=4)
//' @return \code{swe_deltat_ex} returns a list with named entries: \code{return} for return value
//'          and \code{serr} for error message.
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_deltat_ex)]]
Rcpp::List deltat_ex(Rcpp::NumericVector tjd, int ephe_flag) {
  Rcpp::NumericVector deltat(tjd.length());
  Rcpp::CharacterVector serr_(tjd.length());

  for (int i = 0; i < tjd.length(); ++i) {
    std::array<char, 256> serr{'\0'};
    deltat(i) = swe_deltat_ex(tjd(i), ephe_flag, &serr[0]);
    serr_(i) = std::string(&serr[0]);
  }

  return Rcpp::List::create(Rcpp::Named("deltat") = deltat,
                            Rcpp::Named("serr") = serr_);
}


//' Compute horizon information: azimuth, altiiude
//' @return \code{swe_azalt} returns a list with named entries: 
//'      \code{xaz} for azi/alt info.
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_azalt)]]
Rcpp::List azalt(double tjd_ut, int calc_flag, Rcpp::NumericVector geopos, double atpress, double attemp, Rcpp::NumericVector xin) {
  if (geopos.length() < 3) Rcpp::stop("Geographic position 'geopos' must have at least length 3");
  std::array<double, 3> xaz{0.0};
  swe_azalt(tjd_ut, calc_flag, &geopos[0], atpress, attemp, &xin[0], &xaz[0]);
  return Rcpp::List::create(Rcpp::Named("xaz") = xaz);
}

//' Provide phenomom information of celestial body ()UT)
//' @return \code{swe_pheno_ut} returns a list with named entries: 
//'      \code{return} ???, \code{attr} for phenomenon information 
//'      and \code{serr} error string
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_pheno_ut)]]
Rcpp::List pheno_ut(double tjd_ut, int ipl, int iflag) {
  std::array<double, 20> attr{0.0};
  std::array<char, 256> serr{'\0'};
  int rtn = swe_pheno_ut(tjd_ut, ipl, iflag, &attr[0], &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = rtn, Rcpp::Named("attr") = attr,
                            Rcpp::Named("serr") = std::string(&serr[0])
  );
}


//' Provide phenomom information of celestial body (ET)
//' @return \code{swe_pheno} returns a list with named entries: 
//'      \code{return} ???, \code{attr} for phenomenon information 
//'      and \code{serr} error string
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_pheno)]]
Rcpp::List pheno(double tjd_et, int ipl, int iflag) {
  std::array<double, 20> attr{0.0};
  std::array<char, 256> serr{'\0'};
  int rtn = swe_pheno(tjd_et, ipl, iflag, &attr[0], &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = rtn, Rcpp::Named("attr") = attr,
                            Rcpp::Named("serr") = std::string(&serr[0])
  );
}


//' Compute lunar eclipse at location
//' @param ifl Type of ephemeris (one of SEFLG_SWIEPH=2, SEFLG_JPLEPH=1, SEFLG_MOSEPH=4)
//' @param backward TRUE for backwards search
//' @return \code{swe_lun_eclipse_when_loc} returns a list with named entries: 
//'      \code{return} visibility code, \code{tret} for eclipse timing moments, 
//'      \code{attr} pheneomena durign eclipse and \code{serr} error string
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_lun_eclipse_when_loc)]]
Rcpp::List lun_eclipse_when_loc(double tjd_start, int ifl, Rcpp::NumericVector geopos, bool backward) {
  if (geopos.length() < 3) Rcpp::stop("Geographic position 'geopos' must have at least length 3");
  std::array<double, 10> tret{0.0};
  std::array<double, 20> attr{0.0};
  std::array<char, 256> serr{'\0'};
  int rtn = swe_lun_eclipse_when_loc(tjd_start, ifl, &geopos[0], &tret[0], &attr[0], backward, &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = rtn, Rcpp::Named("tret") = tret,
                            Rcpp::Named("attr") = attr,
                            Rcpp::Named("serr") = std::string(&serr[0])
  );
}

//' Computes the attributes of a lunar eclipse at a given time
//' @param tjd_start  Julian day, UT time
//' @return \code{swe_lun_eclipse_how} returns a list with named entries: 
//'      \code{return} visibility code, 
//'      \code{attr} pheneomena durign eclipse and \code{serr} error string
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_lun_eclipse_how)]]
Rcpp::List lun_eclipse_how(double tjd_start, int ifl, Rcpp::NumericVector geopos) {
  if (geopos.length() < 3) Rcpp::stop("Geographic position 'geopos' must have at least length 3");
  std::array<double, 20> attr{0.0};
  std::array<char, 256> serr{'\0'};
  int rtn = swe_lun_eclipse_how(tjd_start, ifl, &geopos[0], &attr[0], &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = rtn,
                            Rcpp::Named("attr") = attr,
                            Rcpp::Named("serr") = std::string(&serr[0])
  );
}


//' Search a lunar eclipse on earth
//' @param ifltype Type of eclipse event (SE_ECL_TOTAL etc.  or 0, if any eclipse type)
//' @return \code{swe_lun_eclipse_when} returns a list with named entries: 
//'      \code{return} visibility code, \code{tret} for eclipse timing moments 
//'      and \code{serr} error string
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_lun_eclipse_when)]]
Rcpp::List lun_eclipse_when(double tjd_start, int ifl, int ifltype, bool backward) {
  std::array<double, 20> tret{0.0};
  std::array<char, 256> serr{'\0'};
  int rtn = swe_lun_eclipse_when(tjd_start, ifl, ifltype, &tret[0], backward, &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = rtn, Rcpp::Named("tret") = tret,
                            Rcpp::Named("serr") = std::string(&serr[0])
  );
}



//' Compute solar eclipse at location
//' @return \code{swe_sol_eclipse_when_loc} returns a list with named entries: 
//'      \code{return} visibility code, \code{tret} for eclipse timing moments, 
//'      \code{attr} pheneomena durign eclipse and \code{serr} error string
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_sol_eclipse_when_loc)]]
Rcpp::List sol_eclipse_when_loc(double tjd_start, int ifl, Rcpp::NumericVector geopos, bool backward) {
  if (geopos.length() < 3) Rcpp::stop("Geographic position 'geopos' must have at least length 3");
  std::array<double, 10> tret{0.0};
  std::array<double, 20> attr{0.0};
  std::array<char, 256> serr{'\0'};
  int rtn = swe_sol_eclipse_when_loc(tjd_start, ifl, &geopos[0], &tret[0], &attr[0], backward, &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = rtn, Rcpp::Named("tret") = tret,
                            Rcpp::Named("attr") = attr,
                            Rcpp::Named("serr") = std::string(&serr[0])
    );
}


//' Compute the rise and set location of the object
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_rise_trans_true_hor)]]
Rcpp::List rise_trans_true_hor(double tjd_ut, int ipl, std::string starname, int epheflag, int rsmi,Rcpp::NumericVector geopos, double atpress, double attemp, double horhgt) {
  if (geopos.length() < 3) Rcpp::stop("Geographic position 'geopos' must have at least length 3");
  std::array<char, 256> serr{'\0'};
  double tret;
  int i = swe_rise_trans_true_hor(tjd_ut, ipl, &starname[0], epheflag, rsmi, &geopos[0], atpress, attemp, horhgt, &tret, &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = i,
                            Rcpp::Named("tret") = tret,
                            Rcpp::Named("serr") = std::string(&serr[0]));
}


//' Close Swiss Ephemeris files
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_close)]]
void close() {
  swe_close();
}

//' Compute the limiting visibiliy magnitude
//' @return \code{swe_vis_limit_mag} returns a list with named entries: \code{i} success of function
//'      \code{dret} for magnitude info and \code{serr} for possible error code
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_vis_limit_mag)]]
Rcpp::List vis_limit_mag(double tjd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs,std::string objectname,int helflag ){
  if (dgeo.length() < 3) Rcpp::stop("Geographic position 'dgeo' must have at least length 3");
  if (datm.length() < 4) Rcpp::stop("Atmospheric conditions 'datm' must have at least length 4");
  if (dobs.length() < 6) Rcpp::stop("Observer description 'dobs' must have at least length 6");
  std::array<double, 50> dret{0.0};
  std::array<char, 256> serr{'\0'};
  int i = swe_vis_limit_mag(tjd_ut, &dgeo[0], &datm[0],&dobs[0], &objectname[0], helflag, &dret[0], &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = i,
                            Rcpp::Named("dret") = dret,
                            Rcpp::Named("serr") = std::string(&serr[0]));
}

//' Compute heliacal event details
//' @return \code{swe_heliacal_pheno_ut} returns a list with named entries: \code{i} success of function
//'      \code{darr} for heliacal details and \code{serr} for possible error code
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_heliacal_pheno_ut)]]
Rcpp::List heliacal_pheno_ut(double tjd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs,std::string objectname,int event_type, int helflag ){
  if (dgeo.length() < 3) Rcpp::stop("Geographic position 'dgeo' must have at least length 3");
  if (datm.length() < 4) Rcpp::stop("Atmospheric conditions 'datm' must have at least length 4");
  if (dobs.length() < 6) Rcpp::stop("Observer description 'dobs' must have at least length 6");
  std::array<double, 50> darr{0.0};
  std::array<char, 256> serr{'\0'};
  int i = swe_heliacal_pheno_ut(tjd_ut, &dgeo[0], &datm[0],&dobs[0], &objectname[0], event_type, helflag, &darr[0], &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = i,
                            Rcpp::Named("darr") = darr,
                            Rcpp::Named("serr") = std::string(&serr[0]));
}

//' Compute heliacal event details
//' @param mag   The object's magnitude
//' @param AziO  The object's azimut
//' @param AltO  The object's altitude
//' @param AziS  The sun's azimut
//' @param AziM  The moon's azimut
//' @param AltM  The moon's altitude
//' @return \code{swe_topo_arcus_visionis} returns a list with named entries: \code{i} success of function
//'      \code{darr} for heliacal details and \code{serr} for possible error code
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_topo_arcus_visionis)]]
Rcpp::List topo_arcus_visionis(double tjd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs,int helflag,double mag,double AziO, double AltO,double AziS, double AziM, double AltM){
  if (dgeo.length() < 3) Rcpp::stop("Geographic position 'dgeo' must have at least length 3");
  if (datm.length() < 4) Rcpp::stop("Atmospheric conditions 'datm' must have at least length 4");
  if (dobs.length() < 6) Rcpp::stop("Observer description 'dobs' must have at least length 6");
  std::array<char, 256> serr{'\0'};
  double tav;
  int i = swe_topo_arcus_visionis(tjd_ut, &dgeo[0], &datm[0],&dobs[0], helflag, mag,AziO, AltO, AziS,  AziM,  AltM, &tav, &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = i,
                            Rcpp::Named("tav") = tav,
                            Rcpp::Named("serr") = std::string(&serr[0]));
}

//' Compute heliacal event details
//' @param mag   The object's magnitude
//' @param AziO  The object's azimut
//' @param AziS  The sun's azimut
//' @param AziM  The moon's azimut
//' @param AltM  The moon's altitude
//' @return \code{swe_heliacal_angle} returns a list with named entries: \code{i} success of function
//'      \code{darr} for heliacal angle and \code{serr} for possible error code
//' @rdname expert-interface
//' @export
// [[Rcpp::export(swe_heliacal_angle)]]
Rcpp::List heliacal_angle(double tjd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs,int helflag,double mag,double AziO, double AziS, double AziM, double AltM){
  if (dgeo.length() < 3) Rcpp::stop("Geographic position 'dgeo' must have at least length 3");
  if (datm.length() < 4) Rcpp::stop("Atmospheric conditions 'datm' must have at least length 4");
  if (dobs.length() < 6) Rcpp::stop("Observer description 'dobs' must have at least length 6");
  std::array<double, 50> dret{0.0};
  std::array<char, 256> serr{'\0'};
  int i = swe_heliacal_angle(tjd_ut, &dgeo[0], &datm[0],&dobs[0], helflag, mag,AziO, AziS,  AziM,  AltM, &dret[0], &serr[0]);
  return Rcpp::List::create(Rcpp::Named("return") = i,
                            Rcpp::Named("dret") = dret,
                            Rcpp::Named("serr") = std::string(&serr[0]));
}

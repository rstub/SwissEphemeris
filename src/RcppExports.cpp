// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// set_ephe_path
void set_ephe_path(Rcpp::Nullable<Rcpp::CharacterVector> path);
RcppExport SEXP _swephR_set_ephe_path(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type path(pathSEXP);
    set_ephe_path(path);
    return R_NilValue;
END_RCPP
}
// close
void close();
RcppExport SEXP _swephR_close() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    close();
    return R_NilValue;
END_RCPP
}
// set_jpl_file
void set_jpl_file(Rcpp::Nullable<Rcpp::CharacterVector> fname);
RcppExport SEXP _swephR_set_jpl_file(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type fname(fnameSEXP);
    set_jpl_file(fname);
    return R_NilValue;
END_RCPP
}
// version
std::string version();
RcppExport SEXP _swephR_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(version());
    return rcpp_result_gen;
END_RCPP
}
// calc_ut
Rcpp::List calc_ut(Rcpp::NumericVector jd_ut, Rcpp::IntegerVector ipl, int iflag);
RcppExport SEXP _swephR_calc_ut(SEXP jd_utSEXP, SEXP iplSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_ut(jd_ut, ipl, iflag));
    return rcpp_result_gen;
END_RCPP
}
// calc
Rcpp::List calc(Rcpp::NumericVector jd_et, Rcpp::IntegerVector ipl, int iflag);
RcppExport SEXP _swephR_calc(SEXP jd_etSEXP, SEXP iplSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type jd_et(jd_etSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(calc(jd_et, ipl, iflag));
    return rcpp_result_gen;
END_RCPP
}
// get_planet_name
std::string get_planet_name(int ipl);
RcppExport SEXP _swephR_get_planet_name(SEXP iplSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    rcpp_result_gen = Rcpp::wrap(get_planet_name(ipl));
    return rcpp_result_gen;
END_RCPP
}
// fixstar2_ut
Rcpp::List fixstar2_ut(Rcpp::CharacterVector starname, Rcpp::NumericVector jd_ut, int iflag);
RcppExport SEXP _swephR_fixstar2_ut(SEXP starnameSEXP, SEXP jd_utSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type starname(starnameSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(fixstar2_ut(starname, jd_ut, iflag));
    return rcpp_result_gen;
END_RCPP
}
// fixstar2
Rcpp::List fixstar2(Rcpp::CharacterVector starname, Rcpp::NumericVector jd_et, int iflag);
RcppExport SEXP _swephR_fixstar2(SEXP starnameSEXP, SEXP jd_etSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type starname(starnameSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type jd_et(jd_etSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(fixstar2(starname, jd_et, iflag));
    return rcpp_result_gen;
END_RCPP
}
// fixstar2_mag
Rcpp::List fixstar2_mag(Rcpp::CharacterVector starname);
RcppExport SEXP _swephR_fixstar2_mag(SEXP starnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type starname(starnameSEXP);
    rcpp_result_gen = Rcpp::wrap(fixstar2_mag(starname));
    return rcpp_result_gen;
END_RCPP
}
// nod_aps_ut
Rcpp::List nod_aps_ut(double jd_ut, int ipl, int iflag, int method);
RcppExport SEXP _swephR_nod_aps_ut(SEXP jd_utSEXP, SEXP iplSEXP, SEXP iflagSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(nod_aps_ut(jd_ut, ipl, iflag, method));
    return rcpp_result_gen;
END_RCPP
}
// nod_aps
Rcpp::List nod_aps(double jd_et, int ipl, int iflag, int method);
RcppExport SEXP _swephR_nod_aps(SEXP jd_etSEXP, SEXP iplSEXP, SEXP iflagSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_et(jd_etSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(nod_aps(jd_et, ipl, iflag, method));
    return rcpp_result_gen;
END_RCPP
}
// get_orbital_elements
Rcpp::List get_orbital_elements(double jd_et, int ipl, int iflag);
RcppExport SEXP _swephR_get_orbital_elements(SEXP jd_etSEXP, SEXP iplSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_et(jd_etSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(get_orbital_elements(jd_et, ipl, iflag));
    return rcpp_result_gen;
END_RCPP
}
// orbit_max_min_true_distance
Rcpp::List orbit_max_min_true_distance(double jd_et, int ipl, int iflag);
RcppExport SEXP _swephR_orbit_max_min_true_distance(SEXP jd_etSEXP, SEXP iplSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_et(jd_etSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(orbit_max_min_true_distance(jd_et, ipl, iflag));
    return rcpp_result_gen;
END_RCPP
}
// sol_eclipse_when_loc
Rcpp::List sol_eclipse_when_loc(double jd_start, int ephe_flag, Rcpp::NumericVector geopos, bool backward);
RcppExport SEXP _swephR_sol_eclipse_when_loc(SEXP jd_startSEXP, SEXP ephe_flagSEXP, SEXP geoposSEXP, SEXP backwardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_start(jd_startSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< bool >::type backward(backwardSEXP);
    rcpp_result_gen = Rcpp::wrap(sol_eclipse_when_loc(jd_start, ephe_flag, geopos, backward));
    return rcpp_result_gen;
END_RCPP
}
// lun_eclipse_when_loc
Rcpp::List lun_eclipse_when_loc(double jd_start, int ephe_flag, Rcpp::NumericVector geopos, bool backward);
RcppExport SEXP _swephR_lun_eclipse_when_loc(SEXP jd_startSEXP, SEXP ephe_flagSEXP, SEXP geoposSEXP, SEXP backwardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_start(jd_startSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< bool >::type backward(backwardSEXP);
    rcpp_result_gen = Rcpp::wrap(lun_eclipse_when_loc(jd_start, ephe_flag, geopos, backward));
    return rcpp_result_gen;
END_RCPP
}
// lun_eclipse_how
Rcpp::List lun_eclipse_how(double jd_ut, int ephe_flag, Rcpp::NumericVector geopos);
RcppExport SEXP _swephR_lun_eclipse_how(SEXP jd_utSEXP, SEXP ephe_flagSEXP, SEXP geoposSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    rcpp_result_gen = Rcpp::wrap(lun_eclipse_how(jd_ut, ephe_flag, geopos));
    return rcpp_result_gen;
END_RCPP
}
// lun_eclipse_when
Rcpp::List lun_eclipse_when(double jd_start, int ephe_flag, int ifltype, bool backward);
RcppExport SEXP _swephR_lun_eclipse_when(SEXP jd_startSEXP, SEXP ephe_flagSEXP, SEXP ifltypeSEXP, SEXP backwardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_start(jd_startSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    Rcpp::traits::input_parameter< int >::type ifltype(ifltypeSEXP);
    Rcpp::traits::input_parameter< bool >::type backward(backwardSEXP);
    rcpp_result_gen = Rcpp::wrap(lun_eclipse_when(jd_start, ephe_flag, ifltype, backward));
    return rcpp_result_gen;
END_RCPP
}
// rise_trans_true_hor
Rcpp::List rise_trans_true_hor(double jd_ut, int ipl, std::string starname, int ephe_flag, int rsmi, Rcpp::NumericVector geopos, double atpress, double attemp, double horhgt);
RcppExport SEXP _swephR_rise_trans_true_hor(SEXP jd_utSEXP, SEXP iplSEXP, SEXP starnameSEXP, SEXP ephe_flagSEXP, SEXP rsmiSEXP, SEXP geoposSEXP, SEXP atpressSEXP, SEXP attempSEXP, SEXP horhgtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< std::string >::type starname(starnameSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    Rcpp::traits::input_parameter< int >::type rsmi(rsmiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< double >::type atpress(atpressSEXP);
    Rcpp::traits::input_parameter< double >::type attemp(attempSEXP);
    Rcpp::traits::input_parameter< double >::type horhgt(horhgtSEXP);
    rcpp_result_gen = Rcpp::wrap(rise_trans_true_hor(jd_ut, ipl, starname, ephe_flag, rsmi, geopos, atpress, attemp, horhgt));
    return rcpp_result_gen;
END_RCPP
}
// pheno_ut
Rcpp::List pheno_ut(double jd_ut, int ipl, int ephe_flag);
RcppExport SEXP _swephR_pheno_ut(SEXP jd_utSEXP, SEXP iplSEXP, SEXP ephe_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(pheno_ut(jd_ut, ipl, ephe_flag));
    return rcpp_result_gen;
END_RCPP
}
// pheno
Rcpp::List pheno(double jd_et, int ipl, int ephe_flag);
RcppExport SEXP _swephR_pheno(SEXP jd_etSEXP, SEXP iplSEXP, SEXP ephe_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_et(jd_etSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(pheno(jd_et, ipl, ephe_flag));
    return rcpp_result_gen;
END_RCPP
}
// azalt
Rcpp::List azalt(double jd_ut, int coord_flag, Rcpp::NumericVector geopos, double atpress, double attemp, Rcpp::NumericVector xin);
RcppExport SEXP _swephR_azalt(SEXP jd_utSEXP, SEXP coord_flagSEXP, SEXP geoposSEXP, SEXP atpressSEXP, SEXP attempSEXP, SEXP xinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type coord_flag(coord_flagSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< double >::type atpress(atpressSEXP);
    Rcpp::traits::input_parameter< double >::type attemp(attempSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xin(xinSEXP);
    rcpp_result_gen = Rcpp::wrap(azalt(jd_ut, coord_flag, geopos, atpress, attemp, xin));
    return rcpp_result_gen;
END_RCPP
}
// azalt_rev
Rcpp::List azalt_rev(double jd_ut, int coord_flag, Rcpp::NumericVector geopos, Rcpp::NumericVector xin);
RcppExport SEXP _swephR_azalt_rev(SEXP jd_utSEXP, SEXP coord_flagSEXP, SEXP geoposSEXP, SEXP xinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type coord_flag(coord_flagSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xin(xinSEXP);
    rcpp_result_gen = Rcpp::wrap(azalt_rev(jd_ut, coord_flag, geopos, xin));
    return rcpp_result_gen;
END_RCPP
}
// refrac_extended
Rcpp::List refrac_extended(double InAlt, double height, double atpress, double attemp, double lapse_rate, int calc_flag);
RcppExport SEXP _swephR_refrac_extended(SEXP InAltSEXP, SEXP heightSEXP, SEXP atpressSEXP, SEXP attempSEXP, SEXP lapse_rateSEXP, SEXP calc_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type InAlt(InAltSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< double >::type atpress(atpressSEXP);
    Rcpp::traits::input_parameter< double >::type attemp(attempSEXP);
    Rcpp::traits::input_parameter< double >::type lapse_rate(lapse_rateSEXP);
    Rcpp::traits::input_parameter< int >::type calc_flag(calc_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(refrac_extended(InAlt, height, atpress, attemp, lapse_rate, calc_flag));
    return rcpp_result_gen;
END_RCPP
}
// heliacal_ut
Rcpp::List heliacal_ut(double jd_utstart, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, std::string objectname, int event_type, int helflag);
RcppExport SEXP _swephR_heliacal_ut(SEXP jd_utstartSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP objectnameSEXP, SEXP event_typeSEXP, SEXP helflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_utstart(jd_utstartSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dgeo(dgeoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type datm(datmSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dobs(dobsSEXP);
    Rcpp::traits::input_parameter< std::string >::type objectname(objectnameSEXP);
    Rcpp::traits::input_parameter< int >::type event_type(event_typeSEXP);
    Rcpp::traits::input_parameter< int >::type helflag(helflagSEXP);
    rcpp_result_gen = Rcpp::wrap(heliacal_ut(jd_utstart, dgeo, datm, dobs, objectname, event_type, helflag));
    return rcpp_result_gen;
END_RCPP
}
// vis_limit_mag
Rcpp::List vis_limit_mag(double jd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, std::string objectname, int helflag);
RcppExport SEXP _swephR_vis_limit_mag(SEXP jd_utSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP objectnameSEXP, SEXP helflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dgeo(dgeoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type datm(datmSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dobs(dobsSEXP);
    Rcpp::traits::input_parameter< std::string >::type objectname(objectnameSEXP);
    Rcpp::traits::input_parameter< int >::type helflag(helflagSEXP);
    rcpp_result_gen = Rcpp::wrap(vis_limit_mag(jd_ut, dgeo, datm, dobs, objectname, helflag));
    return rcpp_result_gen;
END_RCPP
}
// heliacal_pheno_ut
Rcpp::List heliacal_pheno_ut(double jd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, std::string objectname, int event_type, int helflag);
RcppExport SEXP _swephR_heliacal_pheno_ut(SEXP jd_utSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP objectnameSEXP, SEXP event_typeSEXP, SEXP helflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dgeo(dgeoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type datm(datmSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dobs(dobsSEXP);
    Rcpp::traits::input_parameter< std::string >::type objectname(objectnameSEXP);
    Rcpp::traits::input_parameter< int >::type event_type(event_typeSEXP);
    Rcpp::traits::input_parameter< int >::type helflag(helflagSEXP);
    rcpp_result_gen = Rcpp::wrap(heliacal_pheno_ut(jd_ut, dgeo, datm, dobs, objectname, event_type, helflag));
    return rcpp_result_gen;
END_RCPP
}
// topo_arcus_visionis
Rcpp::List topo_arcus_visionis(double jd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, int helflag, double mag, double AziO, double AltO, double AziS, double AziM, double AltM);
RcppExport SEXP _swephR_topo_arcus_visionis(SEXP jd_utSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP helflagSEXP, SEXP magSEXP, SEXP AziOSEXP, SEXP AltOSEXP, SEXP AziSSEXP, SEXP AziMSEXP, SEXP AltMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dgeo(dgeoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type datm(datmSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dobs(dobsSEXP);
    Rcpp::traits::input_parameter< int >::type helflag(helflagSEXP);
    Rcpp::traits::input_parameter< double >::type mag(magSEXP);
    Rcpp::traits::input_parameter< double >::type AziO(AziOSEXP);
    Rcpp::traits::input_parameter< double >::type AltO(AltOSEXP);
    Rcpp::traits::input_parameter< double >::type AziS(AziSSEXP);
    Rcpp::traits::input_parameter< double >::type AziM(AziMSEXP);
    Rcpp::traits::input_parameter< double >::type AltM(AltMSEXP);
    rcpp_result_gen = Rcpp::wrap(topo_arcus_visionis(jd_ut, dgeo, datm, dobs, helflag, mag, AziO, AltO, AziS, AziM, AltM));
    return rcpp_result_gen;
END_RCPP
}
// heliacal_angle
Rcpp::List heliacal_angle(double jd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, int helflag, double mag, double AziO, double AziS, double AziM, double AltM);
RcppExport SEXP _swephR_heliacal_angle(SEXP jd_utSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP helflagSEXP, SEXP magSEXP, SEXP AziOSEXP, SEXP AziSSEXP, SEXP AziMSEXP, SEXP AltMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dgeo(dgeoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type datm(datmSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dobs(dobsSEXP);
    Rcpp::traits::input_parameter< int >::type helflag(helflagSEXP);
    Rcpp::traits::input_parameter< double >::type mag(magSEXP);
    Rcpp::traits::input_parameter< double >::type AziO(AziOSEXP);
    Rcpp::traits::input_parameter< double >::type AziS(AziSSEXP);
    Rcpp::traits::input_parameter< double >::type AziM(AziMSEXP);
    Rcpp::traits::input_parameter< double >::type AltM(AltMSEXP);
    rcpp_result_gen = Rcpp::wrap(heliacal_angle(jd_ut, dgeo, datm, dobs, helflag, mag, AziO, AziS, AziM, AltM));
    return rcpp_result_gen;
END_RCPP
}
// julday
double julday(int year, int month, int day, double hour, int gregflag);
RcppExport SEXP _swephR_julday(SEXP yearSEXP, SEXP monthSEXP, SEXP daySEXP, SEXP hourSEXP, SEXP gregflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    Rcpp::traits::input_parameter< int >::type month(monthSEXP);
    Rcpp::traits::input_parameter< int >::type day(daySEXP);
    Rcpp::traits::input_parameter< double >::type hour(hourSEXP);
    Rcpp::traits::input_parameter< int >::type gregflag(gregflagSEXP);
    rcpp_result_gen = Rcpp::wrap(julday(year, month, day, hour, gregflag));
    return rcpp_result_gen;
END_RCPP
}
// date_conversion
Rcpp::List date_conversion(int year, int month, int day, double hour, char cal);
RcppExport SEXP _swephR_date_conversion(SEXP yearSEXP, SEXP monthSEXP, SEXP daySEXP, SEXP hourSEXP, SEXP calSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    Rcpp::traits::input_parameter< int >::type month(monthSEXP);
    Rcpp::traits::input_parameter< int >::type day(daySEXP);
    Rcpp::traits::input_parameter< double >::type hour(hourSEXP);
    Rcpp::traits::input_parameter< char >::type cal(calSEXP);
    rcpp_result_gen = Rcpp::wrap(date_conversion(year, month, day, hour, cal));
    return rcpp_result_gen;
END_RCPP
}
// revjul
Rcpp::List revjul(double jd, int gregflag);
RcppExport SEXP _swephR_revjul(SEXP jdSEXP, SEXP gregflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd(jdSEXP);
    Rcpp::traits::input_parameter< int >::type gregflag(gregflagSEXP);
    rcpp_result_gen = Rcpp::wrap(revjul(jd, gregflag));
    return rcpp_result_gen;
END_RCPP
}
// deltat_ex
Rcpp::List deltat_ex(Rcpp::NumericVector jd_ut, int ephe_flag);
RcppExport SEXP _swephR_deltat_ex(SEXP jd_utSEXP, SEXP ephe_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(deltat_ex(jd_ut, ephe_flag));
    return rcpp_result_gen;
END_RCPP
}
// deltat
Rcpp::NumericVector deltat(Rcpp::NumericVector jd_ut);
RcppExport SEXP _swephR_deltat(SEXP jd_utSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type jd_ut(jd_utSEXP);
    rcpp_result_gen = Rcpp::wrap(deltat(jd_ut));
    return rcpp_result_gen;
END_RCPP
}
// set_tid_acc
void set_tid_acc(double t_acc);
RcppExport SEXP _swephR_set_tid_acc(SEXP t_accSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t_acc(t_accSEXP);
    set_tid_acc(t_acc);
    return R_NilValue;
END_RCPP
}
// get_tid_acc
double get_tid_acc();
RcppExport SEXP _swephR_get_tid_acc() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_tid_acc());
    return rcpp_result_gen;
END_RCPP
}
// set_delta_t_userdef
void set_delta_t_userdef(double delta_t);
RcppExport SEXP _swephR_set_delta_t_userdef(SEXP delta_tSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type delta_t(delta_tSEXP);
    set_delta_t_userdef(delta_t);
    return R_NilValue;
END_RCPP
}
// set_topo
void set_topo(double longitude, double lat, double height);
RcppExport SEXP _swephR_set_topo(SEXP longitudeSEXP, SEXP latSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type longitude(longitudeSEXP);
    Rcpp::traits::input_parameter< double >::type lat(latSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    set_topo(longitude, lat, height);
    return R_NilValue;
END_RCPP
}
// set_sid_mode
void set_sid_mode(int sid_mode, double t0, double ayan_t0);
RcppExport SEXP _swephR_set_sid_mode(SEXP sid_modeSEXP, SEXP t0SEXP, SEXP ayan_t0SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type sid_mode(sid_modeSEXP);
    Rcpp::traits::input_parameter< double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< double >::type ayan_t0(ayan_t0SEXP);
    set_sid_mode(sid_mode, t0, ayan_t0);
    return R_NilValue;
END_RCPP
}
// get_ayanamsa_name
std::string get_ayanamsa_name(int sid_mode);
RcppExport SEXP _swephR_get_ayanamsa_name(SEXP sid_modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type sid_mode(sid_modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ayanamsa_name(sid_mode));
    return rcpp_result_gen;
END_RCPP
}
// get_ayanamsa_ex_ut
Rcpp::List get_ayanamsa_ex_ut(double jd_ut, int iflag);
RcppExport SEXP _swephR_get_ayanamsa_ex_ut(SEXP jd_utSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ayanamsa_ex_ut(jd_ut, iflag));
    return rcpp_result_gen;
END_RCPP
}
// get_ayanamsa_ex
Rcpp::List get_ayanamsa_ex(double jd_et, int iflag);
RcppExport SEXP _swephR_get_ayanamsa_ex(SEXP jd_etSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_et(jd_etSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ayanamsa_ex(jd_et, iflag));
    return rcpp_result_gen;
END_RCPP
}
// houses_ex
Rcpp::List houses_ex(double jd_ut, int cuspflag, double geolat, double geolon, char hsys);
RcppExport SEXP _swephR_houses_ex(SEXP jd_utSEXP, SEXP cuspflagSEXP, SEXP geolatSEXP, SEXP geolonSEXP, SEXP hsysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type cuspflag(cuspflagSEXP);
    Rcpp::traits::input_parameter< double >::type geolat(geolatSEXP);
    Rcpp::traits::input_parameter< double >::type geolon(geolonSEXP);
    Rcpp::traits::input_parameter< char >::type hsys(hsysSEXP);
    rcpp_result_gen = Rcpp::wrap(houses_ex(jd_ut, cuspflag, geolat, geolon, hsys));
    return rcpp_result_gen;
END_RCPP
}
// houses_armc
Rcpp::List houses_armc(double armc, double geolat, double eps, char hsys);
RcppExport SEXP _swephR_houses_armc(SEXP armcSEXP, SEXP geolatSEXP, SEXP epsSEXP, SEXP hsysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type armc(armcSEXP);
    Rcpp::traits::input_parameter< double >::type geolat(geolatSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< char >::type hsys(hsysSEXP);
    rcpp_result_gen = Rcpp::wrap(houses_armc(armc, geolat, eps, hsys));
    return rcpp_result_gen;
END_RCPP
}
// house_name
std::string house_name(char hsys);
RcppExport SEXP _swephR_house_name(SEXP hsysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< char >::type hsys(hsysSEXP);
    rcpp_result_gen = Rcpp::wrap(house_name(hsys));
    return rcpp_result_gen;
END_RCPP
}
// house_pos
Rcpp::List house_pos(double armc, double geolat, double eps, char hsys, Rcpp::NumericVector xpin);
RcppExport SEXP _swephR_house_pos(SEXP armcSEXP, SEXP geolatSEXP, SEXP epsSEXP, SEXP hsysSEXP, SEXP xpinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type armc(armcSEXP);
    Rcpp::traits::input_parameter< double >::type geolat(geolatSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< char >::type hsys(hsysSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xpin(xpinSEXP);
    rcpp_result_gen = Rcpp::wrap(house_pos(armc, geolat, eps, hsys, xpin));
    return rcpp_result_gen;
END_RCPP
}
// gauquelin_sector
Rcpp::List gauquelin_sector(double jd_ut, int ipl, std::string starname, int ephe_flag, int imeth, Rcpp::NumericVector geopos, double atpress, double attemp);
RcppExport SEXP _swephR_gauquelin_sector(SEXP jd_utSEXP, SEXP iplSEXP, SEXP starnameSEXP, SEXP ephe_flagSEXP, SEXP imethSEXP, SEXP geoposSEXP, SEXP atpressSEXP, SEXP attempSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< std::string >::type starname(starnameSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    Rcpp::traits::input_parameter< int >::type imeth(imethSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< double >::type atpress(atpressSEXP);
    Rcpp::traits::input_parameter< double >::type attemp(attempSEXP);
    rcpp_result_gen = Rcpp::wrap(gauquelin_sector(jd_ut, ipl, starname, ephe_flag, imeth, geopos, atpress, attemp));
    return rcpp_result_gen;
END_RCPP
}
// sidtime
double sidtime(double jd_ut);
RcppExport SEXP _swephR_sidtime(SEXP jd_utSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type jd_ut(jd_utSEXP);
    rcpp_result_gen = Rcpp::wrap(sidtime(jd_ut));
    return rcpp_result_gen;
END_RCPP
}
// day_of_week
Rcpp::IntegerVector day_of_week(Rcpp::NumericVector jd);
RcppExport SEXP _swephR_day_of_week(SEXP jdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type jd(jdSEXP);
    rcpp_result_gen = Rcpp::wrap(day_of_week(jd));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_swephR_set_ephe_path", (DL_FUNC) &_swephR_set_ephe_path, 1},
    {"_swephR_close", (DL_FUNC) &_swephR_close, 0},
    {"_swephR_set_jpl_file", (DL_FUNC) &_swephR_set_jpl_file, 1},
    {"_swephR_version", (DL_FUNC) &_swephR_version, 0},
    {"_swephR_calc_ut", (DL_FUNC) &_swephR_calc_ut, 3},
    {"_swephR_calc", (DL_FUNC) &_swephR_calc, 3},
    {"_swephR_get_planet_name", (DL_FUNC) &_swephR_get_planet_name, 1},
    {"_swephR_fixstar2_ut", (DL_FUNC) &_swephR_fixstar2_ut, 3},
    {"_swephR_fixstar2", (DL_FUNC) &_swephR_fixstar2, 3},
    {"_swephR_fixstar2_mag", (DL_FUNC) &_swephR_fixstar2_mag, 1},
    {"_swephR_nod_aps_ut", (DL_FUNC) &_swephR_nod_aps_ut, 4},
    {"_swephR_nod_aps", (DL_FUNC) &_swephR_nod_aps, 4},
    {"_swephR_get_orbital_elements", (DL_FUNC) &_swephR_get_orbital_elements, 3},
    {"_swephR_orbit_max_min_true_distance", (DL_FUNC) &_swephR_orbit_max_min_true_distance, 3},
    {"_swephR_sol_eclipse_when_loc", (DL_FUNC) &_swephR_sol_eclipse_when_loc, 4},
    {"_swephR_lun_eclipse_when_loc", (DL_FUNC) &_swephR_lun_eclipse_when_loc, 4},
    {"_swephR_lun_eclipse_how", (DL_FUNC) &_swephR_lun_eclipse_how, 3},
    {"_swephR_lun_eclipse_when", (DL_FUNC) &_swephR_lun_eclipse_when, 4},
    {"_swephR_rise_trans_true_hor", (DL_FUNC) &_swephR_rise_trans_true_hor, 9},
    {"_swephR_pheno_ut", (DL_FUNC) &_swephR_pheno_ut, 3},
    {"_swephR_pheno", (DL_FUNC) &_swephR_pheno, 3},
    {"_swephR_azalt", (DL_FUNC) &_swephR_azalt, 6},
    {"_swephR_azalt_rev", (DL_FUNC) &_swephR_azalt_rev, 4},
    {"_swephR_refrac_extended", (DL_FUNC) &_swephR_refrac_extended, 6},
    {"_swephR_heliacal_ut", (DL_FUNC) &_swephR_heliacal_ut, 7},
    {"_swephR_vis_limit_mag", (DL_FUNC) &_swephR_vis_limit_mag, 6},
    {"_swephR_heliacal_pheno_ut", (DL_FUNC) &_swephR_heliacal_pheno_ut, 7},
    {"_swephR_topo_arcus_visionis", (DL_FUNC) &_swephR_topo_arcus_visionis, 11},
    {"_swephR_heliacal_angle", (DL_FUNC) &_swephR_heliacal_angle, 10},
    {"_swephR_julday", (DL_FUNC) &_swephR_julday, 5},
    {"_swephR_date_conversion", (DL_FUNC) &_swephR_date_conversion, 5},
    {"_swephR_revjul", (DL_FUNC) &_swephR_revjul, 2},
    {"_swephR_deltat_ex", (DL_FUNC) &_swephR_deltat_ex, 2},
    {"_swephR_deltat", (DL_FUNC) &_swephR_deltat, 1},
    {"_swephR_set_tid_acc", (DL_FUNC) &_swephR_set_tid_acc, 1},
    {"_swephR_get_tid_acc", (DL_FUNC) &_swephR_get_tid_acc, 0},
    {"_swephR_set_delta_t_userdef", (DL_FUNC) &_swephR_set_delta_t_userdef, 1},
    {"_swephR_set_topo", (DL_FUNC) &_swephR_set_topo, 3},
    {"_swephR_set_sid_mode", (DL_FUNC) &_swephR_set_sid_mode, 3},
    {"_swephR_get_ayanamsa_name", (DL_FUNC) &_swephR_get_ayanamsa_name, 1},
    {"_swephR_get_ayanamsa_ex_ut", (DL_FUNC) &_swephR_get_ayanamsa_ex_ut, 2},
    {"_swephR_get_ayanamsa_ex", (DL_FUNC) &_swephR_get_ayanamsa_ex, 2},
    {"_swephR_houses_ex", (DL_FUNC) &_swephR_houses_ex, 5},
    {"_swephR_houses_armc", (DL_FUNC) &_swephR_houses_armc, 4},
    {"_swephR_house_name", (DL_FUNC) &_swephR_house_name, 1},
    {"_swephR_house_pos", (DL_FUNC) &_swephR_house_pos, 5},
    {"_swephR_gauquelin_sector", (DL_FUNC) &_swephR_gauquelin_sector, 8},
    {"_swephR_sidtime", (DL_FUNC) &_swephR_sidtime, 1},
    {"_swephR_day_of_week", (DL_FUNC) &_swephR_day_of_week, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_swephR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

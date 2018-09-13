// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calc_ut
Rcpp::List calc_ut(Rcpp::NumericVector tjd_ut, Rcpp::IntegerVector ipl, int iflag);
RcppExport SEXP _swephR_calc_ut(SEXP tjd_utSEXP, SEXP iplSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tjd_ut(tjd_utSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_ut(tjd_ut, ipl, iflag));
    return rcpp_result_gen;
END_RCPP
}
// calc
Rcpp::List calc(Rcpp::NumericVector tjd_et, Rcpp::IntegerVector ipl, int iflag);
RcppExport SEXP _swephR_calc(SEXP tjd_etSEXP, SEXP iplSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tjd_et(tjd_etSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(calc(tjd_et, ipl, iflag));
    return rcpp_result_gen;
END_RCPP
}
// fixstar2_ut
Rcpp::List fixstar2_ut(Rcpp::CharacterVector star, Rcpp::NumericVector tjd_ut, int iflag);
RcppExport SEXP _swephR_fixstar2_ut(SEXP starSEXP, SEXP tjd_utSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type star(starSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tjd_ut(tjd_utSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(fixstar2_ut(star, tjd_ut, iflag));
    return rcpp_result_gen;
END_RCPP
}
// fixstar2
Rcpp::List fixstar2(Rcpp::CharacterVector star, Rcpp::NumericVector tjd_et, int iflag);
RcppExport SEXP _swephR_fixstar2(SEXP starSEXP, SEXP tjd_etSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type star(starSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tjd_et(tjd_etSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(fixstar2(star, tjd_et, iflag));
    return rcpp_result_gen;
END_RCPP
}
// fixstar2_mag
Rcpp::List fixstar2_mag(Rcpp::CharacterVector star);
RcppExport SEXP _swephR_fixstar2_mag(SEXP starSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type star(starSEXP);
    rcpp_result_gen = Rcpp::wrap(fixstar2_mag(star));
    return rcpp_result_gen;
END_RCPP
}
// set_topo
void set_topo(double geolon, double geolat, double altitude);
RcppExport SEXP _swephR_set_topo(SEXP geolonSEXP, SEXP geolatSEXP, SEXP altitudeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type geolon(geolonSEXP);
    Rcpp::traits::input_parameter< double >::type geolat(geolatSEXP);
    Rcpp::traits::input_parameter< double >::type altitude(altitudeSEXP);
    set_topo(geolon, geolat, altitude);
    return R_NilValue;
END_RCPP
}
// sol_eclipse_when_loc
Rcpp::List sol_eclipse_when_loc(double tjd_start, int ifl, Rcpp::NumericVector geopos, bool backward);
RcppExport SEXP _swephR_sol_eclipse_when_loc(SEXP tjd_startSEXP, SEXP iflSEXP, SEXP geoposSEXP, SEXP backwardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_start(tjd_startSEXP);
    Rcpp::traits::input_parameter< int >::type ifl(iflSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< bool >::type backward(backwardSEXP);
    rcpp_result_gen = Rcpp::wrap(sol_eclipse_when_loc(tjd_start, ifl, geopos, backward));
    return rcpp_result_gen;
END_RCPP
}
// lun_eclipse_when_loc
Rcpp::List lun_eclipse_when_loc(double tjd_start, int ifl, Rcpp::NumericVector geopos, bool backward);
RcppExport SEXP _swephR_lun_eclipse_when_loc(SEXP tjd_startSEXP, SEXP iflSEXP, SEXP geoposSEXP, SEXP backwardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_start(tjd_startSEXP);
    Rcpp::traits::input_parameter< int >::type ifl(iflSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< bool >::type backward(backwardSEXP);
    rcpp_result_gen = Rcpp::wrap(lun_eclipse_when_loc(tjd_start, ifl, geopos, backward));
    return rcpp_result_gen;
END_RCPP
}
// lun_eclipse_how
Rcpp::List lun_eclipse_how(double tjd_start, int ifl, Rcpp::NumericVector geopos);
RcppExport SEXP _swephR_lun_eclipse_how(SEXP tjd_startSEXP, SEXP iflSEXP, SEXP geoposSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_start(tjd_startSEXP);
    Rcpp::traits::input_parameter< int >::type ifl(iflSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    rcpp_result_gen = Rcpp::wrap(lun_eclipse_how(tjd_start, ifl, geopos));
    return rcpp_result_gen;
END_RCPP
}
// lun_eclipse_when
Rcpp::List lun_eclipse_when(double tjd_start, int ifl, int ifltype, bool backward);
RcppExport SEXP _swephR_lun_eclipse_when(SEXP tjd_startSEXP, SEXP iflSEXP, SEXP ifltypeSEXP, SEXP backwardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_start(tjd_startSEXP);
    Rcpp::traits::input_parameter< int >::type ifl(iflSEXP);
    Rcpp::traits::input_parameter< int >::type ifltype(ifltypeSEXP);
    Rcpp::traits::input_parameter< bool >::type backward(backwardSEXP);
    rcpp_result_gen = Rcpp::wrap(lun_eclipse_when(tjd_start, ifl, ifltype, backward));
    return rcpp_result_gen;
END_RCPP
}
// rise_trans_true_hor
Rcpp::List rise_trans_true_hor(double tjd_ut, int ipl, std::string starname, int epheflag, int rsmi, Rcpp::NumericVector geopos, double atpress, double attemp, double horhgt);
RcppExport SEXP _swephR_rise_trans_true_hor(SEXP tjd_utSEXP, SEXP iplSEXP, SEXP starnameSEXP, SEXP epheflagSEXP, SEXP rsmiSEXP, SEXP geoposSEXP, SEXP atpressSEXP, SEXP attempSEXP, SEXP horhgtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_ut(tjd_utSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< std::string >::type starname(starnameSEXP);
    Rcpp::traits::input_parameter< int >::type epheflag(epheflagSEXP);
    Rcpp::traits::input_parameter< int >::type rsmi(rsmiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< double >::type atpress(atpressSEXP);
    Rcpp::traits::input_parameter< double >::type attemp(attempSEXP);
    Rcpp::traits::input_parameter< double >::type horhgt(horhgtSEXP);
    rcpp_result_gen = Rcpp::wrap(rise_trans_true_hor(tjd_ut, ipl, starname, epheflag, rsmi, geopos, atpress, attemp, horhgt));
    return rcpp_result_gen;
END_RCPP
}
// azalt
Rcpp::List azalt(double tjd_ut, int calc_flag, Rcpp::NumericVector geopos, double atpress, double attemp, Rcpp::NumericVector xin);
RcppExport SEXP _swephR_azalt(SEXP tjd_utSEXP, SEXP calc_flagSEXP, SEXP geoposSEXP, SEXP atpressSEXP, SEXP attempSEXP, SEXP xinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_ut(tjd_utSEXP);
    Rcpp::traits::input_parameter< int >::type calc_flag(calc_flagSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< double >::type atpress(atpressSEXP);
    Rcpp::traits::input_parameter< double >::type attemp(attempSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xin(xinSEXP);
    rcpp_result_gen = Rcpp::wrap(azalt(tjd_ut, calc_flag, geopos, atpress, attemp, xin));
    return rcpp_result_gen;
END_RCPP
}
// azalt_rev
Rcpp::List azalt_rev(double tjd_ut, int calc_flag, Rcpp::NumericVector geopos, Rcpp::NumericVector xin);
RcppExport SEXP _swephR_azalt_rev(SEXP tjd_utSEXP, SEXP calc_flagSEXP, SEXP geoposSEXP, SEXP xinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_ut(tjd_utSEXP);
    Rcpp::traits::input_parameter< int >::type calc_flag(calc_flagSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type geopos(geoposSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xin(xinSEXP);
    rcpp_result_gen = Rcpp::wrap(azalt_rev(tjd_ut, calc_flag, geopos, xin));
    return rcpp_result_gen;
END_RCPP
}
// pheno_ut
Rcpp::List pheno_ut(double tjd_ut, int ipl, int iflag);
RcppExport SEXP _swephR_pheno_ut(SEXP tjd_utSEXP, SEXP iplSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_ut(tjd_utSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(pheno_ut(tjd_ut, ipl, iflag));
    return rcpp_result_gen;
END_RCPP
}
// pheno
Rcpp::List pheno(double tjd_et, int ipl, int iflag);
RcppExport SEXP _swephR_pheno(SEXP tjd_etSEXP, SEXP iplSEXP, SEXP iflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_et(tjd_etSEXP);
    Rcpp::traits::input_parameter< int >::type ipl(iplSEXP);
    Rcpp::traits::input_parameter< int >::type iflag(iflagSEXP);
    rcpp_result_gen = Rcpp::wrap(pheno(tjd_et, ipl, iflag));
    return rcpp_result_gen;
END_RCPP
}
// heliacal_pheno_ut
Rcpp::List heliacal_pheno_ut(double tjd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, std::string objectname, int event_type, int helflag);
RcppExport SEXP _swephR_heliacal_pheno_ut(SEXP tjd_utSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP objectnameSEXP, SEXP event_typeSEXP, SEXP helflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_ut(tjd_utSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dgeo(dgeoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type datm(datmSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dobs(dobsSEXP);
    Rcpp::traits::input_parameter< std::string >::type objectname(objectnameSEXP);
    Rcpp::traits::input_parameter< int >::type event_type(event_typeSEXP);
    Rcpp::traits::input_parameter< int >::type helflag(helflagSEXP);
    rcpp_result_gen = Rcpp::wrap(heliacal_pheno_ut(tjd_ut, dgeo, datm, dobs, objectname, event_type, helflag));
    return rcpp_result_gen;
END_RCPP
}
// topo_arcus_visionis
Rcpp::List topo_arcus_visionis(double tjd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, int helflag, double mag, double AziO, double AltO, double AziS, double AziM, double AltM);
RcppExport SEXP _swephR_topo_arcus_visionis(SEXP tjd_utSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP helflagSEXP, SEXP magSEXP, SEXP AziOSEXP, SEXP AltOSEXP, SEXP AziSSEXP, SEXP AziMSEXP, SEXP AltMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_ut(tjd_utSEXP);
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
    rcpp_result_gen = Rcpp::wrap(topo_arcus_visionis(tjd_ut, dgeo, datm, dobs, helflag, mag, AziO, AltO, AziS, AziM, AltM));
    return rcpp_result_gen;
END_RCPP
}
// heliacal_angle
Rcpp::List heliacal_angle(double tjd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, int helflag, double mag, double AziO, double AziS, double AziM, double AltM);
RcppExport SEXP _swephR_heliacal_angle(SEXP tjd_utSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP helflagSEXP, SEXP magSEXP, SEXP AziOSEXP, SEXP AziSSEXP, SEXP AziMSEXP, SEXP AltMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_ut(tjd_utSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dgeo(dgeoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type datm(datmSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dobs(dobsSEXP);
    Rcpp::traits::input_parameter< int >::type helflag(helflagSEXP);
    Rcpp::traits::input_parameter< double >::type mag(magSEXP);
    Rcpp::traits::input_parameter< double >::type AziO(AziOSEXP);
    Rcpp::traits::input_parameter< double >::type AziS(AziSSEXP);
    Rcpp::traits::input_parameter< double >::type AziM(AziMSEXP);
    Rcpp::traits::input_parameter< double >::type AltM(AltMSEXP);
    rcpp_result_gen = Rcpp::wrap(heliacal_angle(tjd_ut, dgeo, datm, dobs, helflag, mag, AziO, AziS, AziM, AltM));
    return rcpp_result_gen;
END_RCPP
}
// heliacal_ut
Rcpp::List heliacal_ut(double tjdstart, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, std::string objectname, int event_type, int helflag);
RcppExport SEXP _swephR_heliacal_ut(SEXP tjdstartSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP objectnameSEXP, SEXP event_typeSEXP, SEXP helflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjdstart(tjdstartSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dgeo(dgeoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type datm(datmSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dobs(dobsSEXP);
    Rcpp::traits::input_parameter< std::string >::type objectname(objectnameSEXP);
    Rcpp::traits::input_parameter< int >::type event_type(event_typeSEXP);
    Rcpp::traits::input_parameter< int >::type helflag(helflagSEXP);
    rcpp_result_gen = Rcpp::wrap(heliacal_ut(tjdstart, dgeo, datm, dobs, objectname, event_type, helflag));
    return rcpp_result_gen;
END_RCPP
}
// vis_limit_mag
Rcpp::List vis_limit_mag(double tjd_ut, Rcpp::NumericVector dgeo, Rcpp::NumericVector datm, Rcpp::NumericVector dobs, std::string objectname, int helflag);
RcppExport SEXP _swephR_vis_limit_mag(SEXP tjd_utSEXP, SEXP dgeoSEXP, SEXP datmSEXP, SEXP dobsSEXP, SEXP objectnameSEXP, SEXP helflagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tjd_ut(tjd_utSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dgeo(dgeoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type datm(datmSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dobs(dobsSEXP);
    Rcpp::traits::input_parameter< std::string >::type objectname(objectnameSEXP);
    Rcpp::traits::input_parameter< int >::type helflag(helflagSEXP);
    rcpp_result_gen = Rcpp::wrap(vis_limit_mag(tjd_ut, dgeo, datm, dobs, objectname, helflag));
    return rcpp_result_gen;
END_RCPP
}
// refrac_extended
Rcpp::List refrac_extended(double InAlt, double geoheight, double atpress, double attemp, double lapse_rate, int calc_flag);
RcppExport SEXP _swephR_refrac_extended(SEXP InAltSEXP, SEXP geoheightSEXP, SEXP atpressSEXP, SEXP attempSEXP, SEXP lapse_rateSEXP, SEXP calc_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type InAlt(InAltSEXP);
    Rcpp::traits::input_parameter< double >::type geoheight(geoheightSEXP);
    Rcpp::traits::input_parameter< double >::type atpress(atpressSEXP);
    Rcpp::traits::input_parameter< double >::type attemp(attempSEXP);
    Rcpp::traits::input_parameter< double >::type lapse_rate(lapse_rateSEXP);
    Rcpp::traits::input_parameter< int >::type calc_flag(calc_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(refrac_extended(InAlt, geoheight, atpress, attemp, lapse_rate, calc_flag));
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
// deltat
Rcpp::NumericVector deltat(Rcpp::NumericVector tjd);
RcppExport SEXP _swephR_deltat(SEXP tjdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tjd(tjdSEXP);
    rcpp_result_gen = Rcpp::wrap(deltat(tjd));
    return rcpp_result_gen;
END_RCPP
}
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
// deltat_ex
Rcpp::List deltat_ex(Rcpp::NumericVector tjd, int ephe_flag);
RcppExport SEXP _swephR_deltat_ex(SEXP tjdSEXP, SEXP ephe_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tjd(tjdSEXP);
    Rcpp::traits::input_parameter< int >::type ephe_flag(ephe_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(deltat_ex(tjd, ephe_flag));
    return rcpp_result_gen;
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

static const R_CallMethodDef CallEntries[] = {
    {"_swephR_calc_ut", (DL_FUNC) &_swephR_calc_ut, 3},
    {"_swephR_calc", (DL_FUNC) &_swephR_calc, 3},
    {"_swephR_fixstar2_ut", (DL_FUNC) &_swephR_fixstar2_ut, 3},
    {"_swephR_fixstar2", (DL_FUNC) &_swephR_fixstar2, 3},
    {"_swephR_fixstar2_mag", (DL_FUNC) &_swephR_fixstar2_mag, 1},
    {"_swephR_set_topo", (DL_FUNC) &_swephR_set_topo, 3},
    {"_swephR_sol_eclipse_when_loc", (DL_FUNC) &_swephR_sol_eclipse_when_loc, 4},
    {"_swephR_lun_eclipse_when_loc", (DL_FUNC) &_swephR_lun_eclipse_when_loc, 4},
    {"_swephR_lun_eclipse_how", (DL_FUNC) &_swephR_lun_eclipse_how, 3},
    {"_swephR_lun_eclipse_when", (DL_FUNC) &_swephR_lun_eclipse_when, 4},
    {"_swephR_rise_trans_true_hor", (DL_FUNC) &_swephR_rise_trans_true_hor, 9},
    {"_swephR_azalt", (DL_FUNC) &_swephR_azalt, 6},
    {"_swephR_azalt_rev", (DL_FUNC) &_swephR_azalt_rev, 4},
    {"_swephR_pheno_ut", (DL_FUNC) &_swephR_pheno_ut, 3},
    {"_swephR_pheno", (DL_FUNC) &_swephR_pheno, 3},
    {"_swephR_heliacal_pheno_ut", (DL_FUNC) &_swephR_heliacal_pheno_ut, 7},
    {"_swephR_topo_arcus_visionis", (DL_FUNC) &_swephR_topo_arcus_visionis, 11},
    {"_swephR_heliacal_angle", (DL_FUNC) &_swephR_heliacal_angle, 10},
    {"_swephR_heliacal_ut", (DL_FUNC) &_swephR_heliacal_ut, 7},
    {"_swephR_vis_limit_mag", (DL_FUNC) &_swephR_vis_limit_mag, 6},
    {"_swephR_refrac_extended", (DL_FUNC) &_swephR_refrac_extended, 6},
    {"_swephR_day_of_week", (DL_FUNC) &_swephR_day_of_week, 1},
    {"_swephR_get_tid_acc", (DL_FUNC) &_swephR_get_tid_acc, 0},
    {"_swephR_version", (DL_FUNC) &_swephR_version, 0},
    {"_swephR_set_tid_acc", (DL_FUNC) &_swephR_set_tid_acc, 1},
    {"_swephR_deltat", (DL_FUNC) &_swephR_deltat, 1},
    {"_swephR_set_ephe_path", (DL_FUNC) &_swephR_set_ephe_path, 1},
    {"_swephR_julday", (DL_FUNC) &_swephR_julday, 5},
    {"_swephR_set_delta_t_userdef", (DL_FUNC) &_swephR_set_delta_t_userdef, 1},
    {"_swephR_deltat_ex", (DL_FUNC) &_swephR_deltat_ex, 2},
    {"_swephR_close", (DL_FUNC) &_swephR_close, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_swephR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

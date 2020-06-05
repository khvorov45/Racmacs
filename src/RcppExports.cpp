// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ac_pointLogLik
double ac_pointLogLik(double map_dist, double colbase, double max_logtiter, double min_logtiter, double error_sd, double ag_reactivity);
RcppExport SEXP _Racmacs_ac_pointLogLik(SEXP map_distSEXP, SEXP colbaseSEXP, SEXP max_logtiterSEXP, SEXP min_logtiterSEXP, SEXP error_sdSEXP, SEXP ag_reactivitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type map_dist(map_distSEXP);
    Rcpp::traits::input_parameter< double >::type colbase(colbaseSEXP);
    Rcpp::traits::input_parameter< double >::type max_logtiter(max_logtiterSEXP);
    Rcpp::traits::input_parameter< double >::type min_logtiter(min_logtiterSEXP);
    Rcpp::traits::input_parameter< double >::type error_sd(error_sdSEXP);
    Rcpp::traits::input_parameter< double >::type ag_reactivity(ag_reactivitySEXP);
    rcpp_result_gen = Rcpp::wrap(ac_pointLogLik(map_dist, colbase, max_logtiter, min_logtiter, error_sd, ag_reactivity));
    return rcpp_result_gen;
END_RCPP
}
// ac_srNegLogLik
double ac_srNegLogLik(double colbase, NumericVector map_dists, NumericVector max_logtiters, NumericVector min_logtiters, double error_sd);
RcppExport SEXP _Racmacs_ac_srNegLogLik(SEXP colbaseSEXP, SEXP map_distsSEXP, SEXP max_logtitersSEXP, SEXP min_logtitersSEXP, SEXP error_sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type colbase(colbaseSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type map_dists(map_distsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type max_logtiters(max_logtitersSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type min_logtiters(min_logtitersSEXP);
    Rcpp::traits::input_parameter< double >::type error_sd(error_sdSEXP);
    rcpp_result_gen = Rcpp::wrap(ac_srNegLogLik(colbase, map_dists, max_logtiters, min_logtiters, error_sd));
    return rcpp_result_gen;
END_RCPP
}
// ac_optimizationNegLogLik
double ac_optimizationNegLogLik(NumericMatrix ag_coords, NumericMatrix sr_coords, NumericMatrix max_logtiter_matrix, NumericMatrix min_logtiter_matrix, NumericMatrix na_val_matrix, NumericVector colbases, NumericVector ag_reactivitys, double error_sd, double colbase_mean, double colbase_sd, double ag_reactivity_sd);
RcppExport SEXP _Racmacs_ac_optimizationNegLogLik(SEXP ag_coordsSEXP, SEXP sr_coordsSEXP, SEXP max_logtiter_matrixSEXP, SEXP min_logtiter_matrixSEXP, SEXP na_val_matrixSEXP, SEXP colbasesSEXP, SEXP ag_reactivitysSEXP, SEXP error_sdSEXP, SEXP colbase_meanSEXP, SEXP colbase_sdSEXP, SEXP ag_reactivity_sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ag_coords(ag_coordsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sr_coords(sr_coordsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type max_logtiter_matrix(max_logtiter_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type min_logtiter_matrix(min_logtiter_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type na_val_matrix(na_val_matrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type colbases(colbasesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ag_reactivitys(ag_reactivitysSEXP);
    Rcpp::traits::input_parameter< double >::type error_sd(error_sdSEXP);
    Rcpp::traits::input_parameter< double >::type colbase_mean(colbase_meanSEXP);
    Rcpp::traits::input_parameter< double >::type colbase_sd(colbase_sdSEXP);
    Rcpp::traits::input_parameter< double >::type ag_reactivity_sd(ag_reactivity_sdSEXP);
    rcpp_result_gen = Rcpp::wrap(ac_optimizationNegLogLik(ag_coords, sr_coords, max_logtiter_matrix, min_logtiter_matrix, na_val_matrix, colbases, ag_reactivitys, error_sd, colbase_mean, colbase_sd, ag_reactivity_sd));
    return rcpp_result_gen;
END_RCPP
}
// ac_optimizationNegLogLikWrapper
double ac_optimizationNegLogLikWrapper(NumericVector pars, NumericMatrix ag_coords, NumericMatrix sr_coords, NumericMatrix max_logtiter_matrix, NumericMatrix min_logtiter_matrix, NumericMatrix na_val_matrix, NumericVector colbases, NumericVector ag_reactivitys, double error_sd, double colbase_mean, double colbase_sd, double ag_reactivity_sd, bool optim_ag_coords, bool optim_sr_coords, bool optim_colbases, bool optim_ag_reactivitys);
RcppExport SEXP _Racmacs_ac_optimizationNegLogLikWrapper(SEXP parsSEXP, SEXP ag_coordsSEXP, SEXP sr_coordsSEXP, SEXP max_logtiter_matrixSEXP, SEXP min_logtiter_matrixSEXP, SEXP na_val_matrixSEXP, SEXP colbasesSEXP, SEXP ag_reactivitysSEXP, SEXP error_sdSEXP, SEXP colbase_meanSEXP, SEXP colbase_sdSEXP, SEXP ag_reactivity_sdSEXP, SEXP optim_ag_coordsSEXP, SEXP optim_sr_coordsSEXP, SEXP optim_colbasesSEXP, SEXP optim_ag_reactivitysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ag_coords(ag_coordsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sr_coords(sr_coordsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type max_logtiter_matrix(max_logtiter_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type min_logtiter_matrix(min_logtiter_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type na_val_matrix(na_val_matrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type colbases(colbasesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ag_reactivitys(ag_reactivitysSEXP);
    Rcpp::traits::input_parameter< double >::type error_sd(error_sdSEXP);
    Rcpp::traits::input_parameter< double >::type colbase_mean(colbase_meanSEXP);
    Rcpp::traits::input_parameter< double >::type colbase_sd(colbase_sdSEXP);
    Rcpp::traits::input_parameter< double >::type ag_reactivity_sd(ag_reactivity_sdSEXP);
    Rcpp::traits::input_parameter< bool >::type optim_ag_coords(optim_ag_coordsSEXP);
    Rcpp::traits::input_parameter< bool >::type optim_sr_coords(optim_sr_coordsSEXP);
    Rcpp::traits::input_parameter< bool >::type optim_colbases(optim_colbasesSEXP);
    Rcpp::traits::input_parameter< bool >::type optim_ag_reactivitys(optim_ag_reactivitysSEXP);
    rcpp_result_gen = Rcpp::wrap(ac_optimizationNegLogLikWrapper(pars, ag_coords, sr_coords, max_logtiter_matrix, min_logtiter_matrix, na_val_matrix, colbases, ag_reactivitys, error_sd, colbase_mean, colbase_sd, ag_reactivity_sd, optim_ag_coords, optim_sr_coords, optim_colbases, optim_ag_reactivitys));
    return rcpp_result_gen;
END_RCPP
}
// calc_coord_dist
NumericVector calc_coord_dist(NumericMatrix coords1, NumericMatrix coords2);
RcppExport SEXP _Racmacs_calc_coord_dist(SEXP coords1SEXP, SEXP coords2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type coords1(coords1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coords2(coords2SEXP);
    rcpp_result_gen = Rcpp::wrap(calc_coord_dist(coords1, coords2));
    return rcpp_result_gen;
END_RCPP
}
// euc_dist
double euc_dist(NumericVector coords1, NumericVector coords2);
RcppExport SEXP _Racmacs_euc_dist(SEXP coords1SEXP, SEXP coords2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type coords1(coords1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type coords2(coords2SEXP);
    rcpp_result_gen = Rcpp::wrap(euc_dist(coords1, coords2));
    return rcpp_result_gen;
END_RCPP
}
// ac_mapDists
NumericMatrix ac_mapDists(NumericMatrix ag_coords, NumericMatrix sr_coords);
RcppExport SEXP _Racmacs_ac_mapDists(SEXP ag_coordsSEXP, SEXP sr_coordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ag_coords(ag_coordsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sr_coords(sr_coordsSEXP);
    rcpp_result_gen = Rcpp::wrap(ac_mapDists(ag_coords, sr_coords));
    return rcpp_result_gen;
END_RCPP
}
// ac_pointStress
double ac_pointStress(double map_dist, double table_dist, bool less_than);
RcppExport SEXP _Racmacs_ac_pointStress(SEXP map_distSEXP, SEXP table_distSEXP, SEXP less_thanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type map_dist(map_distSEXP);
    Rcpp::traits::input_parameter< double >::type table_dist(table_distSEXP);
    Rcpp::traits::input_parameter< bool >::type less_than(less_thanSEXP);
    rcpp_result_gen = Rcpp::wrap(ac_pointStress(map_dist, table_dist, less_than));
    return rcpp_result_gen;
END_RCPP
}
// ac_coordStress
double ac_coordStress(NumericVector map_dist, NumericVector table_dist, LogicalVector less_than);
RcppExport SEXP _Racmacs_ac_coordStress(SEXP map_distSEXP, SEXP table_distSEXP, SEXP less_thanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type map_dist(map_distSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type table_dist(table_distSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type less_than(less_thanSEXP);
    rcpp_result_gen = Rcpp::wrap(ac_coordStress(map_dist, table_dist, less_than));
    return rcpp_result_gen;
END_RCPP
}
// grid_search
NumericVector grid_search(NumericMatrix test_coords, NumericMatrix pair_coords, NumericVector table_dist, NumericVector lessthans, NumericVector morethans, NumericVector na_vals);
RcppExport SEXP _Racmacs_grid_search(SEXP test_coordsSEXP, SEXP pair_coordsSEXP, SEXP table_distSEXP, SEXP lessthansSEXP, SEXP morethansSEXP, SEXP na_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type test_coords(test_coordsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pair_coords(pair_coordsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type table_dist(table_distSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lessthans(lessthansSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type morethans(morethansSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type na_vals(na_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(grid_search(test_coords, pair_coords, table_dist, lessthans, morethans, na_vals));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Racmacs_ac_pointLogLik", (DL_FUNC) &_Racmacs_ac_pointLogLik, 6},
    {"_Racmacs_ac_srNegLogLik", (DL_FUNC) &_Racmacs_ac_srNegLogLik, 5},
    {"_Racmacs_ac_optimizationNegLogLik", (DL_FUNC) &_Racmacs_ac_optimizationNegLogLik, 11},
    {"_Racmacs_ac_optimizationNegLogLikWrapper", (DL_FUNC) &_Racmacs_ac_optimizationNegLogLikWrapper, 16},
    {"_Racmacs_calc_coord_dist", (DL_FUNC) &_Racmacs_calc_coord_dist, 2},
    {"_Racmacs_euc_dist", (DL_FUNC) &_Racmacs_euc_dist, 2},
    {"_Racmacs_ac_mapDists", (DL_FUNC) &_Racmacs_ac_mapDists, 2},
    {"_Racmacs_ac_pointStress", (DL_FUNC) &_Racmacs_ac_pointStress, 3},
    {"_Racmacs_ac_coordStress", (DL_FUNC) &_Racmacs_ac_coordStress, 3},
    {"_Racmacs_grid_search", (DL_FUNC) &_Racmacs_grid_search, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_Racmacs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

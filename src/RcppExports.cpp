// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// prtestcpp
CharacterVector prtestcpp(CharacterVector path);
RcppExport SEXP _readit_prtestcpp(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(prtestcpp(path));
    return rcpp_result_gen;
END_RCPP
}
// readitcpp
CharacterVector readitcpp(CharacterVector path);
RcppExport SEXP _readit_readitcpp(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(readitcpp(path));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_readit_prtestcpp", (DL_FUNC) &_readit_prtestcpp, 1},
    {"_readit_readitcpp", (DL_FUNC) &_readit_readitcpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_readit(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

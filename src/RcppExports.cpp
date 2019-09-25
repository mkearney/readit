// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// readthiscpp
std::string readthiscpp(std::string url);
RcppExport SEXP _readthat_readthiscpp(SEXP urlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type url(urlSEXP);
    rcpp_result_gen = Rcpp::wrap(readthiscpp(url));
    return rcpp_result_gen;
END_RCPP
}
// downloadthatcpp
std::string downloadthatcpp(const std::string& url, const std::string& out);
RcppExport SEXP _readthat_downloadthatcpp(SEXP urlSEXP, SEXP outSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type url(urlSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type out(outSEXP);
    rcpp_result_gen = Rcpp::wrap(downloadthatcpp(url, out));
    return rcpp_result_gen;
END_RCPP
}
// readthatcpp
CharacterVector readthatcpp(std::string path);
RcppExport SEXP _readthat_readthatcpp(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(readthatcpp(path));
    return rcpp_result_gen;
END_RCPP
}
// asyncpp
std::vector<std::string> asyncpp(std::vector<std::string> urls);
RcppExport SEXP _readthat_asyncpp(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type urls(urlsSEXP);
    rcpp_result_gen = Rcpp::wrap(asyncpp(urls));
    return rcpp_result_gen;
END_RCPP
}
// readthosecpp
std::vector<std::string> readthosecpp(std::vector<std::string> urls);
RcppExport SEXP _readthat_readthosecpp(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type urls(urlsSEXP);
    rcpp_result_gen = Rcpp::wrap(readthosecpp(urls));
    return rcpp_result_gen;
END_RCPP
}
// downloadthosecpp
std::vector<std::string> downloadthosecpp(std::vector<std::string> urls, std::vector<std::string> outs);
RcppExport SEXP _readthat_downloadthosecpp(SEXP urlsSEXP, SEXP outsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type outs(outsSEXP);
    rcpp_result_gen = Rcpp::wrap(downloadthosecpp(urls, outs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_readthat_readthiscpp", (DL_FUNC) &_readthat_readthiscpp, 1},
    {"_readthat_downloadthatcpp", (DL_FUNC) &_readthat_downloadthatcpp, 2},
    {"_readthat_readthatcpp", (DL_FUNC) &_readthat_readthatcpp, 1},
    {"_readthat_asyncpp", (DL_FUNC) &_readthat_asyncpp, 1},
    {"_readthat_readthosecpp", (DL_FUNC) &_readthat_readthosecpp, 1},
    {"_readthat_downloadthosecpp", (DL_FUNC) &_readthat_downloadthosecpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_readthat(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

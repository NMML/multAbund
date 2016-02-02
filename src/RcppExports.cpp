// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mult_abund_mcmc
List mult_abund_mcmc(const Rcpp::List& data_list, const Rcpp::List& pred_list, const Rcpp::List& initial_list, const Rcpp::List& prior_list, const int& block, const int& begin_group_update, const int& burn, const int& iter);
RcppExport SEXP multAbund_mult_abund_mcmc(SEXP data_listSEXP, SEXP pred_listSEXP, SEXP initial_listSEXP, SEXP prior_listSEXP, SEXP blockSEXP, SEXP begin_group_updateSEXP, SEXP burnSEXP, SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type data_list(data_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type pred_list(pred_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type initial_list(initial_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior_list(prior_listSEXP);
    Rcpp::traits::input_parameter< const int& >::type block(blockSEXP);
    Rcpp::traits::input_parameter< const int& >::type begin_group_update(begin_group_updateSEXP);
    Rcpp::traits::input_parameter< const int& >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< const int& >::type iter(iterSEXP);
    __result = Rcpp::wrap(mult_abund_mcmc(data_list, pred_list, initial_list, prior_list, block, begin_group_update, burn, iter));
    return __result;
END_RCPP
}
// mult_occ_mcmc
List mult_occ_mcmc(const Rcpp::List& data_list, const Rcpp::List& pred_list, const Rcpp::List& initial_list, const Rcpp::List& prior_list, const int& block, const int& begin_group_update, const int& burn, const int& iter);
RcppExport SEXP multAbund_mult_occ_mcmc(SEXP data_listSEXP, SEXP pred_listSEXP, SEXP initial_listSEXP, SEXP prior_listSEXP, SEXP blockSEXP, SEXP begin_group_updateSEXP, SEXP burnSEXP, SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type data_list(data_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type pred_list(pred_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type initial_list(initial_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior_list(prior_listSEXP);
    Rcpp::traits::input_parameter< const int& >::type block(blockSEXP);
    Rcpp::traits::input_parameter< const int& >::type begin_group_update(begin_group_updateSEXP);
    Rcpp::traits::input_parameter< const int& >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< const int& >::type iter(iterSEXP);
    __result = Rcpp::wrap(mult_occ_mcmc(data_list, pred_list, initial_list, prior_list, block, begin_group_update, burn, iter));
    return __result;
END_RCPP
}
// mult_zip_mcmc
List mult_zip_mcmc(const Rcpp::List& data_list, const Rcpp::List& pred_list, const Rcpp::List& initial_list, const Rcpp::List& prior_list, const int& block, const int& begin_group_update, const int& burn, const int& iter);
RcppExport SEXP multAbund_mult_zip_mcmc(SEXP data_listSEXP, SEXP pred_listSEXP, SEXP initial_listSEXP, SEXP prior_listSEXP, SEXP blockSEXP, SEXP begin_group_updateSEXP, SEXP burnSEXP, SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type data_list(data_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type pred_list(pred_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type initial_list(initial_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior_list(prior_listSEXP);
    Rcpp::traits::input_parameter< const int& >::type block(blockSEXP);
    Rcpp::traits::input_parameter< const int& >::type begin_group_update(begin_group_updateSEXP);
    Rcpp::traits::input_parameter< const int& >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< const int& >::type iter(iterSEXP);
    __result = Rcpp::wrap(mult_zip_mcmc(data_list, pred_list, initial_list, prior_list, block, begin_group_update, burn, iter));
    return __result;
END_RCPP
}
// pois_reg_mcmc
List pois_reg_mcmc(const Rcpp::List& data_list, const Rcpp::List& pred_list, const Rcpp::List& prior_list, const Rcpp::List& initial_list, const int& block, const int& burn, const int& iter);
RcppExport SEXP multAbund_pois_reg_mcmc(SEXP data_listSEXP, SEXP pred_listSEXP, SEXP prior_listSEXP, SEXP initial_listSEXP, SEXP blockSEXP, SEXP burnSEXP, SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type data_list(data_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type pred_list(pred_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior_list(prior_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type initial_list(initial_listSEXP);
    Rcpp::traits::input_parameter< const int& >::type block(blockSEXP);
    Rcpp::traits::input_parameter< const int& >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< const int& >::type iter(iterSEXP);
    __result = Rcpp::wrap(pois_reg_mcmc(data_list, pred_list, prior_list, initial_list, block, burn, iter));
    return __result;
END_RCPP
}
// probit_reg_mcmc
List probit_reg_mcmc(const Rcpp::List& data_list, const Rcpp::List& pred_list, const Rcpp::List& prior_list, const Rcpp::List& initial_list, const int& burn, const int& iter);
RcppExport SEXP multAbund_probit_reg_mcmc(SEXP data_listSEXP, SEXP pred_listSEXP, SEXP prior_listSEXP, SEXP initial_listSEXP, SEXP burnSEXP, SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type data_list(data_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type pred_list(pred_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior_list(prior_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type initial_list(initial_listSEXP);
    Rcpp::traits::input_parameter< const int& >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< const int& >::type iter(iterSEXP);
    __result = Rcpp::wrap(probit_reg_mcmc(data_list, pred_list, prior_list, initial_list, burn, iter));
    return __result;
END_RCPP
}
// zip_reg_mcmc
List zip_reg_mcmc(const Rcpp::List& data_list, const Rcpp::List& pred_list, const Rcpp::List& prior_list, const Rcpp::List& initial_list, const int& block, const int& burn, const int& iter);
RcppExport SEXP multAbund_zip_reg_mcmc(SEXP data_listSEXP, SEXP pred_listSEXP, SEXP prior_listSEXP, SEXP initial_listSEXP, SEXP blockSEXP, SEXP burnSEXP, SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type data_list(data_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type pred_list(pred_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior_list(prior_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type initial_list(initial_listSEXP);
    Rcpp::traits::input_parameter< const int& >::type block(blockSEXP);
    Rcpp::traits::input_parameter< const int& >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< const int& >::type iter(iterSEXP);
    __result = Rcpp::wrap(zip_reg_mcmc(data_list, pred_list, prior_list, initial_list, block, burn, iter));
    return __result;
END_RCPP
}

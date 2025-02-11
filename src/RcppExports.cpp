// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// dpcode
Rcpp::List dpcode(arma::vec q1, arma::vec q1L, arma::vec q2L, int times, int cut);
RcppExport SEXP _fdasrvf_dpcode(SEXP q1SEXP, SEXP q1LSEXP, SEXP q2LSEXP, SEXP timesSEXP, SEXP cutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type q1(q1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type q1L(q1LSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type q2L(q2LSEXP);
    Rcpp::traits::input_parameter< int >::type times(timesSEXP);
    Rcpp::traits::input_parameter< int >::type cut(cutSEXP);
    rcpp_result_gen = Rcpp::wrap(dpcode(q1, q1L, q2L, times, cut));
    return rcpp_result_gen;
END_RCPP
}
// simucode
Rcpp::List simucode(int iter, int p, arma::vec qt1_5, arma::vec qt2_5, int L, float tau, int times, float kappa, float alpha, float beta, float powera, float dist, float dist_min, arma::vec best_match, arma::vec match, int thin, int cut);
RcppExport SEXP _fdasrvf_simucode(SEXP iterSEXP, SEXP pSEXP, SEXP qt1_5SEXP, SEXP qt2_5SEXP, SEXP LSEXP, SEXP tauSEXP, SEXP timesSEXP, SEXP kappaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP poweraSEXP, SEXP distSEXP, SEXP dist_minSEXP, SEXP best_matchSEXP, SEXP matchSEXP, SEXP thinSEXP, SEXP cutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type qt1_5(qt1_5SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type qt2_5(qt2_5SEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< float >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< int >::type times(timesSEXP);
    Rcpp::traits::input_parameter< float >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< float >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< float >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< float >::type powera(poweraSEXP);
    Rcpp::traits::input_parameter< float >::type dist(distSEXP);
    Rcpp::traits::input_parameter< float >::type dist_min(dist_minSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type best_match(best_matchSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< int >::type cut(cutSEXP);
    rcpp_result_gen = Rcpp::wrap(simucode(iter, p, qt1_5, qt2_5, L, tau, times, kappa, alpha, beta, powera, dist, dist_min, best_match, match, thin, cut));
    return rcpp_result_gen;
END_RCPP
}
// itercode
Rcpp::List itercode(int iter, int n, int m, arma::vec mu_5, arma::mat match_matrix, arma::mat qt_matrix, arma::mat qt_fitted_matrix, int L, float tau, int times, float kappa, float alpha, float beta, float powera, arma::vec best_vec, arma::vec dist_vec, arma::mat best_match_matrix, arma::vec mu_prior, float var_const, arma::vec sumdist, int thin, arma::mat mu_q, arma::mat mu_q_standard, float logmax, int burnin, float AVG);
RcppExport SEXP _fdasrvf_itercode(SEXP iterSEXP, SEXP nSEXP, SEXP mSEXP, SEXP mu_5SEXP, SEXP match_matrixSEXP, SEXP qt_matrixSEXP, SEXP qt_fitted_matrixSEXP, SEXP LSEXP, SEXP tauSEXP, SEXP timesSEXP, SEXP kappaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP poweraSEXP, SEXP best_vecSEXP, SEXP dist_vecSEXP, SEXP best_match_matrixSEXP, SEXP mu_priorSEXP, SEXP var_constSEXP, SEXP sumdistSEXP, SEXP thinSEXP, SEXP mu_qSEXP, SEXP mu_q_standardSEXP, SEXP logmaxSEXP, SEXP burninSEXP, SEXP AVGSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_5(mu_5SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type match_matrix(match_matrixSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type qt_matrix(qt_matrixSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type qt_fitted_matrix(qt_fitted_matrixSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< float >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< int >::type times(timesSEXP);
    Rcpp::traits::input_parameter< float >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< float >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< float >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< float >::type powera(poweraSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type best_vec(best_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dist_vec(dist_vecSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type best_match_matrix(best_match_matrixSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_prior(mu_priorSEXP);
    Rcpp::traits::input_parameter< float >::type var_const(var_constSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sumdist(sumdistSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_q(mu_qSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_q_standard(mu_q_standardSEXP);
    Rcpp::traits::input_parameter< float >::type logmax(logmaxSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< float >::type AVG(AVGSEXP);
    rcpp_result_gen = Rcpp::wrap(itercode(iter, n, m, mu_5, match_matrix, qt_matrix, qt_fitted_matrix, L, tau, times, kappa, alpha, beta, powera, best_vec, dist_vec, best_match_matrix, mu_prior, var_const, sumdist, thin, mu_q, mu_q_standard, logmax, burnin, AVG));
    return rcpp_result_gen;
END_RCPP
}
// calcY
arma::vec calcY(double area, arma::vec gy);
RcppExport SEXP _fdasrvf_calcY(SEXP areaSEXP, SEXP gySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type area(areaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type gy(gySEXP);
    rcpp_result_gen = Rcpp::wrap(calcY(area, gy));
    return rcpp_result_gen;
END_RCPP
}
// cuL2norm2
Rcpp::NumericVector cuL2norm2(arma::vec x, arma::vec y);
RcppExport SEXP _fdasrvf_cuL2norm2(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cuL2norm2(x, y));
    return rcpp_result_gen;
END_RCPP
}
// trapzCpp
double trapzCpp(arma::vec x, arma::vec y);
RcppExport SEXP _fdasrvf_trapzCpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(trapzCpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// order_l2norm
double order_l2norm(arma::vec x, arma::vec y);
RcppExport SEXP _fdasrvf_order_l2norm(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(order_l2norm(x, y));
    return rcpp_result_gen;
END_RCPP
}
// find_grad_2D
Rcpp::List find_grad_2D(Rcpp::NumericVector dfdu, Rcpp::NumericVector dfdv, Rcpp::NumericVector f, int n, int t, int d);
RcppExport SEXP _fdasrvf_find_grad_2D(SEXP dfduSEXP, SEXP dfdvSEXP, SEXP fSEXP, SEXP nSEXP, SEXP tSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dfdu(dfduSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dfdv(dfdvSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(find_grad_2D(dfdu, dfdv, f, n, t, d));
    return rcpp_result_gen;
END_RCPP
}
// check_cross
int check_cross(Rcpp::NumericVector f, int n, int t, int D);
RcppExport SEXP _fdasrvf_check_cross(SEXP fSEXP, SEXP nSEXP, SEXP tSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(check_cross(f, n, t, D));
    return rcpp_result_gen;
END_RCPP
}
// find_phistar
Rcpp::NumericVector find_phistar(Rcpp::NumericVector w, Rcpp::NumericVector q, Rcpp::NumericVector b, int n, int t, int d, int K);
RcppExport SEXP _fdasrvf_find_phistar(SEXP wSEXP, SEXP qSEXP, SEXP bSEXP, SEXP nSEXP, SEXP tSEXP, SEXP dSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(find_phistar(w, q, b, n, t, d, K));
    return rcpp_result_gen;
END_RCPP
}
// mlogit_warp_grad_wrap
Rcpp::NumericVector mlogit_warp_grad_wrap(int m1, int m2, Rcpp::NumericVector alpha, Rcpp::NumericVector beta, Rcpp::NumericVector ti, Rcpp::NumericVector gami, Rcpp::NumericVector q, Rcpp::IntegerVector y, int max_itri, double toli, double deltai, int displayi);
RcppExport SEXP _fdasrvf_mlogit_warp_grad_wrap(SEXP m1SEXP, SEXP m2SEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tiSEXP, SEXP gamiSEXP, SEXP qSEXP, SEXP ySEXP, SEXP max_itriSEXP, SEXP toliSEXP, SEXP deltaiSEXP, SEXP displayiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ti(tiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type gami(gamiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type max_itri(max_itriSEXP);
    Rcpp::traits::input_parameter< double >::type toli(toliSEXP);
    Rcpp::traits::input_parameter< double >::type deltai(deltaiSEXP);
    Rcpp::traits::input_parameter< int >::type displayi(displayiSEXP);
    rcpp_result_gen = Rcpp::wrap(mlogit_warp_grad_wrap(m1, m2, alpha, beta, ti, gami, q, y, max_itri, toli, deltai, displayi));
    return rcpp_result_gen;
END_RCPP
}
// DPQ2
Rcpp::List DPQ2(Rcpp::NumericVector Q1, Rcpp::NumericVector T1, Rcpp::NumericVector Q2, Rcpp::NumericVector T2, int m1, int n1, int n2, Rcpp::NumericVector tv1, Rcpp::NumericVector tv2, int n1v, int n2v, double lam1, int nbhd_dim);
RcppExport SEXP _fdasrvf_DPQ2(SEXP Q1SEXP, SEXP T1SEXP, SEXP Q2SEXP, SEXP T2SEXP, SEXP m1SEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP tv1SEXP, SEXP tv2SEXP, SEXP n1vSEXP, SEXP n2vSEXP, SEXP lam1SEXP, SEXP nbhd_dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Q1(Q1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type T1(T1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Q2(Q2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type T2(T2SEXP);
    Rcpp::traits::input_parameter< int >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tv1(tv1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tv2(tv2SEXP);
    Rcpp::traits::input_parameter< int >::type n1v(n1vSEXP);
    Rcpp::traits::input_parameter< int >::type n2v(n2vSEXP);
    Rcpp::traits::input_parameter< double >::type lam1(lam1SEXP);
    Rcpp::traits::input_parameter< int >::type nbhd_dim(nbhd_dimSEXP);
    rcpp_result_gen = Rcpp::wrap(DPQ2(Q1, T1, Q2, T2, m1, n1, n2, tv1, tv2, n1v, n2v, lam1, nbhd_dim));
    return rcpp_result_gen;
END_RCPP
}
// DPQ
Rcpp::NumericVector DPQ(Rcpp::NumericVector Q1, Rcpp::NumericVector Q2, int n1, int N1, double lam1, int pen1, int Disp);
RcppExport SEXP _fdasrvf_DPQ(SEXP Q1SEXP, SEXP Q2SEXP, SEXP n1SEXP, SEXP N1SEXP, SEXP lam1SEXP, SEXP pen1SEXP, SEXP DispSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Q1(Q1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Q2(Q2SEXP);
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< int >::type N1(N1SEXP);
    Rcpp::traits::input_parameter< double >::type lam1(lam1SEXP);
    Rcpp::traits::input_parameter< int >::type pen1(pen1SEXP);
    Rcpp::traits::input_parameter< int >::type Disp(DispSEXP);
    rcpp_result_gen = Rcpp::wrap(DPQ(Q1, Q2, n1, N1, lam1, pen1, Disp));
    return rcpp_result_gen;
END_RCPP
}
// rlbfgs
arma::vec rlbfgs(arma::vec q1, arma::vec q2, arma::vec time, int maxiter, double lam, int penalty);
RcppExport SEXP _fdasrvf_rlbfgs(SEXP q1SEXP, SEXP q2SEXP, SEXP timeSEXP, SEXP maxiterSEXP, SEXP lamSEXP, SEXP penaltySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type q1(q1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type q2(q2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< int >::type penalty(penaltySEXP);
    rcpp_result_gen = Rcpp::wrap(rlbfgs(q1, q2, time, maxiter, lam, penalty));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fdasrvf_dpcode", (DL_FUNC) &_fdasrvf_dpcode, 5},
    {"_fdasrvf_simucode", (DL_FUNC) &_fdasrvf_simucode, 17},
    {"_fdasrvf_itercode", (DL_FUNC) &_fdasrvf_itercode, 26},
    {"_fdasrvf_calcY", (DL_FUNC) &_fdasrvf_calcY, 2},
    {"_fdasrvf_cuL2norm2", (DL_FUNC) &_fdasrvf_cuL2norm2, 2},
    {"_fdasrvf_trapzCpp", (DL_FUNC) &_fdasrvf_trapzCpp, 2},
    {"_fdasrvf_order_l2norm", (DL_FUNC) &_fdasrvf_order_l2norm, 2},
    {"_fdasrvf_find_grad_2D", (DL_FUNC) &_fdasrvf_find_grad_2D, 6},
    {"_fdasrvf_check_cross", (DL_FUNC) &_fdasrvf_check_cross, 4},
    {"_fdasrvf_find_phistar", (DL_FUNC) &_fdasrvf_find_phistar, 7},
    {"_fdasrvf_mlogit_warp_grad_wrap", (DL_FUNC) &_fdasrvf_mlogit_warp_grad_wrap, 12},
    {"_fdasrvf_DPQ2", (DL_FUNC) &_fdasrvf_DPQ2, 13},
    {"_fdasrvf_DPQ", (DL_FUNC) &_fdasrvf_DPQ, 7},
    {"_fdasrvf_rlbfgs", (DL_FUNC) &_fdasrvf_rlbfgs, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_fdasrvf(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

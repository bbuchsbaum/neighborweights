// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cross_fspatial_weights
NumericMatrix cross_fspatial_weights(List indices, List distances, NumericMatrix feature_mat1, NumericMatrix feature_mat2, double nels, double sigma, double fsigma, double alpha, bool binary);
RcppExport SEXP neighborweights_cross_fspatial_weights(SEXP indicesSEXP, SEXP distancesSEXP, SEXP feature_mat1SEXP, SEXP feature_mat2SEXP, SEXP nelsSEXP, SEXP sigmaSEXP, SEXP fsigmaSEXP, SEXP alphaSEXP, SEXP binarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< List >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type feature_mat1(feature_mat1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type feature_mat2(feature_mat2SEXP);
    Rcpp::traits::input_parameter< double >::type nels(nelsSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type fsigma(fsigmaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    rcpp_result_gen = Rcpp::wrap(cross_fspatial_weights(indices, distances, feature_mat1, feature_mat2, nels, sigma, fsigma, alpha, binary));
    return rcpp_result_gen;
END_RCPP
}
// fspatial_weights
NumericMatrix fspatial_weights(List indices, List distances, NumericMatrix feature_mat, double nels, double sigma, double fsigma, double alpha, bool binary);
RcppExport SEXP neighborweights_fspatial_weights(SEXP indicesSEXP, SEXP distancesSEXP, SEXP feature_matSEXP, SEXP nelsSEXP, SEXP sigmaSEXP, SEXP fsigmaSEXP, SEXP alphaSEXP, SEXP binarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< List >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type feature_mat(feature_matSEXP);
    Rcpp::traits::input_parameter< double >::type nels(nelsSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type fsigma(fsigmaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    rcpp_result_gen = Rcpp::wrap(fspatial_weights(indices, distances, feature_mat, nels, sigma, fsigma, alpha, binary));
    return rcpp_result_gen;
END_RCPP
}
// spatial_weights
NumericMatrix spatial_weights(List indices, List distances, double nels, double sigma, bool binary);
RcppExport SEXP neighborweights_spatial_weights(SEXP indicesSEXP, SEXP distancesSEXP, SEXP nelsSEXP, SEXP sigmaSEXP, SEXP binarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< List >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< double >::type nels(nelsSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    rcpp_result_gen = Rcpp::wrap(spatial_weights(indices, distances, nels, sigma, binary));
    return rcpp_result_gen;
END_RCPP
}
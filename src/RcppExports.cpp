// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_apply_cigar
std::vector<std::string> rcpp_apply_cigar(std::vector<std::string> cigar, std::vector<std::string> query);
RcppExport SEXP _epialleleR_rcpp_apply_cigar(SEXP cigarSEXP, SEXP querySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type cigar(cigarSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type query(querySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_cigar(cigar, query));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_cx_report
std::vector<int> rcpp_cx_report(std::vector<int> rname, std::vector<int> strand, std::vector<int> start, std::vector<std::string> xm, std::vector<bool> pass, std::string ctx);
RcppExport SEXP _epialleleR_rcpp_cx_report(SEXP rnameSEXP, SEXP strandSEXP, SEXP startSEXP, SEXP xmSEXP, SEXP passSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type rname(rnameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type strand(strandSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type xm(xmSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type pass(passSEXP);
    Rcpp::traits::input_parameter< std::string >::type ctx(ctxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_cx_report(rname, strand, start, xm, pass, ctx));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_char_to_context
std::vector<std::string> rcpp_char_to_context(std::vector<unsigned char> ctx);
RcppExport SEXP _epialleleR_rcpp_char_to_context(SEXP ctxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<unsigned char> >::type ctx(ctxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_char_to_context(ctx));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_fast_factor
SEXP rcpp_fast_factor(SEXP x);
RcppExport SEXP _epialleleR_rcpp_fast_factor(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_fast_factor(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_base_freqs
NumericMatrix rcpp_get_base_freqs(std::vector<int> read_rname, std::vector<int> read_strand, std::vector<int> read_start, std::vector<int> read_end, std::vector<std::string> read_seq, std::vector<bool> pass, std::vector<int> vcf_chr, std::vector<int> vcf_pos);
RcppExport SEXP _epialleleR_rcpp_get_base_freqs(SEXP read_rnameSEXP, SEXP read_strandSEXP, SEXP read_startSEXP, SEXP read_endSEXP, SEXP read_seqSEXP, SEXP passSEXP, SEXP vcf_chrSEXP, SEXP vcf_posSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type read_rname(read_rnameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type read_strand(read_strandSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type read_start(read_startSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type read_end(read_endSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type read_seq(read_seqSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type pass(passSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type vcf_chr(vcf_chrSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type vcf_pos(vcf_posSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_base_freqs(read_rname, read_strand, read_start, read_end, read_seq, pass, vcf_chr, vcf_pos));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_xm_beta
std::vector<double> rcpp_get_xm_beta(std::vector<std::string> xm, std::string ctx_meth, std::string ctx_unmeth);
RcppExport SEXP _epialleleR_rcpp_get_xm_beta(SEXP xmSEXP, SEXP ctx_methSEXP, SEXP ctx_unmethSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type xm(xmSEXP);
    Rcpp::traits::input_parameter< std::string >::type ctx_meth(ctx_methSEXP);
    Rcpp::traits::input_parameter< std::string >::type ctx_unmeth(ctx_unmethSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_xm_beta(xm, ctx_meth, ctx_unmeth));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_match_amplicon
std::vector<int> rcpp_match_amplicon(std::vector<std::string> read_chr, std::vector<int> read_start, std::vector<int> read_end, std::vector<std::string> ampl_chr, std::vector<int> ampl_start, std::vector<int> ampl_end, int tolerance);
RcppExport SEXP _epialleleR_rcpp_match_amplicon(SEXP read_chrSEXP, SEXP read_startSEXP, SEXP read_endSEXP, SEXP ampl_chrSEXP, SEXP ampl_startSEXP, SEXP ampl_endSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type read_chr(read_chrSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type read_start(read_startSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type read_end(read_endSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type ampl_chr(ampl_chrSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type ampl_start(ampl_startSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type ampl_end(ampl_endSEXP);
    Rcpp::traits::input_parameter< int >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_match_amplicon(read_chr, read_start, read_end, ampl_chr, ampl_start, ampl_end, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_match_capture
std::vector<int> rcpp_match_capture(std::vector<std::string> read_chr, std::vector<int> read_start, std::vector<int> read_end, std::vector<std::string> capt_chr, std::vector<int> capt_start, std::vector<int> capt_end, signed int min_overlap);
RcppExport SEXP _epialleleR_rcpp_match_capture(SEXP read_chrSEXP, SEXP read_startSEXP, SEXP read_endSEXP, SEXP capt_chrSEXP, SEXP capt_startSEXP, SEXP capt_endSEXP, SEXP min_overlapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type read_chr(read_chrSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type read_start(read_startSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type read_end(read_endSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type capt_chr(capt_chrSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type capt_start(capt_startSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type capt_end(capt_endSEXP);
    Rcpp::traits::input_parameter< signed int >::type min_overlap(min_overlapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_match_capture(read_chr, read_start, read_end, capt_chr, capt_start, capt_end, min_overlap));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_merge_ends
std::vector<std::string> rcpp_merge_ends(std::vector<int> read1_pos, std::vector<std::string> read1_seq, std::vector<int> read2_pos, std::vector<std::string> read2_seq, std::vector<int> isize, char gap);
RcppExport SEXP _epialleleR_rcpp_merge_ends(SEXP read1_posSEXP, SEXP read1_seqSEXP, SEXP read2_posSEXP, SEXP read2_seqSEXP, SEXP isizeSEXP, SEXP gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type read1_pos(read1_posSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type read1_seq(read1_seqSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type read2_pos(read2_posSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type read2_seq(read2_seqSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type isize(isizeSEXP);
    Rcpp::traits::input_parameter< char >::type gap(gapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_merge_ends(read1_pos, read1_seq, read2_pos, read2_seq, isize, gap));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parse_xm
std::vector<int> rcpp_parse_xm(std::vector<int> rname, std::vector<int> strand, std::vector<int> start, std::vector<std::string> xm, std::vector<bool> pass, std::string ctx);
RcppExport SEXP _epialleleR_rcpp_parse_xm(SEXP rnameSEXP, SEXP strandSEXP, SEXP startSEXP, SEXP xmSEXP, SEXP passSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type rname(rnameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type strand(strandSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type xm(xmSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type pass(passSEXP);
    Rcpp::traits::input_parameter< std::string >::type ctx(ctxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parse_xm(rname, strand, start, xm, pass, ctx));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_threshold_reads
std::vector<bool> rcpp_threshold_reads(std::vector<std::string> xm, std::string ctx_meth, std::string ctx_unmeth, std::string ooctx_meth, std::string ooctx_unmeth, int min_n_ctx, double min_ctx_meth_frac, double max_ooctx_meth_frac);
RcppExport SEXP _epialleleR_rcpp_threshold_reads(SEXP xmSEXP, SEXP ctx_methSEXP, SEXP ctx_unmethSEXP, SEXP ooctx_methSEXP, SEXP ooctx_unmethSEXP, SEXP min_n_ctxSEXP, SEXP min_ctx_meth_fracSEXP, SEXP max_ooctx_meth_fracSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type xm(xmSEXP);
    Rcpp::traits::input_parameter< std::string >::type ctx_meth(ctx_methSEXP);
    Rcpp::traits::input_parameter< std::string >::type ctx_unmeth(ctx_unmethSEXP);
    Rcpp::traits::input_parameter< std::string >::type ooctx_meth(ooctx_methSEXP);
    Rcpp::traits::input_parameter< std::string >::type ooctx_unmeth(ooctx_unmethSEXP);
    Rcpp::traits::input_parameter< int >::type min_n_ctx(min_n_ctxSEXP);
    Rcpp::traits::input_parameter< double >::type min_ctx_meth_frac(min_ctx_meth_fracSEXP);
    Rcpp::traits::input_parameter< double >::type max_ooctx_meth_frac(max_ooctx_meth_fracSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_threshold_reads(xm, ctx_meth, ctx_unmeth, ooctx_meth, ooctx_unmeth, min_n_ctx, min_ctx_meth_frac, max_ooctx_meth_frac));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_epialleleR_rcpp_apply_cigar", (DL_FUNC) &_epialleleR_rcpp_apply_cigar, 2},
    {"_epialleleR_rcpp_cx_report", (DL_FUNC) &_epialleleR_rcpp_cx_report, 6},
    {"_epialleleR_rcpp_char_to_context", (DL_FUNC) &_epialleleR_rcpp_char_to_context, 1},
    {"_epialleleR_rcpp_fast_factor", (DL_FUNC) &_epialleleR_rcpp_fast_factor, 1},
    {"_epialleleR_rcpp_get_base_freqs", (DL_FUNC) &_epialleleR_rcpp_get_base_freqs, 8},
    {"_epialleleR_rcpp_get_xm_beta", (DL_FUNC) &_epialleleR_rcpp_get_xm_beta, 3},
    {"_epialleleR_rcpp_match_amplicon", (DL_FUNC) &_epialleleR_rcpp_match_amplicon, 7},
    {"_epialleleR_rcpp_match_capture", (DL_FUNC) &_epialleleR_rcpp_match_capture, 7},
    {"_epialleleR_rcpp_merge_ends", (DL_FUNC) &_epialleleR_rcpp_merge_ends, 6},
    {"_epialleleR_rcpp_parse_xm", (DL_FUNC) &_epialleleR_rcpp_parse_xm, 6},
    {"_epialleleR_rcpp_threshold_reads", (DL_FUNC) &_epialleleR_rcpp_threshold_reads, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_epialleleR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

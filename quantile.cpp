#include "quantile.h"
#include <gsl/gsl_statistics.h>
template <class T>
void quantile(std::vector<T> values, double prob, T &quantile, T &quantile_lo,
              T &quantile_hi, unsigned NBOOTS) {
  /// TODO check that 0<=prob<=1
  std::sort(values.begin(), values.end());
  quantile =
      gsl_stats_quantile_from_sorted_data(&values[0], 1, values.size(), prob);

  std::vector<T> bootstrapped_percentiles;
  for (unsigned ii = 0; ii < NBOOTS; ii++) {
    std::vector<T> v = bootstrapit(values);
    std::sort(v.begin(), v.end());
    T q = gsl_stats_quantile_from_sorted_data(&v[0], 1, v.size(), prob);
    bootstrapped_percentiles.push_back(q);
  }
  double lowbound = .5 * (1. - .6827);
  double upbound = 1. - .5 * (1. - .6827);
  std::sort(bootstrapped_percentiles.begin(), bootstrapped_percentiles.end());
  quantile_lo = gsl_stats_quantile_from_sorted_data(
      &bootstrapped_percentiles[0], 1, bootstrapped_percentiles.size(),
      lowbound);
  quantile_hi = gsl_stats_quantile_from_sorted_data(
      &bootstrapped_percentiles[0], 1, bootstrapped_percentiles.size(),
      upbound);
}

template void quantile(std::vector<double> values, double prob,
                       double &quantile, double &quantile_lo,
                       double &quantile_hi, unsigned NBOOdoubleS = 10000);
//template void quantile(std::vector<float> values, double prob, float &quantile,
//                       float &quantile_lo, float &quantile_hi,
//                       unsigned NBOOfloatS = 1000);

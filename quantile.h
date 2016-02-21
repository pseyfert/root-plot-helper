#pragma once
#include <vector>
#include <algorithm>
template <class T>
void quantile(std::vector<T> values, double prob, T &quantile, T &quantile_lo,
              T &quantile_hi, unsigned NBOOTS = 1000);

template <class T>
std::vector<T> bootstrapit(std::vector<T> vin) {
  std::vector<T> vout;
  vout.reserve(vin.size());
  unsigned long vx_size = vin.size();

  std::random_device random_device;
  std::mt19937 mersenne_generator(random_device());
  std::uniform_int_distribution<> uniform_int(0, vx_size - 1);

  for (unsigned long i = 0; i < vx_size; i++) {
    unsigned long idx = uniform_int(mersenne_generator);
    vout.push_back(vin.at(idx));
  }
  return vout;
}

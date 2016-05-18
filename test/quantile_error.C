// call with
// gSystem->Load("/usr/lib/libgsl.so")
// .L ../quantile.cpp+
// .x quantile_error.C 

#include "TGraphAsymmErrors.h"
void quantile_error() {
  size_t steps = 100;
  size_t points_per_step = 300;
  std::vector<double> values;
  TGraphAsymmErrors* q_s = new TGraphAsymmErrors(steps);
  for (size_t s = 0 ; s < steps ; ++s) {
    for (size_t p = 0 ; p < points_per_step ; ++p) values.push_back(gRandom->Gaus());
    double q,ql,qu;
    quantile(values,0.5,q,ql,qu);
    q_s->SetPoint(s,s*points_per_step,q);
    q_s->SetPointEYlow(s,q-ql);
    q_s->SetPointEYhigh(s,qu-q);
//    std::cout << "median is somewhere around " << ql << "\t" << q << "\t" << qu << std::endl;
  }
  q_s->Draw("alp");
}

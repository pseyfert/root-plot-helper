#pragma once
#include <vector>
//#include "RTypesCore.h"
#include "TArrayD.h"
#include "TArrayF.h"
#include "TH2.h"
class TCanvas;

class twodplot {
public:
  twodplot(TH2 *hist) : m_hist((TH2*)hist->Clone()), built_from_hist(true){};
  twodplot(const char *name, const char *title, Int_t nbinsx, Double_t xlow,
           Double_t xup, Int_t nbinsy, Double_t ylow, Double_t yup)
      : built_from_hist(false) {
    m_hist = new TH2D(name, title, nbinsx, xlow, xup, nbinsy, ylow, yup);
    init_vectors();
  };
  twodplot(const char *name, const char *title, Int_t nbinsx,
           const Double_t *xbins, Int_t nbinsy, Double_t ylow, Double_t yup)
      : built_from_hist(false) {
    m_hist = new TH2D(name, title, nbinsx, xbins, nbinsy, ylow, yup);
    init_vectors();
  };
  twodplot(const char *name, const char *title, Int_t nbinsx, Double_t xlow,
           Double_t xup, Int_t nbinsy, const Double_t *ybins)
      : built_from_hist(false) {
    m_hist = new TH2D(name, title, nbinsx, xlow, xup, nbinsy, ybins);
    init_vectors();
  };
  twodplot(const char *name, const char *title, Int_t nbinsx,
           const Double_t *xbins, Int_t nbinsy, const Double_t *ybins)
      : built_from_hist(false) {
    m_hist = new TH2D(name, title, nbinsx, xbins, nbinsy, ybins);
    init_vectors();
  };
  twodplot(const char *name, const char *title, Int_t nbinsx,
           const Float_t *xbins, Int_t nbinsy, const Float_t *ybins)
      : built_from_hist(false) {
    m_hist = new TH2F(name, title, nbinsx, xbins, nbinsy, ybins);
    init_vectors();
  };

  void Fill(Double_t x, Double_t y);
  TCanvas *Draw();
  static TH2 *transpose(TH2 *hist);

private:
  std::vector<std::vector<Double_t>> m_xvals;
  std::vector<std::vector<Double_t>> m_yvals;
  TH2 *m_hist;
  bool built_from_hist;
  void init_vectors() {
    std::vector<Double_t> empty;
    for (size_t ii = 0 ; ii <= 1+m_hist->GetNbinsX() ; ++ii) {
      m_yvals.push_back(empty);
    }
    for (size_t ii = 0 ; ii <= 1+m_hist->GetNbinsY() ; ++ii) {
      m_xvals.push_back(empty);
    }
  }
};

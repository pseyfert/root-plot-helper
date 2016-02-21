#include "twodplot.h"
#include <iostream>
#include "TCanvas.h"


void twodplot::Fill(Double_t x, Double_t y) {
  m_xvals.push_back(x);
  m_yvals.push_back(y);
}

TCanvas* twodplot::Draw() {
  TCanvas* retval = new TCanvas();
  retval->Divide(2,1);
  retval->cd(1);
  m_hist->Draw("colz");
  TH2* temp_hist = transpose(m_hist);
  retval->cd(2);
  temp_hist->Draw("colz");
  return retval;
}

TH2* twodplot::transpose(TH2* hist) {
  TH2* retval;
  TString  name(hist->GetName());
  TString  title(hist->GetTitle());
  name += "_transposed";
  title += " transposed";

  const Int_t    tobe_nbinsx = hist->GetYaxis()->GetNbins();
  const Int_t    tobe_nbinsy = hist->GetXaxis()->GetNbins();
  const Double_t* tobe_xbins = hist->GetYaxis()->GetXbins()->GetArray();
  const Double_t* tobe_ybins = hist->GetXaxis()->GetXbins()->GetArray();
  const Double_t  tobe_xmin  = hist->GetYaxis()->GetXmin();
  const Double_t  tobe_ymin  = hist->GetXaxis()->GetXmin();
  const Double_t  tobe_xmax  = hist->GetYaxis()->GetXmax();
  const Double_t  tobe_ymax  = hist->GetXaxis()->GetXmax();

  if (0==strcmp(hist->ClassName(),"TH2F")) {
    if (tobe_xbins && tobe_ybins) {
      retval = new TH2D(name.Data(),title.Data(),tobe_nbinsx,tobe_xbins,
                                                 tobe_nbinsy,tobe_ybins);
    } else if (tobe_xbins) {
      retval = new TH2D(name.Data(),title.Data(),tobe_nbinsx,tobe_xbins,
                                                 tobe_nbinsy,tobe_ymin,tobe_ymax);
    } else if (tobe_ybins) {
      retval = new TH2D(name.Data(),title.Data(),tobe_nbinsx,tobe_xmin,tobe_xmax,
                                                 tobe_nbinsy,tobe_ybins);
    } else {
      retval = new TH2D(name.Data(),title.Data(),tobe_nbinsx,tobe_xmin,tobe_xmax,
                                                 tobe_nbinsy,tobe_ymin,tobe_ymax);
    }
  } else if (0==strcmp(hist->ClassName(),"TH2D")) {
    if (tobe_xbins && tobe_ybins) {
      retval = new TH2F(name.Data(),title.Data(),tobe_nbinsx,tobe_xbins,
                                                 tobe_nbinsy,tobe_ybins);
    } else if (tobe_xbins) {
      retval = new TH2F(name.Data(),title.Data(),tobe_nbinsx,tobe_xbins,
                                                 tobe_nbinsy,tobe_ymin,tobe_ymax);
    } else if (tobe_ybins) {
      retval = new TH2F(name.Data(),title.Data(),tobe_nbinsx,tobe_xmin,tobe_xmax,
                                                 tobe_nbinsy,tobe_ybins);
    } else {
      retval = new TH2F(name.Data(),title.Data(),tobe_nbinsx,tobe_xmin,tobe_xmax,
                                                 tobe_nbinsy,tobe_ymin,tobe_ymax);
    }
  } else {
    std::cerr << "NOT IMPLEMENTED, SORRY" << std::endl;
  }
  retval->GetXaxis()->SetTitle(hist->GetYaxis()->GetTitle());
  retval->GetYaxis()->SetTitle(hist->GetXaxis()->GetTitle());
  return retval;
}

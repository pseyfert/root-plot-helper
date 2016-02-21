#include "twodplot.h"
#include <iostream>
#include "TCanvas.h"
#include "quantile.h"
#include "TStyle.h"

void prephist(TH1* hist) {
  Color_t colors[4] = {kBlue, kRed, kGreen+2, kBlue};
  static size_t c = 0;
  Color_t color = colors[c++];
  hist->SetMarkerStyle(kDot);
  hist->SetMarkerColor(color);
  hist->SetLineColor(color);
  if (c==4) c=0;
}

TCanvas* twodplot::Draw() {
  gStyle->SetPalette(52);
  TCanvas* retval = new TCanvas();
  retval->Divide(2,1);
  retval->cd(1);
  m_hist->Draw("colz");
  const Int_t     nbinsx = m_hist->GetXaxis()->GetNbins();
  const Double_t* xbins  = m_hist->GetXaxis()->GetXbins()->GetArray();
  const Double_t  xmin   = m_hist->GetXaxis()->GetXmin();
  const Double_t  xmax   = m_hist->GetXaxis()->GetXmax();
  if (!built_from_hist) {
    for (Double_t prob = 0.2 ; prob < 0.9 ; prob+=0.2) {
      TH1* oned;
      if (xbins) {
        oned = new TH1D(Form("Xquantiles_%3.1f",prob),Form("Xquantiles_%3.1f",prob),nbinsx,xbins);
      } else {
        oned = new TH1D(Form("Xquantiles_%3.1f",prob),Form("Xquantiles_%3.1f",prob),nbinsx,xmin,xmax);
      }
      for (Int_t xbin = 1 ; xbin <= oned->GetNbinsX() ; ++xbin) {
        double q,ql,qh;
        quantile(m_yvals[xbin-1],prob,q,ql,qh); 
        oned->SetBinContent(xbin,q);
        oned->SetBinError(xbin,0.5*(qh-ql));
      }
      oned->Draw("same");
    }
  } else {
    for (Double_t prob = 0.2 ; prob < 0.9 ; prob+=0.2) {
      TH1* oned = m_hist->QuantilesX(prob, Form("Xquantiles_%3.1f",prob));
      oned->Draw("samehist");
    }
  }
  TH2* temp_hist = transpose(m_hist);
  retval->cd(2);
  temp_hist->Draw("colz");
  const Int_t     nbinsy = m_hist->GetYaxis()->GetNbins();
  const Double_t* ybins  = m_hist->GetYaxis()->GetXbins()->GetArray();
  const Double_t  ymin   = m_hist->GetYaxis()->GetXmin();
  const Double_t  ymax   = m_hist->GetYaxis()->GetXmax();
  if (!built_from_hist) {
    for (Double_t prob = 0.2 ; prob < 0.9 ; prob+=0.2) {
      TH1* oned;
      if (ybins) {
        oned = new TH1D(Form("Yquantiles_%3.1f",prob),Form("Yquantiles_%3.1f",prob),nbinsy,ybins);
      } else {
        oned = new TH1D(Form("Yquantiles_%3.1f",prob),Form("Yquantiles_%3.1f",prob),nbinsy,ymin,ymax);
      }
      for (Int_t ybin = 1 ; ybin <= oned->GetNbinsY() ; ++ybin) {
        double q,ql,qh;
        quantile(m_xvals[ybin-1],prob,q,ql,qh); 
        oned->SetBinContent(ybin,q);
        oned->SetBinError(ybin,0.5*(qh-ql));
      }
      oned->Draw("same");
    }
  } else {
    for (Double_t prob = 0.2 ; prob < 0.9 ; prob+=0.2) {
      TH1* oned = m_hist->QuantilesY(prob, Form("Yquantiles_%3.1f",prob));
      oned->Draw("samehist");
    }
  }
  return retval;
}

void twodplot::Fill(Double_t x, Double_t y) {
  Int_t xbin = m_hist->GetXaxis()->FindBin(x);
  Int_t ybin = m_hist->GetYaxis()->FindBin(y);
  if (!built_from_hist) {
    m_xvals[ybin-1].push_back(x);
    m_yvals[xbin-1].push_back(y);
  }
  m_hist->Fill(x,y);
}

TH2* twodplot::transpose(TH2* hist) {
  TH2* retval;
  TString name(hist->GetName());
  TString title(hist->GetTitle());
  name += "_transposed";
  title += " transposed";

  const Int_t     tobe_nbinsx = hist->GetYaxis()->GetNbins();
  const Int_t     tobe_nbinsy = hist->GetXaxis()->GetNbins();
  const Double_t* tobe_xbins  = hist->GetYaxis()->GetXbins()->GetArray();
  const Double_t* tobe_ybins  = hist->GetXaxis()->GetXbins()->GetArray();
  const Double_t  tobe_xmin   = hist->GetYaxis()->GetXmin();
  const Double_t  tobe_ymin   = hist->GetXaxis()->GetXmin();
  const Double_t  tobe_xmax   = hist->GetYaxis()->GetXmax();
  const Double_t  tobe_ymax   = hist->GetXaxis()->GetXmax();

  if (0 == strcmp(hist->ClassName(), "TH2F")) {
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
  } else if (0 == strcmp(hist->ClassName(), "TH2D")) {
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
  for (int x = 0 ; x <= hist->GetNbinsX()+1 ; ++x) {
    for (int y = 0 ; y <= hist->GetNbinsY()+1 ; ++y) {
      retval->SetBinContent(retval->GetBin(y,x),hist->GetBinContent(hist->GetBin(x,y)));
    }
  }
  return retval;
}

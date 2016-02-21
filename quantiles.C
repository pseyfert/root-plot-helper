#define quantiles_cxx
#include <TMath.h>
#include <iostream>
#include "TApplication.h"
#include <gsl/gsl_statistics.h>
#include <vector>
#include <algorithm>
#include "quantiles.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "twodplot.h"

std::vector<double> bootstrap(std::vector<double> vin) {
  std::vector<double> vout;
  unsigned long vx_size = vin.size();

  std::random_device random_device;
  std::mt19937 mersenne_generator(random_device());
  std::uniform_int_distribution<> uniform_int(0, vx_size-1);

  for (unsigned long i = 0; i < vx_size; i++ ){
    unsigned long idx = uniform_int(mersenne_generator);
    vout.push_back(vin.at(idx));
  }

  std::sort(vout.begin(),vout.end());
  return vout;
}

void quantiles::Loop()
{
  //   In a ROOT session, you can do:
  //      root> .L quantiles.C
  //      root> quantiles t
  //      root> t.GetEntry(12); // Fill t data members with entry number 12
  //      root> t.Show();       // Show values of entry 12
  //      root> t.Show(16);     // Read and show values of entry 16
  //      root> t.Loop();       // Loop on all entries
  //
  //root [28] DecayTree->Draw("Bs_P:Bs_MCORR>>hh","","colz")
  //

  //     This is the loop skeleton where:
  //    jentry is the global entry number in the chain
  //    ientry is the entry number in the current Tree
  //  Note that the argument to GetEntry must be:
  //    jentry for TChain::GetEntry
  //    ientry for TTree::GetEntry and TBranch::GetEntry
  //
  //       To read only selected branches, Insert statements like:
  // METHOD1:
  //    fChain->SetBranchStatus("*",0);  // disable all branches
  //    fChain->SetBranchStatus("branchname",1);  // activate branchname
  // METHOD2: replace line
  //    fChain->GetEntry(jentry);       //read all branches
  //by  b_branchname->GetEntry(ientry); //read only this branch
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();
  fChain->SetBranchStatus("*",0);  // disable all branches
  fChain->SetBranchStatus("Bs_P",1);  // activate branchname
  fChain->SetBranchStatus("Bs_MCORR",1);  // activate branchname

  TH2D* hh = new TH2D("hh","hh",30,2000,10000,200,0,600000);
  twodplot* twod = new twodplot("twod","twod",30,2000,10000,200,0,600000);

  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    hh->Fill(Bs_MCORR,Bs_P);
    twod->Fill(Bs_MCORR,Bs_P);
  }
  twod->Draw();
}

int main(int argc, char** argv) {
  TApplication theApp("App",&argc, argv);
  quantiles q;
  q.Loop();
  theApp.Run();
  return 0;
}

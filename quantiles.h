//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Feb 21 17:44:23 2016 by ROOT version 6.07/03
// from TTree DecayTree/DecayTree
// found on file: /tmp/DTT_Bs2DsMuNu_66.root
//////////////////////////////////////////////////////////

#ifndef quantiles_h
#define quantiles_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class quantiles {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxBs_ENDVERTEX_COV = 1;
   const Int_t kMaxBs_OWNPV_COV = 1;
   const Int_t kMaxDs_ENDVERTEX_COV = 1;
   const Int_t kMaxDs_OWNPV_COV = 1;
   const Int_t kMaxDs_ORIVX_COV = 1;
   const Int_t kMaxkaon_m_OWNPV_COV = 1;
   const Int_t kMaxkaon_m_ORIVX_COV = 1;
   const Int_t kMaxkaon_p_OWNPV_COV = 1;
   const Int_t kMaxkaon_p_ORIVX_COV = 1;
   const Int_t kMaxpi_p_OWNPV_COV = 1;
   const Int_t kMaxpi_p_ORIVX_COV = 1;
   const Int_t kMaxmuon_p_OWNPV_COV = 1;
   const Int_t kMaxmuon_p_ORIVX_COV = 1;

   // Declaration of leaf types
   Int_t           Bs_IsoTrack_Charge_UpStream;
   Int_t           Bs_iso_muon_UpStream;
   Int_t           Bs_iso_Kaon_UpStream;
   Double_t        Bs_iso_SumBDT_UpStream;
   Double_t        Bs_iso_MinBDT_UpStream;
   Double_t        Bs_ConeIso_UpStream;
   Double_t        Bs_MuMu_M_iso_UpStream;
   Double_t        Bs_Kh_M_iso_UpStream;
   Int_t           Bs_iso_muon_VELO;
   Int_t           Bs_iso_Kaon_VELO;
   Double_t        Bs_iso_SumBDT_VELO;
   Double_t        Bs_iso_MinBDT_VELO;
   Double_t        Bs_ENDVERTEX_X;
   Double_t        Bs_ENDVERTEX_Y;
   Double_t        Bs_ENDVERTEX_Z;
   Double_t        Bs_ENDVERTEX_XERR;
   Double_t        Bs_ENDVERTEX_YERR;
   Double_t        Bs_ENDVERTEX_ZERR;
   Double_t        Bs_ENDVERTEX_CHI2;
   Int_t           Bs_ENDVERTEX_NDOF;
   Float_t         Bs_ENDVERTEX_COV_[3][3];
   Double_t        Bs_OWNPV_X;
   Double_t        Bs_OWNPV_Y;
   Double_t        Bs_OWNPV_Z;
   Double_t        Bs_OWNPV_XERR;
   Double_t        Bs_OWNPV_YERR;
   Double_t        Bs_OWNPV_ZERR;
   Double_t        Bs_OWNPV_CHI2;
   Int_t           Bs_OWNPV_NDOF;
   Float_t         Bs_OWNPV_COV_[3][3];
   Double_t        Bs_IP_OWNPV;
   Double_t        Bs_IPCHI2_OWNPV;
   Double_t        Bs_FD_OWNPV;
   Double_t        Bs_FDCHI2_OWNPV;
   Double_t        Bs_DIRA_OWNPV;
   Double_t        Bs_P;
   Double_t        Bs_PT;
   Double_t        Bs_PE;
   Double_t        Bs_PX;
   Double_t        Bs_PY;
   Double_t        Bs_PZ;
   Double_t        Bs_MM;
   Double_t        Bs_MMERR;
   Double_t        Bs_M;
   Int_t           Bs_BKGCAT;
   Int_t           Bs_ID;
   Double_t        Bs_TAU;
   Double_t        Bs_TAUERR;
   Double_t        Bs_TAUCHI2;
   Double_t        Bs_MCORR;
   Double_t        Bs_MCORRERR;
   Double_t        Bs_MCORRFULLERR;
   Double_t        Bs_Q2SOL1;
   Double_t        Bs_Q2SOL2;
   Double_t        Bs_X;
   Double_t        Bs_Y;
   Double_t        Bs_DOCA;
   Double_t        Bs_DTF_CHI2NDOF;
   Double_t        Bs_DTF_CTAUS;
   Double_t        Bs_DTF_TAU;
   Double_t        Bs_DsMuNu_TruthMatched;
   Double_t        Bs_ETA;
   Double_t        Bs_FD_CHI2_LOKI;
   Double_t        Bs_FD_S;
   Double_t        Bs_KMuNu_TruthMatched;
   Double_t        Bs_PHI;
   Double_t        Bs_VCHI2_LOKI;
   Int_t           Bs_Dsiso_IsoTrack_Charge_Long;
   Int_t           Bs_Dsiso_iso_muon_Long;
   Int_t           Bs_Dsiso_iso_Ds_Long;
   Double_t        Bs_Dsiso_iso_SumBDT_Long;
   Double_t        Bs_Dsiso_iso_MinBDT_Long;
   Double_t        Bs_Dsiso_ConeIso_Long;
   Double_t        Bs_Dsiso_MuMu_M_iso_Long;
   Double_t        Bs_Dsiso_Kh_M_iso_Long;
   Int_t           Bs_IsoTrack_Charge_Long;
   Int_t           Bs_iso_muon_Long;
   Int_t           Bs_iso_Kaon_Long;
   Double_t        Bs_iso_SumBDT_Long;
   Double_t        Bs_iso_MinBDT_Long;
   Double_t        Bs_ConeIso_Long;
   Double_t        Bs_MuMu_M_iso_Long;
   Double_t        Bs_Kh_M_iso_Long;
   Int_t           Bs_0_50_cc_mult;
   Double_t        Bs_0_50_cc_sPT;
   Double_t        Bs_0_50_cc_vPT;
   Double_t        Bs_0_50_cc_PX;
   Double_t        Bs_0_50_cc_PY;
   Double_t        Bs_0_50_cc_PZ;
   Double_t        Bs_0_50_cc_asy_P;
   Double_t        Bs_0_50_cc_asy_PT;
   Double_t        Bs_0_50_cc_asy_PX;
   Double_t        Bs_0_50_cc_asy_PY;
   Double_t        Bs_0_50_cc_asy_PZ;
   Double_t        Bs_0_50_cc_deltaEta;
   Double_t        Bs_0_50_cc_deltaPhi;
   Double_t        Bs_0_50_cc_IT;
   Int_t           Bs_0_50_cc_maxPt_Q;
   Double_t        Bs_0_50_cc_maxPt_PT;
   Double_t        Bs_0_50_cc_maxPt_PX;
   Double_t        Bs_0_50_cc_maxPt_PY;
   Double_t        Bs_0_50_cc_maxPt_PZ;
   Double_t        Bs_0_50_cc_maxPt_PE;
   Int_t           Bs_0_50_nc_mult;
   Double_t        Bs_0_50_nc_sPT;
   Double_t        Bs_0_50_nc_vPT;
   Double_t        Bs_0_50_nc_PX;
   Double_t        Bs_0_50_nc_PY;
   Double_t        Bs_0_50_nc_PZ;
   Double_t        Bs_0_50_nc_asy_P;
   Double_t        Bs_0_50_nc_asy_PT;
   Double_t        Bs_0_50_nc_asy_PX;
   Double_t        Bs_0_50_nc_asy_PY;
   Double_t        Bs_0_50_nc_asy_PZ;
   Double_t        Bs_0_50_nc_deltaEta;
   Double_t        Bs_0_50_nc_deltaPhi;
   Double_t        Bs_0_50_nc_IT;
   Double_t        Bs_0_50_nc_maxPt_PT;
   Double_t        Bs_0_50_nc_maxPt_PX;
   Double_t        Bs_0_50_nc_maxPt_PY;
   Double_t        Bs_0_50_nc_maxPt_PZ;
   Double_t        Bs_0_50_IT;
   Int_t           Bs_1_00_cc_mult;
   Double_t        Bs_1_00_cc_sPT;
   Double_t        Bs_1_00_cc_vPT;
   Double_t        Bs_1_00_cc_PX;
   Double_t        Bs_1_00_cc_PY;
   Double_t        Bs_1_00_cc_PZ;
   Double_t        Bs_1_00_cc_asy_P;
   Double_t        Bs_1_00_cc_asy_PT;
   Double_t        Bs_1_00_cc_asy_PX;
   Double_t        Bs_1_00_cc_asy_PY;
   Double_t        Bs_1_00_cc_asy_PZ;
   Double_t        Bs_1_00_cc_deltaEta;
   Double_t        Bs_1_00_cc_deltaPhi;
   Double_t        Bs_1_00_cc_IT;
   Int_t           Bs_1_00_cc_maxPt_Q;
   Double_t        Bs_1_00_cc_maxPt_PT;
   Double_t        Bs_1_00_cc_maxPt_PX;
   Double_t        Bs_1_00_cc_maxPt_PY;
   Double_t        Bs_1_00_cc_maxPt_PZ;
   Double_t        Bs_1_00_cc_maxPt_PE;
   Int_t           Bs_1_00_nc_mult;
   Double_t        Bs_1_00_nc_sPT;
   Double_t        Bs_1_00_nc_vPT;
   Double_t        Bs_1_00_nc_PX;
   Double_t        Bs_1_00_nc_PY;
   Double_t        Bs_1_00_nc_PZ;
   Double_t        Bs_1_00_nc_asy_P;
   Double_t        Bs_1_00_nc_asy_PT;
   Double_t        Bs_1_00_nc_asy_PX;
   Double_t        Bs_1_00_nc_asy_PY;
   Double_t        Bs_1_00_nc_asy_PZ;
   Double_t        Bs_1_00_nc_deltaEta;
   Double_t        Bs_1_00_nc_deltaPhi;
   Double_t        Bs_1_00_nc_IT;
   Double_t        Bs_1_00_nc_maxPt_PT;
   Double_t        Bs_1_00_nc_maxPt_PX;
   Double_t        Bs_1_00_nc_maxPt_PY;
   Double_t        Bs_1_00_nc_maxPt_PZ;
   Double_t        Bs_1_00_IT;
   Int_t           Bs_1_50_cc_mult;
   Double_t        Bs_1_50_cc_sPT;
   Double_t        Bs_1_50_cc_vPT;
   Double_t        Bs_1_50_cc_PX;
   Double_t        Bs_1_50_cc_PY;
   Double_t        Bs_1_50_cc_PZ;
   Double_t        Bs_1_50_cc_asy_P;
   Double_t        Bs_1_50_cc_asy_PT;
   Double_t        Bs_1_50_cc_asy_PX;
   Double_t        Bs_1_50_cc_asy_PY;
   Double_t        Bs_1_50_cc_asy_PZ;
   Double_t        Bs_1_50_cc_deltaEta;
   Double_t        Bs_1_50_cc_deltaPhi;
   Double_t        Bs_1_50_cc_IT;
   Int_t           Bs_1_50_cc_maxPt_Q;
   Double_t        Bs_1_50_cc_maxPt_PT;
   Double_t        Bs_1_50_cc_maxPt_PX;
   Double_t        Bs_1_50_cc_maxPt_PY;
   Double_t        Bs_1_50_cc_maxPt_PZ;
   Double_t        Bs_1_50_cc_maxPt_PE;
   Int_t           Bs_1_50_nc_mult;
   Double_t        Bs_1_50_nc_sPT;
   Double_t        Bs_1_50_nc_vPT;
   Double_t        Bs_1_50_nc_PX;
   Double_t        Bs_1_50_nc_PY;
   Double_t        Bs_1_50_nc_PZ;
   Double_t        Bs_1_50_nc_asy_P;
   Double_t        Bs_1_50_nc_asy_PT;
   Double_t        Bs_1_50_nc_asy_PX;
   Double_t        Bs_1_50_nc_asy_PY;
   Double_t        Bs_1_50_nc_asy_PZ;
   Double_t        Bs_1_50_nc_deltaEta;
   Double_t        Bs_1_50_nc_deltaPhi;
   Double_t        Bs_1_50_nc_IT;
   Double_t        Bs_1_50_nc_maxPt_PT;
   Double_t        Bs_1_50_nc_maxPt_PX;
   Double_t        Bs_1_50_nc_maxPt_PY;
   Double_t        Bs_1_50_nc_maxPt_PZ;
   Double_t        Bs_1_50_IT;
   Int_t           Bs_2_00_cc_mult;
   Double_t        Bs_2_00_cc_sPT;
   Double_t        Bs_2_00_cc_vPT;
   Double_t        Bs_2_00_cc_PX;
   Double_t        Bs_2_00_cc_PY;
   Double_t        Bs_2_00_cc_PZ;
   Double_t        Bs_2_00_cc_asy_P;
   Double_t        Bs_2_00_cc_asy_PT;
   Double_t        Bs_2_00_cc_asy_PX;
   Double_t        Bs_2_00_cc_asy_PY;
   Double_t        Bs_2_00_cc_asy_PZ;
   Double_t        Bs_2_00_cc_deltaEta;
   Double_t        Bs_2_00_cc_deltaPhi;
   Double_t        Bs_2_00_cc_IT;
   Int_t           Bs_2_00_cc_maxPt_Q;
   Double_t        Bs_2_00_cc_maxPt_PT;
   Double_t        Bs_2_00_cc_maxPt_PX;
   Double_t        Bs_2_00_cc_maxPt_PY;
   Double_t        Bs_2_00_cc_maxPt_PZ;
   Double_t        Bs_2_00_cc_maxPt_PE;
   Int_t           Bs_2_00_nc_mult;
   Double_t        Bs_2_00_nc_sPT;
   Double_t        Bs_2_00_nc_vPT;
   Double_t        Bs_2_00_nc_PX;
   Double_t        Bs_2_00_nc_PY;
   Double_t        Bs_2_00_nc_PZ;
   Double_t        Bs_2_00_nc_asy_P;
   Double_t        Bs_2_00_nc_asy_PT;
   Double_t        Bs_2_00_nc_asy_PX;
   Double_t        Bs_2_00_nc_asy_PY;
   Double_t        Bs_2_00_nc_asy_PZ;
   Double_t        Bs_2_00_nc_deltaEta;
   Double_t        Bs_2_00_nc_deltaPhi;
   Double_t        Bs_2_00_nc_IT;
   Double_t        Bs_2_00_nc_maxPt_PT;
   Double_t        Bs_2_00_nc_maxPt_PX;
   Double_t        Bs_2_00_nc_maxPt_PY;
   Double_t        Bs_2_00_nc_maxPt_PZ;
   Double_t        Bs_2_00_IT;
   Int_t           Bs_TRUEID;
   Double_t        Bs_TRUEP_E;
   Double_t        Bs_TRUEP_X;
   Double_t        Bs_TRUEP_Y;
   Double_t        Bs_TRUEP_Z;
   Double_t        Bs_TRUEPT;
   Double_t        Bs_TRUEORIGINVERTEX_X;
   Double_t        Bs_TRUEORIGINVERTEX_Y;
   Double_t        Bs_TRUEORIGINVERTEX_Z;
   Double_t        Bs_TRUEENDVERTEX_X;
   Double_t        Bs_TRUEENDVERTEX_Y;
   Double_t        Bs_TRUEENDVERTEX_Z;
   Bool_t          Bs_TRUEISSTABLE;
   Double_t        Bs_TRUETAU;
   Int_t           Bs_Nu_TRUEID;
   Double_t        Bs_Nu_TRUEP_E;
   Double_t        Bs_Nu_TRUEP_X;
   Double_t        Bs_Nu_TRUEP_Y;
   Double_t        Bs_Nu_TRUEP_Z;
   Bool_t          Bs_L0Global_Dec;
   Bool_t          Bs_L0Global_TIS;
   Bool_t          Bs_L0Global_TOS;
   Bool_t          Bs_Hlt1Global_Dec;
   Bool_t          Bs_Hlt1Global_TIS;
   Bool_t          Bs_Hlt1Global_TOS;
   Bool_t          Bs_Hlt1Phys_Dec;
   Bool_t          Bs_Hlt1Phys_TIS;
   Bool_t          Bs_Hlt1Phys_TOS;
   Bool_t          Bs_Hlt2Global_Dec;
   Bool_t          Bs_Hlt2Global_TIS;
   Bool_t          Bs_Hlt2Global_TOS;
   Bool_t          Bs_Hlt2Phys_Dec;
   Bool_t          Bs_Hlt2Phys_TIS;
   Bool_t          Bs_Hlt2Phys_TOS;
   Bool_t          Bs_L0MuonDecision_Dec;
   Bool_t          Bs_L0MuonDecision_TIS;
   Bool_t          Bs_L0MuonDecision_TOS;
   Bool_t          Bs_L0DiMuonDecision_Dec;
   Bool_t          Bs_L0DiMuonDecision_TIS;
   Bool_t          Bs_L0DiMuonDecision_TOS;
   Bool_t          Bs_L0HadronDecision_Dec;
   Bool_t          Bs_L0HadronDecision_TIS;
   Bool_t          Bs_L0HadronDecision_TOS;
   Bool_t          Bs_Hlt1TrackMuonDecision_Dec;
   Bool_t          Bs_Hlt1TrackMuonDecision_TIS;
   Bool_t          Bs_Hlt1TrackMuonDecision_TOS;
   Bool_t          Bs_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Bs_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Bs_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Bs_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          Bs_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          Bs_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          Bs_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          Bs_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          Bs_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          Bs_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Bs_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Bs_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Bs_Hlt2MuTrackDecision_Dec;
   Bool_t          Bs_Hlt2MuTrackDecision_TIS;
   Bool_t          Bs_Hlt2MuTrackDecision_TOS;
   Bool_t          Bs_Hlt2SingleMuonDecision_Dec;
   Bool_t          Bs_Hlt2SingleMuonDecision_TIS;
   Bool_t          Bs_Hlt2SingleMuonDecision_TOS;
   Bool_t          Bs_Hlt2SingleMuonHighPTDecision_Dec;
   Bool_t          Bs_Hlt2SingleMuonHighPTDecision_TIS;
   Bool_t          Bs_Hlt2SingleMuonHighPTDecision_TOS;
   Bool_t          Bs_Hlt2SingleMuonLowPTDecision_Dec;
   Bool_t          Bs_Hlt2SingleMuonLowPTDecision_TIS;
   Bool_t          Bs_Hlt2SingleMuonLowPTDecision_TOS;
   Bool_t          Bs_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Bs_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Bs_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Bs_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Bs_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Bs_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Bs_Hlt2CharmHadD2HHHDecision_Dec;
   Bool_t          Bs_Hlt2CharmHadD2HHHDecision_TIS;
   Bool_t          Bs_Hlt2CharmHadD2HHHDecision_TOS;
   Bool_t          Bs_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Bs_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Bs_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Bs_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Bs_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Bs_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Bs_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          Bs_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          Bs_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          Bs_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Bs_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Bs_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Bs_Hlt2DiMuonBDecision_Dec;
   Bool_t          Bs_Hlt2DiMuonBDecision_TIS;
   Bool_t          Bs_Hlt2DiMuonBDecision_TOS;
   Bool_t          Bs_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Bs_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Bs_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Bs_Hlt2DiMuonZDecision_Dec;
   Bool_t          Bs_Hlt2DiMuonZDecision_TIS;
   Bool_t          Bs_Hlt2DiMuonZDecision_TOS;
   Bool_t          Bs_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          Bs_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          Bs_Hlt2DiMuonDetachedDecision_TOS;
   Bool_t          Bs_Hlt2DiMuonDetachedHeavyDecision_Dec;
   Bool_t          Bs_Hlt2DiMuonDetachedHeavyDecision_TIS;
   Bool_t          Bs_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Bool_t          Bs_Hlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          Bs_Hlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          Bs_Hlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          Bs_Hlt2TriMuonDetachedDecision_Dec;
   Bool_t          Bs_Hlt2TriMuonDetachedDecision_TIS;
   Bool_t          Bs_Hlt2TriMuonDetachedDecision_TOS;
   Bool_t          Bs_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          Bs_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          Bs_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          Bs_Hlt2TriMuonTauDecision_Dec;
   Bool_t          Bs_Hlt2TriMuonTauDecision_TIS;
   Bool_t          Bs_Hlt2TriMuonTauDecision_TOS;
   Bool_t          Bs_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          Bs_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          Bs_Hlt2TopoE4BodyBBDTDecision_TOS;
   Bool_t          Bs_Hlt2IncPhiDecision_Dec;
   Bool_t          Bs_Hlt2IncPhiDecision_TIS;
   Bool_t          Bs_Hlt2IncPhiDecision_TOS;
   Bool_t          Bs_Hlt2B2HHLTUnbiasedDecision_Dec;
   Bool_t          Bs_Hlt2B2HHLTUnbiasedDecision_TIS;
   Bool_t          Bs_Hlt2B2HHLTUnbiasedDecision_TOS;
   Double_t        Ds_ENDVERTEX_X;
   Double_t        Ds_ENDVERTEX_Y;
   Double_t        Ds_ENDVERTEX_Z;
   Double_t        Ds_ENDVERTEX_XERR;
   Double_t        Ds_ENDVERTEX_YERR;
   Double_t        Ds_ENDVERTEX_ZERR;
   Double_t        Ds_ENDVERTEX_CHI2;
   Int_t           Ds_ENDVERTEX_NDOF;
   Float_t         Ds_ENDVERTEX_COV_[3][3];
   Double_t        Ds_OWNPV_X;
   Double_t        Ds_OWNPV_Y;
   Double_t        Ds_OWNPV_Z;
   Double_t        Ds_OWNPV_XERR;
   Double_t        Ds_OWNPV_YERR;
   Double_t        Ds_OWNPV_ZERR;
   Double_t        Ds_OWNPV_CHI2;
   Int_t           Ds_OWNPV_NDOF;
   Float_t         Ds_OWNPV_COV_[3][3];
   Double_t        Ds_IP_OWNPV;
   Double_t        Ds_IPCHI2_OWNPV;
   Double_t        Ds_FD_OWNPV;
   Double_t        Ds_FDCHI2_OWNPV;
   Double_t        Ds_DIRA_OWNPV;
   Double_t        Ds_ORIVX_X;
   Double_t        Ds_ORIVX_Y;
   Double_t        Ds_ORIVX_Z;
   Double_t        Ds_ORIVX_XERR;
   Double_t        Ds_ORIVX_YERR;
   Double_t        Ds_ORIVX_ZERR;
   Double_t        Ds_ORIVX_CHI2;
   Int_t           Ds_ORIVX_NDOF;
   Float_t         Ds_ORIVX_COV_[3][3];
   Double_t        Ds_FD_ORIVX;
   Double_t        Ds_FDCHI2_ORIVX;
   Double_t        Ds_DIRA_ORIVX;
   Double_t        Ds_P;
   Double_t        Ds_PT;
   Double_t        Ds_PE;
   Double_t        Ds_PX;
   Double_t        Ds_PY;
   Double_t        Ds_PZ;
   Double_t        Ds_MM;
   Double_t        Ds_MMERR;
   Double_t        Ds_M;
   Int_t           Ds_BKGCAT;
   Int_t           Ds_TRUEID;
   Int_t           Ds_MC_MOTHER_ID;
   Int_t           Ds_MC_MOTHER_KEY;
   Int_t           Ds_MC_GD_MOTHER_ID;
   Int_t           Ds_MC_GD_MOTHER_KEY;
   Int_t           Ds_MC_GD_GD_MOTHER_ID;
   Int_t           Ds_MC_GD_GD_MOTHER_KEY;
   Double_t        Ds_TRUEP_E;
   Double_t        Ds_TRUEP_X;
   Double_t        Ds_TRUEP_Y;
   Double_t        Ds_TRUEP_Z;
   Double_t        Ds_TRUEPT;
   Double_t        Ds_TRUEORIGINVERTEX_X;
   Double_t        Ds_TRUEORIGINVERTEX_Y;
   Double_t        Ds_TRUEORIGINVERTEX_Z;
   Double_t        Ds_TRUEENDVERTEX_X;
   Double_t        Ds_TRUEENDVERTEX_Y;
   Double_t        Ds_TRUEENDVERTEX_Z;
   Bool_t          Ds_TRUEISSTABLE;
   Double_t        Ds_TRUETAU;
   Int_t           Ds_Reconstructible;
   Int_t           Ds_Reconstructed;
   Int_t           Ds_ProtoParticles;
   Float_t         Ds_PP_PX[20];   //[Ds_ProtoParticles]
   Float_t         Ds_PP_PY[20];   //[Ds_ProtoParticles]
   Float_t         Ds_PP_PZ[20];   //[Ds_ProtoParticles]
   Float_t         Ds_PP_Weight[20];   //[Ds_ProtoParticles]
   Float_t         Ds_PP_tr_pchi2[20];   //[Ds_ProtoParticles]
   Float_t         Ds_PP_DLLe[20];   //[Ds_ProtoParticles]
   Float_t         Ds_PP_DLLk[20];   //[Ds_ProtoParticles]
   Float_t         Ds_PP_DLLp[20];   //[Ds_ProtoParticles]
   Float_t         Ds_PP_DLLmu[20];   //[Ds_ProtoParticles]
   Int_t           Ds_ID;
   Double_t        Ds_TAU;
   Double_t        Ds_TAUERR;
   Double_t        Ds_TAUCHI2;
   Double_t        Ds_X;
   Double_t        Ds_Y;
   Double_t        kaon_m_OWNPV_X;
   Double_t        kaon_m_OWNPV_Y;
   Double_t        kaon_m_OWNPV_Z;
   Double_t        kaon_m_OWNPV_XERR;
   Double_t        kaon_m_OWNPV_YERR;
   Double_t        kaon_m_OWNPV_ZERR;
   Double_t        kaon_m_OWNPV_CHI2;
   Int_t           kaon_m_OWNPV_NDOF;
   Float_t         kaon_m_OWNPV_COV_[3][3];
   Double_t        kaon_m_IP_OWNPV;
   Double_t        kaon_m_IPCHI2_OWNPV;
   Double_t        kaon_m_ORIVX_X;
   Double_t        kaon_m_ORIVX_Y;
   Double_t        kaon_m_ORIVX_Z;
   Double_t        kaon_m_ORIVX_XERR;
   Double_t        kaon_m_ORIVX_YERR;
   Double_t        kaon_m_ORIVX_ZERR;
   Double_t        kaon_m_ORIVX_CHI2;
   Int_t           kaon_m_ORIVX_NDOF;
   Float_t         kaon_m_ORIVX_COV_[3][3];
   Double_t        kaon_m_P;
   Double_t        kaon_m_PT;
   Double_t        kaon_m_PE;
   Double_t        kaon_m_PX;
   Double_t        kaon_m_PY;
   Double_t        kaon_m_PZ;
   Double_t        kaon_m_M;
   Int_t           kaon_m_TRUEID;
   Int_t           kaon_m_MC_MOTHER_ID;
   Int_t           kaon_m_MC_MOTHER_KEY;
   Int_t           kaon_m_MC_GD_MOTHER_ID;
   Int_t           kaon_m_MC_GD_MOTHER_KEY;
   Int_t           kaon_m_MC_GD_GD_MOTHER_ID;
   Int_t           kaon_m_MC_GD_GD_MOTHER_KEY;
   Double_t        kaon_m_TRUEP_E;
   Double_t        kaon_m_TRUEP_X;
   Double_t        kaon_m_TRUEP_Y;
   Double_t        kaon_m_TRUEP_Z;
   Double_t        kaon_m_TRUEPT;
   Double_t        kaon_m_TRUEORIGINVERTEX_X;
   Double_t        kaon_m_TRUEORIGINVERTEX_Y;
   Double_t        kaon_m_TRUEORIGINVERTEX_Z;
   Double_t        kaon_m_TRUEENDVERTEX_X;
   Double_t        kaon_m_TRUEENDVERTEX_Y;
   Double_t        kaon_m_TRUEENDVERTEX_Z;
   Bool_t          kaon_m_TRUEISSTABLE;
   Double_t        kaon_m_TRUETAU;
   Int_t           kaon_m_Reconstructible;
   Int_t           kaon_m_Reconstructed;
   Int_t           kaon_m_ProtoParticles;
   Float_t         kaon_m_PP_PX[20];   //[kaon_m_ProtoParticles]
   Float_t         kaon_m_PP_PY[20];   //[kaon_m_ProtoParticles]
   Float_t         kaon_m_PP_PZ[20];   //[kaon_m_ProtoParticles]
   Float_t         kaon_m_PP_Weight[20];   //[kaon_m_ProtoParticles]
   Float_t         kaon_m_PP_tr_pchi2[20];   //[kaon_m_ProtoParticles]
   Float_t         kaon_m_PP_DLLe[20];   //[kaon_m_ProtoParticles]
   Float_t         kaon_m_PP_DLLk[20];   //[kaon_m_ProtoParticles]
   Float_t         kaon_m_PP_DLLp[20];   //[kaon_m_ProtoParticles]
   Float_t         kaon_m_PP_DLLmu[20];   //[kaon_m_ProtoParticles]
   Int_t           kaon_m_ID;
   Double_t        kaon_m_CombDLLMu;
   Double_t        kaon_m_ProbNNmu;
   Double_t        kaon_m_ProbNNghost;
   Double_t        kaon_m_InMuonAcc;
   Double_t        kaon_m_MuonDist2;
   Int_t           kaon_m_regionInM2;
   Bool_t          kaon_m_hasMuon;
   Bool_t          kaon_m_isMuon;
   Bool_t          kaon_m_isMuonLoose;
   Int_t           kaon_m_NShared;
   Double_t        kaon_m_MuonLLmu;
   Double_t        kaon_m_MuonLLbg;
   Int_t           kaon_m_isMuonFromProto;
   Double_t        kaon_m_RICHDLLe;
   Double_t        kaon_m_RICHDLLmu;
   Double_t        kaon_m_RICHDLLpi;
   Double_t        kaon_m_RICHDLLK;
   Double_t        kaon_m_RICHDLLp;
   Double_t        kaon_m_RICHDLLbt;
   Int_t           kaon_m_RICHBestID;
   Int_t           kaon_m_RICHThreshold;
   Int_t           kaon_m_RICHThresholdEl;
   Int_t           kaon_m_RICHThresholdMu;
   Int_t           kaon_m_RICHThresholdPi;
   Int_t           kaon_m_RICHThresholdKa;
   Int_t           kaon_m_RICHThresholdPr;
   Int_t           kaon_m_RICHAerogelUsed;
   Int_t           kaon_m_RICH1GasUsed;
   Int_t           kaon_m_RICH2GasUsed;
   Double_t        kaon_m_TRACK_Eta;
   Double_t        kaon_m_TRACK_Phi;
   Double_t        kaon_m_Aerogel_X;
   Double_t        kaon_m_Aerogel_Y;
   Double_t        kaon_m_Aerogel_Z;
   Double_t        kaon_m_Aerogel_Rho;
   Double_t        kaon_m_Aerogel_Phi;
   Double_t        kaon_m_Rich1Gas_X;
   Double_t        kaon_m_Rich1Gas_Y;
   Double_t        kaon_m_Rich1Gas_Z;
   Double_t        kaon_m_Rich1Gas_Rho;
   Double_t        kaon_m_Rich1Gas_Phi;
   Double_t        kaon_m_Rich2Gas_X;
   Double_t        kaon_m_Rich2Gas_Y;
   Double_t        kaon_m_Rich2Gas_Z;
   Double_t        kaon_m_Rich2Gas_Rho;
   Double_t        kaon_m_Rich2Gas_Phi;
   Int_t           kaon_m_TRACK_Type;
   Int_t           kaon_m_TRACK_Key;
   Double_t        kaon_m_TRACK_CHI2NDOF;
   Double_t        kaon_m_TRACK_PCHI2;
   Double_t        kaon_m_TRACK_MatchCHI2;
   Double_t        kaon_m_TRACK_GhostProb;
   Double_t        kaon_m_TRACK_CloneDist;
   Double_t        kaon_m_TRACK_Likelihood;
   Double_t        kaon_m_X;
   Double_t        kaon_m_Y;
   Double_t        kaon_m_MIPCHI2DV_PV;
   Int_t           kaon_m_0_40_cc_mult;
   Double_t        kaon_m_0_40_cc_sPT;
   Double_t        kaon_m_0_40_cc_vPT;
   Double_t        kaon_m_0_40_cc_PX;
   Double_t        kaon_m_0_40_cc_PY;
   Double_t        kaon_m_0_40_cc_PZ;
   Double_t        kaon_m_0_40_cc_asy_P;
   Double_t        kaon_m_0_40_cc_asy_PT;
   Double_t        kaon_m_0_40_cc_asy_PX;
   Double_t        kaon_m_0_40_cc_asy_PY;
   Double_t        kaon_m_0_40_cc_asy_PZ;
   Double_t        kaon_m_0_40_cc_deltaEta;
   Double_t        kaon_m_0_40_cc_deltaPhi;
   Double_t        kaon_m_0_40_cc_IT;
   Int_t           kaon_m_0_40_cc_maxPt_Q;
   Double_t        kaon_m_0_40_cc_maxPt_PT;
   Double_t        kaon_m_0_40_cc_maxPt_PX;
   Double_t        kaon_m_0_40_cc_maxPt_PY;
   Double_t        kaon_m_0_40_cc_maxPt_PZ;
   Double_t        kaon_m_0_40_cc_maxPt_PE;
   Int_t           kaon_m_0_40_nc_mult;
   Double_t        kaon_m_0_40_nc_sPT;
   Double_t        kaon_m_0_40_nc_vPT;
   Double_t        kaon_m_0_40_nc_PX;
   Double_t        kaon_m_0_40_nc_PY;
   Double_t        kaon_m_0_40_nc_PZ;
   Double_t        kaon_m_0_40_nc_asy_P;
   Double_t        kaon_m_0_40_nc_asy_PT;
   Double_t        kaon_m_0_40_nc_asy_PX;
   Double_t        kaon_m_0_40_nc_asy_PY;
   Double_t        kaon_m_0_40_nc_asy_PZ;
   Double_t        kaon_m_0_40_nc_deltaEta;
   Double_t        kaon_m_0_40_nc_deltaPhi;
   Double_t        kaon_m_0_40_nc_IT;
   Double_t        kaon_m_0_40_nc_maxPt_PT;
   Double_t        kaon_m_0_40_nc_maxPt_PX;
   Double_t        kaon_m_0_40_nc_maxPt_PY;
   Double_t        kaon_m_0_40_nc_maxPt_PZ;
   Double_t        kaon_m_0_40_IT;
   Int_t           kaon_m_0_50_cc_mult;
   Double_t        kaon_m_0_50_cc_sPT;
   Double_t        kaon_m_0_50_cc_vPT;
   Double_t        kaon_m_0_50_cc_PX;
   Double_t        kaon_m_0_50_cc_PY;
   Double_t        kaon_m_0_50_cc_PZ;
   Double_t        kaon_m_0_50_cc_asy_P;
   Double_t        kaon_m_0_50_cc_asy_PT;
   Double_t        kaon_m_0_50_cc_asy_PX;
   Double_t        kaon_m_0_50_cc_asy_PY;
   Double_t        kaon_m_0_50_cc_asy_PZ;
   Double_t        kaon_m_0_50_cc_deltaEta;
   Double_t        kaon_m_0_50_cc_deltaPhi;
   Double_t        kaon_m_0_50_cc_IT;
   Int_t           kaon_m_0_50_cc_maxPt_Q;
   Double_t        kaon_m_0_50_cc_maxPt_PT;
   Double_t        kaon_m_0_50_cc_maxPt_PX;
   Double_t        kaon_m_0_50_cc_maxPt_PY;
   Double_t        kaon_m_0_50_cc_maxPt_PZ;
   Double_t        kaon_m_0_50_cc_maxPt_PE;
   Int_t           kaon_m_0_50_nc_mult;
   Double_t        kaon_m_0_50_nc_sPT;
   Double_t        kaon_m_0_50_nc_vPT;
   Double_t        kaon_m_0_50_nc_PX;
   Double_t        kaon_m_0_50_nc_PY;
   Double_t        kaon_m_0_50_nc_PZ;
   Double_t        kaon_m_0_50_nc_asy_P;
   Double_t        kaon_m_0_50_nc_asy_PT;
   Double_t        kaon_m_0_50_nc_asy_PX;
   Double_t        kaon_m_0_50_nc_asy_PY;
   Double_t        kaon_m_0_50_nc_asy_PZ;
   Double_t        kaon_m_0_50_nc_deltaEta;
   Double_t        kaon_m_0_50_nc_deltaPhi;
   Double_t        kaon_m_0_50_nc_IT;
   Double_t        kaon_m_0_50_nc_maxPt_PT;
   Double_t        kaon_m_0_50_nc_maxPt_PX;
   Double_t        kaon_m_0_50_nc_maxPt_PY;
   Double_t        kaon_m_0_50_nc_maxPt_PZ;
   Double_t        kaon_m_0_50_IT;
   Int_t           kaon_m_0_60_cc_mult;
   Double_t        kaon_m_0_60_cc_sPT;
   Double_t        kaon_m_0_60_cc_vPT;
   Double_t        kaon_m_0_60_cc_PX;
   Double_t        kaon_m_0_60_cc_PY;
   Double_t        kaon_m_0_60_cc_PZ;
   Double_t        kaon_m_0_60_cc_asy_P;
   Double_t        kaon_m_0_60_cc_asy_PT;
   Double_t        kaon_m_0_60_cc_asy_PX;
   Double_t        kaon_m_0_60_cc_asy_PY;
   Double_t        kaon_m_0_60_cc_asy_PZ;
   Double_t        kaon_m_0_60_cc_deltaEta;
   Double_t        kaon_m_0_60_cc_deltaPhi;
   Double_t        kaon_m_0_60_cc_IT;
   Int_t           kaon_m_0_60_cc_maxPt_Q;
   Double_t        kaon_m_0_60_cc_maxPt_PT;
   Double_t        kaon_m_0_60_cc_maxPt_PX;
   Double_t        kaon_m_0_60_cc_maxPt_PY;
   Double_t        kaon_m_0_60_cc_maxPt_PZ;
   Double_t        kaon_m_0_60_cc_maxPt_PE;
   Int_t           kaon_m_0_60_nc_mult;
   Double_t        kaon_m_0_60_nc_sPT;
   Double_t        kaon_m_0_60_nc_vPT;
   Double_t        kaon_m_0_60_nc_PX;
   Double_t        kaon_m_0_60_nc_PY;
   Double_t        kaon_m_0_60_nc_PZ;
   Double_t        kaon_m_0_60_nc_asy_P;
   Double_t        kaon_m_0_60_nc_asy_PT;
   Double_t        kaon_m_0_60_nc_asy_PX;
   Double_t        kaon_m_0_60_nc_asy_PY;
   Double_t        kaon_m_0_60_nc_asy_PZ;
   Double_t        kaon_m_0_60_nc_deltaEta;
   Double_t        kaon_m_0_60_nc_deltaPhi;
   Double_t        kaon_m_0_60_nc_IT;
   Double_t        kaon_m_0_60_nc_maxPt_PT;
   Double_t        kaon_m_0_60_nc_maxPt_PX;
   Double_t        kaon_m_0_60_nc_maxPt_PY;
   Double_t        kaon_m_0_60_nc_maxPt_PZ;
   Double_t        kaon_m_0_60_IT;
   Int_t           kaon_m_0_70_cc_mult;
   Double_t        kaon_m_0_70_cc_sPT;
   Double_t        kaon_m_0_70_cc_vPT;
   Double_t        kaon_m_0_70_cc_PX;
   Double_t        kaon_m_0_70_cc_PY;
   Double_t        kaon_m_0_70_cc_PZ;
   Double_t        kaon_m_0_70_cc_asy_P;
   Double_t        kaon_m_0_70_cc_asy_PT;
   Double_t        kaon_m_0_70_cc_asy_PX;
   Double_t        kaon_m_0_70_cc_asy_PY;
   Double_t        kaon_m_0_70_cc_asy_PZ;
   Double_t        kaon_m_0_70_cc_deltaEta;
   Double_t        kaon_m_0_70_cc_deltaPhi;
   Double_t        kaon_m_0_70_cc_IT;
   Int_t           kaon_m_0_70_cc_maxPt_Q;
   Double_t        kaon_m_0_70_cc_maxPt_PT;
   Double_t        kaon_m_0_70_cc_maxPt_PX;
   Double_t        kaon_m_0_70_cc_maxPt_PY;
   Double_t        kaon_m_0_70_cc_maxPt_PZ;
   Double_t        kaon_m_0_70_cc_maxPt_PE;
   Int_t           kaon_m_0_70_nc_mult;
   Double_t        kaon_m_0_70_nc_sPT;
   Double_t        kaon_m_0_70_nc_vPT;
   Double_t        kaon_m_0_70_nc_PX;
   Double_t        kaon_m_0_70_nc_PY;
   Double_t        kaon_m_0_70_nc_PZ;
   Double_t        kaon_m_0_70_nc_asy_P;
   Double_t        kaon_m_0_70_nc_asy_PT;
   Double_t        kaon_m_0_70_nc_asy_PX;
   Double_t        kaon_m_0_70_nc_asy_PY;
   Double_t        kaon_m_0_70_nc_asy_PZ;
   Double_t        kaon_m_0_70_nc_deltaEta;
   Double_t        kaon_m_0_70_nc_deltaPhi;
   Double_t        kaon_m_0_70_nc_IT;
   Double_t        kaon_m_0_70_nc_maxPt_PT;
   Double_t        kaon_m_0_70_nc_maxPt_PX;
   Double_t        kaon_m_0_70_nc_maxPt_PY;
   Double_t        kaon_m_0_70_nc_maxPt_PZ;
   Double_t        kaon_m_0_70_IT;
   Int_t           kaon_m_0_80_cc_mult;
   Double_t        kaon_m_0_80_cc_sPT;
   Double_t        kaon_m_0_80_cc_vPT;
   Double_t        kaon_m_0_80_cc_PX;
   Double_t        kaon_m_0_80_cc_PY;
   Double_t        kaon_m_0_80_cc_PZ;
   Double_t        kaon_m_0_80_cc_asy_P;
   Double_t        kaon_m_0_80_cc_asy_PT;
   Double_t        kaon_m_0_80_cc_asy_PX;
   Double_t        kaon_m_0_80_cc_asy_PY;
   Double_t        kaon_m_0_80_cc_asy_PZ;
   Double_t        kaon_m_0_80_cc_deltaEta;
   Double_t        kaon_m_0_80_cc_deltaPhi;
   Double_t        kaon_m_0_80_cc_IT;
   Int_t           kaon_m_0_80_cc_maxPt_Q;
   Double_t        kaon_m_0_80_cc_maxPt_PT;
   Double_t        kaon_m_0_80_cc_maxPt_PX;
   Double_t        kaon_m_0_80_cc_maxPt_PY;
   Double_t        kaon_m_0_80_cc_maxPt_PZ;
   Double_t        kaon_m_0_80_cc_maxPt_PE;
   Int_t           kaon_m_0_80_nc_mult;
   Double_t        kaon_m_0_80_nc_sPT;
   Double_t        kaon_m_0_80_nc_vPT;
   Double_t        kaon_m_0_80_nc_PX;
   Double_t        kaon_m_0_80_nc_PY;
   Double_t        kaon_m_0_80_nc_PZ;
   Double_t        kaon_m_0_80_nc_asy_P;
   Double_t        kaon_m_0_80_nc_asy_PT;
   Double_t        kaon_m_0_80_nc_asy_PX;
   Double_t        kaon_m_0_80_nc_asy_PY;
   Double_t        kaon_m_0_80_nc_asy_PZ;
   Double_t        kaon_m_0_80_nc_deltaEta;
   Double_t        kaon_m_0_80_nc_deltaPhi;
   Double_t        kaon_m_0_80_nc_IT;
   Double_t        kaon_m_0_80_nc_maxPt_PT;
   Double_t        kaon_m_0_80_nc_maxPt_PX;
   Double_t        kaon_m_0_80_nc_maxPt_PY;
   Double_t        kaon_m_0_80_nc_maxPt_PZ;
   Double_t        kaon_m_0_80_IT;
   Int_t           kaon_m_0_90_cc_mult;
   Double_t        kaon_m_0_90_cc_sPT;
   Double_t        kaon_m_0_90_cc_vPT;
   Double_t        kaon_m_0_90_cc_PX;
   Double_t        kaon_m_0_90_cc_PY;
   Double_t        kaon_m_0_90_cc_PZ;
   Double_t        kaon_m_0_90_cc_asy_P;
   Double_t        kaon_m_0_90_cc_asy_PT;
   Double_t        kaon_m_0_90_cc_asy_PX;
   Double_t        kaon_m_0_90_cc_asy_PY;
   Double_t        kaon_m_0_90_cc_asy_PZ;
   Double_t        kaon_m_0_90_cc_deltaEta;
   Double_t        kaon_m_0_90_cc_deltaPhi;
   Double_t        kaon_m_0_90_cc_IT;
   Int_t           kaon_m_0_90_cc_maxPt_Q;
   Double_t        kaon_m_0_90_cc_maxPt_PT;
   Double_t        kaon_m_0_90_cc_maxPt_PX;
   Double_t        kaon_m_0_90_cc_maxPt_PY;
   Double_t        kaon_m_0_90_cc_maxPt_PZ;
   Double_t        kaon_m_0_90_cc_maxPt_PE;
   Int_t           kaon_m_0_90_nc_mult;
   Double_t        kaon_m_0_90_nc_sPT;
   Double_t        kaon_m_0_90_nc_vPT;
   Double_t        kaon_m_0_90_nc_PX;
   Double_t        kaon_m_0_90_nc_PY;
   Double_t        kaon_m_0_90_nc_PZ;
   Double_t        kaon_m_0_90_nc_asy_P;
   Double_t        kaon_m_0_90_nc_asy_PT;
   Double_t        kaon_m_0_90_nc_asy_PX;
   Double_t        kaon_m_0_90_nc_asy_PY;
   Double_t        kaon_m_0_90_nc_asy_PZ;
   Double_t        kaon_m_0_90_nc_deltaEta;
   Double_t        kaon_m_0_90_nc_deltaPhi;
   Double_t        kaon_m_0_90_nc_IT;
   Double_t        kaon_m_0_90_nc_maxPt_PT;
   Double_t        kaon_m_0_90_nc_maxPt_PX;
   Double_t        kaon_m_0_90_nc_maxPt_PY;
   Double_t        kaon_m_0_90_nc_maxPt_PZ;
   Double_t        kaon_m_0_90_IT;
   Int_t           kaon_m_1_00_cc_mult;
   Double_t        kaon_m_1_00_cc_sPT;
   Double_t        kaon_m_1_00_cc_vPT;
   Double_t        kaon_m_1_00_cc_PX;
   Double_t        kaon_m_1_00_cc_PY;
   Double_t        kaon_m_1_00_cc_PZ;
   Double_t        kaon_m_1_00_cc_asy_P;
   Double_t        kaon_m_1_00_cc_asy_PT;
   Double_t        kaon_m_1_00_cc_asy_PX;
   Double_t        kaon_m_1_00_cc_asy_PY;
   Double_t        kaon_m_1_00_cc_asy_PZ;
   Double_t        kaon_m_1_00_cc_deltaEta;
   Double_t        kaon_m_1_00_cc_deltaPhi;
   Double_t        kaon_m_1_00_cc_IT;
   Int_t           kaon_m_1_00_cc_maxPt_Q;
   Double_t        kaon_m_1_00_cc_maxPt_PT;
   Double_t        kaon_m_1_00_cc_maxPt_PX;
   Double_t        kaon_m_1_00_cc_maxPt_PY;
   Double_t        kaon_m_1_00_cc_maxPt_PZ;
   Double_t        kaon_m_1_00_cc_maxPt_PE;
   Int_t           kaon_m_1_00_nc_mult;
   Double_t        kaon_m_1_00_nc_sPT;
   Double_t        kaon_m_1_00_nc_vPT;
   Double_t        kaon_m_1_00_nc_PX;
   Double_t        kaon_m_1_00_nc_PY;
   Double_t        kaon_m_1_00_nc_PZ;
   Double_t        kaon_m_1_00_nc_asy_P;
   Double_t        kaon_m_1_00_nc_asy_PT;
   Double_t        kaon_m_1_00_nc_asy_PX;
   Double_t        kaon_m_1_00_nc_asy_PY;
   Double_t        kaon_m_1_00_nc_asy_PZ;
   Double_t        kaon_m_1_00_nc_deltaEta;
   Double_t        kaon_m_1_00_nc_deltaPhi;
   Double_t        kaon_m_1_00_nc_IT;
   Double_t        kaon_m_1_00_nc_maxPt_PT;
   Double_t        kaon_m_1_00_nc_maxPt_PX;
   Double_t        kaon_m_1_00_nc_maxPt_PY;
   Double_t        kaon_m_1_00_nc_maxPt_PZ;
   Double_t        kaon_m_1_00_IT;
   Double_t        kaon_p_OWNPV_X;
   Double_t        kaon_p_OWNPV_Y;
   Double_t        kaon_p_OWNPV_Z;
   Double_t        kaon_p_OWNPV_XERR;
   Double_t        kaon_p_OWNPV_YERR;
   Double_t        kaon_p_OWNPV_ZERR;
   Double_t        kaon_p_OWNPV_CHI2;
   Int_t           kaon_p_OWNPV_NDOF;
   Float_t         kaon_p_OWNPV_COV_[3][3];
   Double_t        kaon_p_IP_OWNPV;
   Double_t        kaon_p_IPCHI2_OWNPV;
   Double_t        kaon_p_ORIVX_X;
   Double_t        kaon_p_ORIVX_Y;
   Double_t        kaon_p_ORIVX_Z;
   Double_t        kaon_p_ORIVX_XERR;
   Double_t        kaon_p_ORIVX_YERR;
   Double_t        kaon_p_ORIVX_ZERR;
   Double_t        kaon_p_ORIVX_CHI2;
   Int_t           kaon_p_ORIVX_NDOF;
   Float_t         kaon_p_ORIVX_COV_[3][3];
   Double_t        kaon_p_P;
   Double_t        kaon_p_PT;
   Double_t        kaon_p_PE;
   Double_t        kaon_p_PX;
   Double_t        kaon_p_PY;
   Double_t        kaon_p_PZ;
   Double_t        kaon_p_M;
   Int_t           kaon_p_TRUEID;
   Int_t           kaon_p_MC_MOTHER_ID;
   Int_t           kaon_p_MC_MOTHER_KEY;
   Int_t           kaon_p_MC_GD_MOTHER_ID;
   Int_t           kaon_p_MC_GD_MOTHER_KEY;
   Int_t           kaon_p_MC_GD_GD_MOTHER_ID;
   Int_t           kaon_p_MC_GD_GD_MOTHER_KEY;
   Double_t        kaon_p_TRUEP_E;
   Double_t        kaon_p_TRUEP_X;
   Double_t        kaon_p_TRUEP_Y;
   Double_t        kaon_p_TRUEP_Z;
   Double_t        kaon_p_TRUEPT;
   Double_t        kaon_p_TRUEORIGINVERTEX_X;
   Double_t        kaon_p_TRUEORIGINVERTEX_Y;
   Double_t        kaon_p_TRUEORIGINVERTEX_Z;
   Double_t        kaon_p_TRUEENDVERTEX_X;
   Double_t        kaon_p_TRUEENDVERTEX_Y;
   Double_t        kaon_p_TRUEENDVERTEX_Z;
   Bool_t          kaon_p_TRUEISSTABLE;
   Double_t        kaon_p_TRUETAU;
   Int_t           kaon_p_Reconstructible;
   Int_t           kaon_p_Reconstructed;
   Int_t           kaon_p_ProtoParticles;
   Float_t         kaon_p_PP_PX[20];   //[kaon_p_ProtoParticles]
   Float_t         kaon_p_PP_PY[20];   //[kaon_p_ProtoParticles]
   Float_t         kaon_p_PP_PZ[20];   //[kaon_p_ProtoParticles]
   Float_t         kaon_p_PP_Weight[20];   //[kaon_p_ProtoParticles]
   Float_t         kaon_p_PP_tr_pchi2[20];   //[kaon_p_ProtoParticles]
   Float_t         kaon_p_PP_DLLe[20];   //[kaon_p_ProtoParticles]
   Float_t         kaon_p_PP_DLLk[20];   //[kaon_p_ProtoParticles]
   Float_t         kaon_p_PP_DLLp[20];   //[kaon_p_ProtoParticles]
   Float_t         kaon_p_PP_DLLmu[20];   //[kaon_p_ProtoParticles]
   Int_t           kaon_p_ID;
   Double_t        kaon_p_CombDLLMu;
   Double_t        kaon_p_ProbNNmu;
   Double_t        kaon_p_ProbNNghost;
   Double_t        kaon_p_InMuonAcc;
   Double_t        kaon_p_MuonDist2;
   Int_t           kaon_p_regionInM2;
   Bool_t          kaon_p_hasMuon;
   Bool_t          kaon_p_isMuon;
   Bool_t          kaon_p_isMuonLoose;
   Int_t           kaon_p_NShared;
   Double_t        kaon_p_MuonLLmu;
   Double_t        kaon_p_MuonLLbg;
   Int_t           kaon_p_isMuonFromProto;
   Double_t        kaon_p_RICHDLLe;
   Double_t        kaon_p_RICHDLLmu;
   Double_t        kaon_p_RICHDLLpi;
   Double_t        kaon_p_RICHDLLK;
   Double_t        kaon_p_RICHDLLp;
   Double_t        kaon_p_RICHDLLbt;
   Int_t           kaon_p_RICHBestID;
   Int_t           kaon_p_RICHThreshold;
   Int_t           kaon_p_RICHThresholdEl;
   Int_t           kaon_p_RICHThresholdMu;
   Int_t           kaon_p_RICHThresholdPi;
   Int_t           kaon_p_RICHThresholdKa;
   Int_t           kaon_p_RICHThresholdPr;
   Int_t           kaon_p_RICHAerogelUsed;
   Int_t           kaon_p_RICH1GasUsed;
   Int_t           kaon_p_RICH2GasUsed;
   Double_t        kaon_p_TRACK_Eta;
   Double_t        kaon_p_TRACK_Phi;
   Double_t        kaon_p_Aerogel_X;
   Double_t        kaon_p_Aerogel_Y;
   Double_t        kaon_p_Aerogel_Z;
   Double_t        kaon_p_Aerogel_Rho;
   Double_t        kaon_p_Aerogel_Phi;
   Double_t        kaon_p_Rich1Gas_X;
   Double_t        kaon_p_Rich1Gas_Y;
   Double_t        kaon_p_Rich1Gas_Z;
   Double_t        kaon_p_Rich1Gas_Rho;
   Double_t        kaon_p_Rich1Gas_Phi;
   Double_t        kaon_p_Rich2Gas_X;
   Double_t        kaon_p_Rich2Gas_Y;
   Double_t        kaon_p_Rich2Gas_Z;
   Double_t        kaon_p_Rich2Gas_Rho;
   Double_t        kaon_p_Rich2Gas_Phi;
   Int_t           kaon_p_TRACK_Type;
   Int_t           kaon_p_TRACK_Key;
   Double_t        kaon_p_TRACK_CHI2NDOF;
   Double_t        kaon_p_TRACK_PCHI2;
   Double_t        kaon_p_TRACK_MatchCHI2;
   Double_t        kaon_p_TRACK_GhostProb;
   Double_t        kaon_p_TRACK_CloneDist;
   Double_t        kaon_p_TRACK_Likelihood;
   Double_t        kaon_p_X;
   Double_t        kaon_p_Y;
   Double_t        pi_p_OWNPV_X;
   Double_t        pi_p_OWNPV_Y;
   Double_t        pi_p_OWNPV_Z;
   Double_t        pi_p_OWNPV_XERR;
   Double_t        pi_p_OWNPV_YERR;
   Double_t        pi_p_OWNPV_ZERR;
   Double_t        pi_p_OWNPV_CHI2;
   Int_t           pi_p_OWNPV_NDOF;
   Float_t         pi_p_OWNPV_COV_[3][3];
   Double_t        pi_p_IP_OWNPV;
   Double_t        pi_p_IPCHI2_OWNPV;
   Double_t        pi_p_ORIVX_X;
   Double_t        pi_p_ORIVX_Y;
   Double_t        pi_p_ORIVX_Z;
   Double_t        pi_p_ORIVX_XERR;
   Double_t        pi_p_ORIVX_YERR;
   Double_t        pi_p_ORIVX_ZERR;
   Double_t        pi_p_ORIVX_CHI2;
   Int_t           pi_p_ORIVX_NDOF;
   Float_t         pi_p_ORIVX_COV_[3][3];
   Double_t        pi_p_P;
   Double_t        pi_p_PT;
   Double_t        pi_p_PE;
   Double_t        pi_p_PX;
   Double_t        pi_p_PY;
   Double_t        pi_p_PZ;
   Double_t        pi_p_M;
   Int_t           pi_p_TRUEID;
   Int_t           pi_p_MC_MOTHER_ID;
   Int_t           pi_p_MC_MOTHER_KEY;
   Int_t           pi_p_MC_GD_MOTHER_ID;
   Int_t           pi_p_MC_GD_MOTHER_KEY;
   Int_t           pi_p_MC_GD_GD_MOTHER_ID;
   Int_t           pi_p_MC_GD_GD_MOTHER_KEY;
   Double_t        pi_p_TRUEP_E;
   Double_t        pi_p_TRUEP_X;
   Double_t        pi_p_TRUEP_Y;
   Double_t        pi_p_TRUEP_Z;
   Double_t        pi_p_TRUEPT;
   Double_t        pi_p_TRUEORIGINVERTEX_X;
   Double_t        pi_p_TRUEORIGINVERTEX_Y;
   Double_t        pi_p_TRUEORIGINVERTEX_Z;
   Double_t        pi_p_TRUEENDVERTEX_X;
   Double_t        pi_p_TRUEENDVERTEX_Y;
   Double_t        pi_p_TRUEENDVERTEX_Z;
   Bool_t          pi_p_TRUEISSTABLE;
   Double_t        pi_p_TRUETAU;
   Int_t           pi_p_Reconstructible;
   Int_t           pi_p_Reconstructed;
   Int_t           pi_p_ProtoParticles;
   Float_t         pi_p_PP_PX[20];   //[pi_p_ProtoParticles]
   Float_t         pi_p_PP_PY[20];   //[pi_p_ProtoParticles]
   Float_t         pi_p_PP_PZ[20];   //[pi_p_ProtoParticles]
   Float_t         pi_p_PP_Weight[20];   //[pi_p_ProtoParticles]
   Float_t         pi_p_PP_tr_pchi2[20];   //[pi_p_ProtoParticles]
   Float_t         pi_p_PP_DLLe[20];   //[pi_p_ProtoParticles]
   Float_t         pi_p_PP_DLLk[20];   //[pi_p_ProtoParticles]
   Float_t         pi_p_PP_DLLp[20];   //[pi_p_ProtoParticles]
   Float_t         pi_p_PP_DLLmu[20];   //[pi_p_ProtoParticles]
   Int_t           pi_p_ID;
   Double_t        pi_p_CombDLLMu;
   Double_t        pi_p_ProbNNmu;
   Double_t        pi_p_ProbNNghost;
   Double_t        pi_p_InMuonAcc;
   Double_t        pi_p_MuonDist2;
   Int_t           pi_p_regionInM2;
   Bool_t          pi_p_hasMuon;
   Bool_t          pi_p_isMuon;
   Bool_t          pi_p_isMuonLoose;
   Int_t           pi_p_NShared;
   Double_t        pi_p_MuonLLmu;
   Double_t        pi_p_MuonLLbg;
   Int_t           pi_p_isMuonFromProto;
   Double_t        pi_p_RICHDLLe;
   Double_t        pi_p_RICHDLLmu;
   Double_t        pi_p_RICHDLLpi;
   Double_t        pi_p_RICHDLLK;
   Double_t        pi_p_RICHDLLp;
   Double_t        pi_p_RICHDLLbt;
   Int_t           pi_p_RICHBestID;
   Int_t           pi_p_RICHThreshold;
   Int_t           pi_p_RICHThresholdEl;
   Int_t           pi_p_RICHThresholdMu;
   Int_t           pi_p_RICHThresholdPi;
   Int_t           pi_p_RICHThresholdKa;
   Int_t           pi_p_RICHThresholdPr;
   Int_t           pi_p_RICHAerogelUsed;
   Int_t           pi_p_RICH1GasUsed;
   Int_t           pi_p_RICH2GasUsed;
   Double_t        pi_p_TRACK_Eta;
   Double_t        pi_p_TRACK_Phi;
   Double_t        pi_p_Aerogel_X;
   Double_t        pi_p_Aerogel_Y;
   Double_t        pi_p_Aerogel_Z;
   Double_t        pi_p_Aerogel_Rho;
   Double_t        pi_p_Aerogel_Phi;
   Double_t        pi_p_Rich1Gas_X;
   Double_t        pi_p_Rich1Gas_Y;
   Double_t        pi_p_Rich1Gas_Z;
   Double_t        pi_p_Rich1Gas_Rho;
   Double_t        pi_p_Rich1Gas_Phi;
   Double_t        pi_p_Rich2Gas_X;
   Double_t        pi_p_Rich2Gas_Y;
   Double_t        pi_p_Rich2Gas_Z;
   Double_t        pi_p_Rich2Gas_Rho;
   Double_t        pi_p_Rich2Gas_Phi;
   Int_t           pi_p_TRACK_Type;
   Int_t           pi_p_TRACK_Key;
   Double_t        pi_p_TRACK_CHI2NDOF;
   Double_t        pi_p_TRACK_PCHI2;
   Double_t        pi_p_TRACK_MatchCHI2;
   Double_t        pi_p_TRACK_GhostProb;
   Double_t        pi_p_TRACK_CloneDist;
   Double_t        pi_p_TRACK_Likelihood;
   Double_t        pi_p_X;
   Double_t        pi_p_Y;
   Double_t        muon_p_OWNPV_X;
   Double_t        muon_p_OWNPV_Y;
   Double_t        muon_p_OWNPV_Z;
   Double_t        muon_p_OWNPV_XERR;
   Double_t        muon_p_OWNPV_YERR;
   Double_t        muon_p_OWNPV_ZERR;
   Double_t        muon_p_OWNPV_CHI2;
   Int_t           muon_p_OWNPV_NDOF;
   Float_t         muon_p_OWNPV_COV_[3][3];
   Double_t        muon_p_IP_OWNPV;
   Double_t        muon_p_IPCHI2_OWNPV;
   Double_t        muon_p_ORIVX_X;
   Double_t        muon_p_ORIVX_Y;
   Double_t        muon_p_ORIVX_Z;
   Double_t        muon_p_ORIVX_XERR;
   Double_t        muon_p_ORIVX_YERR;
   Double_t        muon_p_ORIVX_ZERR;
   Double_t        muon_p_ORIVX_CHI2;
   Int_t           muon_p_ORIVX_NDOF;
   Float_t         muon_p_ORIVX_COV_[3][3];
   Double_t        muon_p_P;
   Double_t        muon_p_PT;
   Double_t        muon_p_PE;
   Double_t        muon_p_PX;
   Double_t        muon_p_PY;
   Double_t        muon_p_PZ;
   Double_t        muon_p_M;
   Int_t           muon_p_TRUEID;
   Int_t           muon_p_MC_MOTHER_ID;
   Int_t           muon_p_MC_MOTHER_KEY;
   Int_t           muon_p_MC_GD_MOTHER_ID;
   Int_t           muon_p_MC_GD_MOTHER_KEY;
   Int_t           muon_p_MC_GD_GD_MOTHER_ID;
   Int_t           muon_p_MC_GD_GD_MOTHER_KEY;
   Double_t        muon_p_TRUEP_E;
   Double_t        muon_p_TRUEP_X;
   Double_t        muon_p_TRUEP_Y;
   Double_t        muon_p_TRUEP_Z;
   Double_t        muon_p_TRUEPT;
   Double_t        muon_p_TRUEORIGINVERTEX_X;
   Double_t        muon_p_TRUEORIGINVERTEX_Y;
   Double_t        muon_p_TRUEORIGINVERTEX_Z;
   Double_t        muon_p_TRUEENDVERTEX_X;
   Double_t        muon_p_TRUEENDVERTEX_Y;
   Double_t        muon_p_TRUEENDVERTEX_Z;
   Bool_t          muon_p_TRUEISSTABLE;
   Double_t        muon_p_TRUETAU;
   Int_t           muon_p_Reconstructible;
   Int_t           muon_p_Reconstructed;
   Int_t           muon_p_ProtoParticles;
   Float_t         muon_p_PP_PX[20];   //[muon_p_ProtoParticles]
   Float_t         muon_p_PP_PY[20];   //[muon_p_ProtoParticles]
   Float_t         muon_p_PP_PZ[20];   //[muon_p_ProtoParticles]
   Float_t         muon_p_PP_Weight[20];   //[muon_p_ProtoParticles]
   Float_t         muon_p_PP_tr_pchi2[20];   //[muon_p_ProtoParticles]
   Float_t         muon_p_PP_DLLe[20];   //[muon_p_ProtoParticles]
   Float_t         muon_p_PP_DLLk[20];   //[muon_p_ProtoParticles]
   Float_t         muon_p_PP_DLLp[20];   //[muon_p_ProtoParticles]
   Float_t         muon_p_PP_DLLmu[20];   //[muon_p_ProtoParticles]
   Int_t           muon_p_ID;
   Double_t        muon_p_CombDLLMu;
   Double_t        muon_p_ProbNNmu;
   Double_t        muon_p_ProbNNghost;
   Double_t        muon_p_InMuonAcc;
   Double_t        muon_p_MuonDist2;
   Int_t           muon_p_regionInM2;
   Bool_t          muon_p_hasMuon;
   Bool_t          muon_p_isMuon;
   Bool_t          muon_p_isMuonLoose;
   Int_t           muon_p_NShared;
   Double_t        muon_p_MuonLLmu;
   Double_t        muon_p_MuonLLbg;
   Int_t           muon_p_isMuonFromProto;
   Double_t        muon_p_RICHDLLe;
   Double_t        muon_p_RICHDLLmu;
   Double_t        muon_p_RICHDLLpi;
   Double_t        muon_p_RICHDLLK;
   Double_t        muon_p_RICHDLLp;
   Double_t        muon_p_RICHDLLbt;
   Int_t           muon_p_RICHBestID;
   Int_t           muon_p_RICHThreshold;
   Int_t           muon_p_RICHThresholdEl;
   Int_t           muon_p_RICHThresholdMu;
   Int_t           muon_p_RICHThresholdPi;
   Int_t           muon_p_RICHThresholdKa;
   Int_t           muon_p_RICHThresholdPr;
   Int_t           muon_p_RICHAerogelUsed;
   Int_t           muon_p_RICH1GasUsed;
   Int_t           muon_p_RICH2GasUsed;
   Double_t        muon_p_TRACK_Eta;
   Double_t        muon_p_TRACK_Phi;
   Double_t        muon_p_Aerogel_X;
   Double_t        muon_p_Aerogel_Y;
   Double_t        muon_p_Aerogel_Z;
   Double_t        muon_p_Aerogel_Rho;
   Double_t        muon_p_Aerogel_Phi;
   Double_t        muon_p_Rich1Gas_X;
   Double_t        muon_p_Rich1Gas_Y;
   Double_t        muon_p_Rich1Gas_Z;
   Double_t        muon_p_Rich1Gas_Rho;
   Double_t        muon_p_Rich1Gas_Phi;
   Double_t        muon_p_Rich2Gas_X;
   Double_t        muon_p_Rich2Gas_Y;
   Double_t        muon_p_Rich2Gas_Z;
   Double_t        muon_p_Rich2Gas_Rho;
   Double_t        muon_p_Rich2Gas_Phi;
   Int_t           muon_p_TRACK_Type;
   Int_t           muon_p_TRACK_Key;
   Double_t        muon_p_TRACK_CHI2NDOF;
   Double_t        muon_p_TRACK_PCHI2;
   Double_t        muon_p_TRACK_MatchCHI2;
   Double_t        muon_p_TRACK_GhostProb;
   Double_t        muon_p_TRACK_CloneDist;
   Double_t        muon_p_TRACK_Likelihood;
   Double_t        muon_p_X;
   Double_t        muon_p_Y;
   Double_t        muon_p_MIPCHI2DV_PV;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   Short_t         Polarity;
   Int_t           GpsYear;
   Int_t           GpsMonth;
   Int_t           GpsDay;
   Int_t           GpsHour;
   Int_t           GpsMinute;
   Double_t        GpsSecond;
   Int_t           TriggerType;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLT1TCK;
   UInt_t          HLT2TCK;
   ULong64_t       GpsTime;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   Int_t           Collisions;
   Float_t         ProcessType[20];   //[Collisions]
   Float_t         HeaviestQuark[20];   //[Collisions]
   UInt_t          HeaviestQuarkInEvent;
   Int_t           nPV;
   Float_t         PVX[100];   //[nPV]
   Float_t         PVY[100];   //[nPV]
   Float_t         PVZ[100];   //[nPV]
   Float_t         PVXERR[100];   //[nPV]
   Float_t         PVYERR[100];   //[nPV]
   Float_t         PVZERR[100];   //[nPV]
   Float_t         PVCHI2[100];   //[nPV]
   Float_t         PVNDOF[100];   //[nPV]
   Float_t         PVNTRACKS[100];   //[nPV]
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;

   // List of branches
   TBranch        *b_Bs_IsoTrack_Charge_UpStream;   //!
   TBranch        *b_Bs_iso_muon_UpStream;   //!
   TBranch        *b_Bs_iso_Kaon_UpStream;   //!
   TBranch        *b_Bs_iso_SumBDT_UpStream;   //!
   TBranch        *b_Bs_iso_MinBDT_UpStream;   //!
   TBranch        *b_Bs_ConeIso_UpStream;   //!
   TBranch        *b_Bs_MuMu_M_iso_UpStream;   //!
   TBranch        *b_Bs_Kh_M_iso_UpStream;   //!
   TBranch        *b_Bs_iso_muon_VELO;   //!
   TBranch        *b_Bs_iso_Kaon_VELO;   //!
   TBranch        *b_Bs_iso_SumBDT_VELO;   //!
   TBranch        *b_Bs_iso_MinBDT_VELO;   //!
   TBranch        *b_Bs_ENDVERTEX_X;   //!
   TBranch        *b_Bs_ENDVERTEX_Y;   //!
   TBranch        *b_Bs_ENDVERTEX_Z;   //!
   TBranch        *b_Bs_ENDVERTEX_XERR;   //!
   TBranch        *b_Bs_ENDVERTEX_YERR;   //!
   TBranch        *b_Bs_ENDVERTEX_ZERR;   //!
   TBranch        *b_Bs_ENDVERTEX_CHI2;   //!
   TBranch        *b_Bs_ENDVERTEX_NDOF;   //!
   TBranch        *b_Bs_ENDVERTEX_COV_;   //!
   TBranch        *b_Bs_OWNPV_X;   //!
   TBranch        *b_Bs_OWNPV_Y;   //!
   TBranch        *b_Bs_OWNPV_Z;   //!
   TBranch        *b_Bs_OWNPV_XERR;   //!
   TBranch        *b_Bs_OWNPV_YERR;   //!
   TBranch        *b_Bs_OWNPV_ZERR;   //!
   TBranch        *b_Bs_OWNPV_CHI2;   //!
   TBranch        *b_Bs_OWNPV_NDOF;   //!
   TBranch        *b_Bs_OWNPV_COV_;   //!
   TBranch        *b_Bs_IP_OWNPV;   //!
   TBranch        *b_Bs_IPCHI2_OWNPV;   //!
   TBranch        *b_Bs_FD_OWNPV;   //!
   TBranch        *b_Bs_FDCHI2_OWNPV;   //!
   TBranch        *b_Bs_DIRA_OWNPV;   //!
   TBranch        *b_Bs_P;   //!
   TBranch        *b_Bs_PT;   //!
   TBranch        *b_Bs_PE;   //!
   TBranch        *b_Bs_PX;   //!
   TBranch        *b_Bs_PY;   //!
   TBranch        *b_Bs_PZ;   //!
   TBranch        *b_Bs_MM;   //!
   TBranch        *b_Bs_MMERR;   //!
   TBranch        *b_Bs_M;   //!
   TBranch        *b_Bs_BKGCAT;   //!
   TBranch        *b_Bs_ID;   //!
   TBranch        *b_Bs_TAU;   //!
   TBranch        *b_Bs_TAUERR;   //!
   TBranch        *b_Bs_TAUCHI2;   //!
   TBranch        *b_Bs_MCORR;   //!
   TBranch        *b_Bs_MCORRERR;   //!
   TBranch        *b_Bs_MCORRFULLERR;   //!
   TBranch        *b_Bs_Q2SOL1;   //!
   TBranch        *b_Bs_Q2SOL2;   //!
   TBranch        *b_Bs_X;   //!
   TBranch        *b_Bs_Y;   //!
   TBranch        *b_Bs_DOCA;   //!
   TBranch        *b_Bs_DTF_CHI2NDOF;   //!
   TBranch        *b_Bs_DTF_CTAUS;   //!
   TBranch        *b_Bs_DTF_TAU;   //!
   TBranch        *b_Bs_DsMuNu_TruthMatched;   //!
   TBranch        *b_Bs_ETA;   //!
   TBranch        *b_Bs_FD_CHI2_LOKI;   //!
   TBranch        *b_Bs_FD_S;   //!
   TBranch        *b_Bs_KMuNu_TruthMatched;   //!
   TBranch        *b_Bs_PHI;   //!
   TBranch        *b_Bs_VCHI2_LOKI;   //!
   TBranch        *b_Bs_Dsiso_IsoTrack_Charge_Long;   //!
   TBranch        *b_Bs_Dsiso_iso_muon_Long;   //!
   TBranch        *b_Bs_Dsiso_iso_Ds_Long;   //!
   TBranch        *b_Bs_Dsiso_iso_SumBDT_Long;   //!
   TBranch        *b_Bs_Dsiso_iso_MinBDT_Long;   //!
   TBranch        *b_Bs_Dsiso_ConeIso_Long;   //!
   TBranch        *b_Bs_Dsiso_MuMu_M_iso_Long;   //!
   TBranch        *b_Bs_Dsiso_Kh_M_iso_Long;   //!
   TBranch        *b_Bs_IsoTrack_Charge_Long;   //!
   TBranch        *b_Bs_iso_muon_Long;   //!
   TBranch        *b_Bs_iso_Kaon_Long;   //!
   TBranch        *b_Bs_iso_SumBDT_Long;   //!
   TBranch        *b_Bs_iso_MinBDT_Long;   //!
   TBranch        *b_Bs_ConeIso_Long;   //!
   TBranch        *b_Bs_MuMu_M_iso_Long;   //!
   TBranch        *b_Bs_Kh_M_iso_Long;   //!
   TBranch        *b_Bs_0_50_cc_mult;   //!
   TBranch        *b_Bs_0_50_cc_sPT;   //!
   TBranch        *b_Bs_0_50_cc_vPT;   //!
   TBranch        *b_Bs_0_50_cc_PX;   //!
   TBranch        *b_Bs_0_50_cc_PY;   //!
   TBranch        *b_Bs_0_50_cc_PZ;   //!
   TBranch        *b_Bs_0_50_cc_asy_P;   //!
   TBranch        *b_Bs_0_50_cc_asy_PT;   //!
   TBranch        *b_Bs_0_50_cc_asy_PX;   //!
   TBranch        *b_Bs_0_50_cc_asy_PY;   //!
   TBranch        *b_Bs_0_50_cc_asy_PZ;   //!
   TBranch        *b_Bs_0_50_cc_deltaEta;   //!
   TBranch        *b_Bs_0_50_cc_deltaPhi;   //!
   TBranch        *b_Bs_0_50_cc_IT;   //!
   TBranch        *b_Bs_0_50_cc_maxPt_Q;   //!
   TBranch        *b_Bs_0_50_cc_maxPt_PT;   //!
   TBranch        *b_Bs_0_50_cc_maxPt_PX;   //!
   TBranch        *b_Bs_0_50_cc_maxPt_PY;   //!
   TBranch        *b_Bs_0_50_cc_maxPt_PZ;   //!
   TBranch        *b_Bs_0_50_cc_maxPt_PE;   //!
   TBranch        *b_Bs_0_50_nc_mult;   //!
   TBranch        *b_Bs_0_50_nc_sPT;   //!
   TBranch        *b_Bs_0_50_nc_vPT;   //!
   TBranch        *b_Bs_0_50_nc_PX;   //!
   TBranch        *b_Bs_0_50_nc_PY;   //!
   TBranch        *b_Bs_0_50_nc_PZ;   //!
   TBranch        *b_Bs_0_50_nc_asy_P;   //!
   TBranch        *b_Bs_0_50_nc_asy_PT;   //!
   TBranch        *b_Bs_0_50_nc_asy_PX;   //!
   TBranch        *b_Bs_0_50_nc_asy_PY;   //!
   TBranch        *b_Bs_0_50_nc_asy_PZ;   //!
   TBranch        *b_Bs_0_50_nc_deltaEta;   //!
   TBranch        *b_Bs_0_50_nc_deltaPhi;   //!
   TBranch        *b_Bs_0_50_nc_IT;   //!
   TBranch        *b_Bs_0_50_nc_maxPt_PT;   //!
   TBranch        *b_Bs_0_50_nc_maxPt_PX;   //!
   TBranch        *b_Bs_0_50_nc_maxPt_PY;   //!
   TBranch        *b_Bs_0_50_nc_maxPt_PZ;   //!
   TBranch        *b_Bs_0_50_IT;   //!
   TBranch        *b_Bs_1_00_cc_mult;   //!
   TBranch        *b_Bs_1_00_cc_sPT;   //!
   TBranch        *b_Bs_1_00_cc_vPT;   //!
   TBranch        *b_Bs_1_00_cc_PX;   //!
   TBranch        *b_Bs_1_00_cc_PY;   //!
   TBranch        *b_Bs_1_00_cc_PZ;   //!
   TBranch        *b_Bs_1_00_cc_asy_P;   //!
   TBranch        *b_Bs_1_00_cc_asy_PT;   //!
   TBranch        *b_Bs_1_00_cc_asy_PX;   //!
   TBranch        *b_Bs_1_00_cc_asy_PY;   //!
   TBranch        *b_Bs_1_00_cc_asy_PZ;   //!
   TBranch        *b_Bs_1_00_cc_deltaEta;   //!
   TBranch        *b_Bs_1_00_cc_deltaPhi;   //!
   TBranch        *b_Bs_1_00_cc_IT;   //!
   TBranch        *b_Bs_1_00_cc_maxPt_Q;   //!
   TBranch        *b_Bs_1_00_cc_maxPt_PT;   //!
   TBranch        *b_Bs_1_00_cc_maxPt_PX;   //!
   TBranch        *b_Bs_1_00_cc_maxPt_PY;   //!
   TBranch        *b_Bs_1_00_cc_maxPt_PZ;   //!
   TBranch        *b_Bs_1_00_cc_maxPt_PE;   //!
   TBranch        *b_Bs_1_00_nc_mult;   //!
   TBranch        *b_Bs_1_00_nc_sPT;   //!
   TBranch        *b_Bs_1_00_nc_vPT;   //!
   TBranch        *b_Bs_1_00_nc_PX;   //!
   TBranch        *b_Bs_1_00_nc_PY;   //!
   TBranch        *b_Bs_1_00_nc_PZ;   //!
   TBranch        *b_Bs_1_00_nc_asy_P;   //!
   TBranch        *b_Bs_1_00_nc_asy_PT;   //!
   TBranch        *b_Bs_1_00_nc_asy_PX;   //!
   TBranch        *b_Bs_1_00_nc_asy_PY;   //!
   TBranch        *b_Bs_1_00_nc_asy_PZ;   //!
   TBranch        *b_Bs_1_00_nc_deltaEta;   //!
   TBranch        *b_Bs_1_00_nc_deltaPhi;   //!
   TBranch        *b_Bs_1_00_nc_IT;   //!
   TBranch        *b_Bs_1_00_nc_maxPt_PT;   //!
   TBranch        *b_Bs_1_00_nc_maxPt_PX;   //!
   TBranch        *b_Bs_1_00_nc_maxPt_PY;   //!
   TBranch        *b_Bs_1_00_nc_maxPt_PZ;   //!
   TBranch        *b_Bs_1_00_IT;   //!
   TBranch        *b_Bs_1_50_cc_mult;   //!
   TBranch        *b_Bs_1_50_cc_sPT;   //!
   TBranch        *b_Bs_1_50_cc_vPT;   //!
   TBranch        *b_Bs_1_50_cc_PX;   //!
   TBranch        *b_Bs_1_50_cc_PY;   //!
   TBranch        *b_Bs_1_50_cc_PZ;   //!
   TBranch        *b_Bs_1_50_cc_asy_P;   //!
   TBranch        *b_Bs_1_50_cc_asy_PT;   //!
   TBranch        *b_Bs_1_50_cc_asy_PX;   //!
   TBranch        *b_Bs_1_50_cc_asy_PY;   //!
   TBranch        *b_Bs_1_50_cc_asy_PZ;   //!
   TBranch        *b_Bs_1_50_cc_deltaEta;   //!
   TBranch        *b_Bs_1_50_cc_deltaPhi;   //!
   TBranch        *b_Bs_1_50_cc_IT;   //!
   TBranch        *b_Bs_1_50_cc_maxPt_Q;   //!
   TBranch        *b_Bs_1_50_cc_maxPt_PT;   //!
   TBranch        *b_Bs_1_50_cc_maxPt_PX;   //!
   TBranch        *b_Bs_1_50_cc_maxPt_PY;   //!
   TBranch        *b_Bs_1_50_cc_maxPt_PZ;   //!
   TBranch        *b_Bs_1_50_cc_maxPt_PE;   //!
   TBranch        *b_Bs_1_50_nc_mult;   //!
   TBranch        *b_Bs_1_50_nc_sPT;   //!
   TBranch        *b_Bs_1_50_nc_vPT;   //!
   TBranch        *b_Bs_1_50_nc_PX;   //!
   TBranch        *b_Bs_1_50_nc_PY;   //!
   TBranch        *b_Bs_1_50_nc_PZ;   //!
   TBranch        *b_Bs_1_50_nc_asy_P;   //!
   TBranch        *b_Bs_1_50_nc_asy_PT;   //!
   TBranch        *b_Bs_1_50_nc_asy_PX;   //!
   TBranch        *b_Bs_1_50_nc_asy_PY;   //!
   TBranch        *b_Bs_1_50_nc_asy_PZ;   //!
   TBranch        *b_Bs_1_50_nc_deltaEta;   //!
   TBranch        *b_Bs_1_50_nc_deltaPhi;   //!
   TBranch        *b_Bs_1_50_nc_IT;   //!
   TBranch        *b_Bs_1_50_nc_maxPt_PT;   //!
   TBranch        *b_Bs_1_50_nc_maxPt_PX;   //!
   TBranch        *b_Bs_1_50_nc_maxPt_PY;   //!
   TBranch        *b_Bs_1_50_nc_maxPt_PZ;   //!
   TBranch        *b_Bs_1_50_IT;   //!
   TBranch        *b_Bs_2_00_cc_mult;   //!
   TBranch        *b_Bs_2_00_cc_sPT;   //!
   TBranch        *b_Bs_2_00_cc_vPT;   //!
   TBranch        *b_Bs_2_00_cc_PX;   //!
   TBranch        *b_Bs_2_00_cc_PY;   //!
   TBranch        *b_Bs_2_00_cc_PZ;   //!
   TBranch        *b_Bs_2_00_cc_asy_P;   //!
   TBranch        *b_Bs_2_00_cc_asy_PT;   //!
   TBranch        *b_Bs_2_00_cc_asy_PX;   //!
   TBranch        *b_Bs_2_00_cc_asy_PY;   //!
   TBranch        *b_Bs_2_00_cc_asy_PZ;   //!
   TBranch        *b_Bs_2_00_cc_deltaEta;   //!
   TBranch        *b_Bs_2_00_cc_deltaPhi;   //!
   TBranch        *b_Bs_2_00_cc_IT;   //!
   TBranch        *b_Bs_2_00_cc_maxPt_Q;   //!
   TBranch        *b_Bs_2_00_cc_maxPt_PT;   //!
   TBranch        *b_Bs_2_00_cc_maxPt_PX;   //!
   TBranch        *b_Bs_2_00_cc_maxPt_PY;   //!
   TBranch        *b_Bs_2_00_cc_maxPt_PZ;   //!
   TBranch        *b_Bs_2_00_cc_maxPt_PE;   //!
   TBranch        *b_Bs_2_00_nc_mult;   //!
   TBranch        *b_Bs_2_00_nc_sPT;   //!
   TBranch        *b_Bs_2_00_nc_vPT;   //!
   TBranch        *b_Bs_2_00_nc_PX;   //!
   TBranch        *b_Bs_2_00_nc_PY;   //!
   TBranch        *b_Bs_2_00_nc_PZ;   //!
   TBranch        *b_Bs_2_00_nc_asy_P;   //!
   TBranch        *b_Bs_2_00_nc_asy_PT;   //!
   TBranch        *b_Bs_2_00_nc_asy_PX;   //!
   TBranch        *b_Bs_2_00_nc_asy_PY;   //!
   TBranch        *b_Bs_2_00_nc_asy_PZ;   //!
   TBranch        *b_Bs_2_00_nc_deltaEta;   //!
   TBranch        *b_Bs_2_00_nc_deltaPhi;   //!
   TBranch        *b_Bs_2_00_nc_IT;   //!
   TBranch        *b_Bs_2_00_nc_maxPt_PT;   //!
   TBranch        *b_Bs_2_00_nc_maxPt_PX;   //!
   TBranch        *b_Bs_2_00_nc_maxPt_PY;   //!
   TBranch        *b_Bs_2_00_nc_maxPt_PZ;   //!
   TBranch        *b_Bs_2_00_IT;   //!
   TBranch        *b_Bs_TRUEID;   //!
   TBranch        *b_Bs_TRUEP_E;   //!
   TBranch        *b_Bs_TRUEP_X;   //!
   TBranch        *b_Bs_TRUEP_Y;   //!
   TBranch        *b_Bs_TRUEP_Z;   //!
   TBranch        *b_Bs_TRUEPT;   //!
   TBranch        *b_Bs_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Bs_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Bs_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Bs_TRUEENDVERTEX_X;   //!
   TBranch        *b_Bs_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Bs_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Bs_TRUEISSTABLE;   //!
   TBranch        *b_Bs_TRUETAU;   //!
   TBranch        *b_Bs_Nu_TRUEID;   //!
   TBranch        *b_Bs_Nu_TRUEP_E;   //!
   TBranch        *b_Bs_Nu_TRUEP_X;   //!
   TBranch        *b_Bs_Nu_TRUEP_Y;   //!
   TBranch        *b_Bs_Nu_TRUEP_Z;   //!
   TBranch        *b_Bs_L0Global_Dec;   //!
   TBranch        *b_Bs_L0Global_TIS;   //!
   TBranch        *b_Bs_L0Global_TOS;   //!
   TBranch        *b_Bs_Hlt1Global_Dec;   //!
   TBranch        *b_Bs_Hlt1Global_TIS;   //!
   TBranch        *b_Bs_Hlt1Global_TOS;   //!
   TBranch        *b_Bs_Hlt1Phys_Dec;   //!
   TBranch        *b_Bs_Hlt1Phys_TIS;   //!
   TBranch        *b_Bs_Hlt1Phys_TOS;   //!
   TBranch        *b_Bs_Hlt2Global_Dec;   //!
   TBranch        *b_Bs_Hlt2Global_TIS;   //!
   TBranch        *b_Bs_Hlt2Global_TOS;   //!
   TBranch        *b_Bs_Hlt2Phys_Dec;   //!
   TBranch        *b_Bs_Hlt2Phys_TIS;   //!
   TBranch        *b_Bs_Hlt2Phys_TOS;   //!
   TBranch        *b_Bs_L0MuonDecision_Dec;   //!
   TBranch        *b_Bs_L0MuonDecision_TIS;   //!
   TBranch        *b_Bs_L0MuonDecision_TOS;   //!
   TBranch        *b_Bs_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Bs_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Bs_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Bs_L0HadronDecision_Dec;   //!
   TBranch        *b_Bs_L0HadronDecision_TIS;   //!
   TBranch        *b_Bs_L0HadronDecision_TOS;   //!
   TBranch        *b_Bs_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_Bs_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_Bs_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_Bs_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Bs_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Bs_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Bs_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2MuTrackDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2MuTrackDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2MuTrackDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2SingleMuonDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2SingleMuonDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2SingleMuonDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2SingleMuonLowPTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2SingleMuonLowPTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2SingleMuonLowPTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2CharmHadD2HHHDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2CharmHadD2HHHDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2CharmHadD2HHHDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2DiMuonZDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2DiMuonZDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2DiMuonZDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedHeavyDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedHeavyDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2TriMuonDetachedDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2TriMuonDetachedDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2TriMuonDetachedDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2TriMuonTauDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2TriMuonTauDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2TriMuonTauDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_Bs_Hlt2B2HHLTUnbiasedDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2B2HHLTUnbiasedDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2B2HHLTUnbiasedDecision_TOS;   //!
   TBranch        *b_Ds_ENDVERTEX_X;   //!
   TBranch        *b_Ds_ENDVERTEX_Y;   //!
   TBranch        *b_Ds_ENDVERTEX_Z;   //!
   TBranch        *b_Ds_ENDVERTEX_XERR;   //!
   TBranch        *b_Ds_ENDVERTEX_YERR;   //!
   TBranch        *b_Ds_ENDVERTEX_ZERR;   //!
   TBranch        *b_Ds_ENDVERTEX_CHI2;   //!
   TBranch        *b_Ds_ENDVERTEX_NDOF;   //!
   TBranch        *b_Ds_ENDVERTEX_COV_;   //!
   TBranch        *b_Ds_OWNPV_X;   //!
   TBranch        *b_Ds_OWNPV_Y;   //!
   TBranch        *b_Ds_OWNPV_Z;   //!
   TBranch        *b_Ds_OWNPV_XERR;   //!
   TBranch        *b_Ds_OWNPV_YERR;   //!
   TBranch        *b_Ds_OWNPV_ZERR;   //!
   TBranch        *b_Ds_OWNPV_CHI2;   //!
   TBranch        *b_Ds_OWNPV_NDOF;   //!
   TBranch        *b_Ds_OWNPV_COV_;   //!
   TBranch        *b_Ds_IP_OWNPV;   //!
   TBranch        *b_Ds_IPCHI2_OWNPV;   //!
   TBranch        *b_Ds_FD_OWNPV;   //!
   TBranch        *b_Ds_FDCHI2_OWNPV;   //!
   TBranch        *b_Ds_DIRA_OWNPV;   //!
   TBranch        *b_Ds_ORIVX_X;   //!
   TBranch        *b_Ds_ORIVX_Y;   //!
   TBranch        *b_Ds_ORIVX_Z;   //!
   TBranch        *b_Ds_ORIVX_XERR;   //!
   TBranch        *b_Ds_ORIVX_YERR;   //!
   TBranch        *b_Ds_ORIVX_ZERR;   //!
   TBranch        *b_Ds_ORIVX_CHI2;   //!
   TBranch        *b_Ds_ORIVX_NDOF;   //!
   TBranch        *b_Ds_ORIVX_COV_;   //!
   TBranch        *b_Ds_FD_ORIVX;   //!
   TBranch        *b_Ds_FDCHI2_ORIVX;   //!
   TBranch        *b_Ds_DIRA_ORIVX;   //!
   TBranch        *b_Ds_P;   //!
   TBranch        *b_Ds_PT;   //!
   TBranch        *b_Ds_PE;   //!
   TBranch        *b_Ds_PX;   //!
   TBranch        *b_Ds_PY;   //!
   TBranch        *b_Ds_PZ;   //!
   TBranch        *b_Ds_MM;   //!
   TBranch        *b_Ds_MMERR;   //!
   TBranch        *b_Ds_M;   //!
   TBranch        *b_Ds_BKGCAT;   //!
   TBranch        *b_Ds_TRUEID;   //!
   TBranch        *b_Ds_MC_MOTHER_ID;   //!
   TBranch        *b_Ds_MC_MOTHER_KEY;   //!
   TBranch        *b_Ds_MC_GD_MOTHER_ID;   //!
   TBranch        *b_Ds_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_Ds_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_Ds_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_Ds_TRUEP_E;   //!
   TBranch        *b_Ds_TRUEP_X;   //!
   TBranch        *b_Ds_TRUEP_Y;   //!
   TBranch        *b_Ds_TRUEP_Z;   //!
   TBranch        *b_Ds_TRUEPT;   //!
   TBranch        *b_Ds_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Ds_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Ds_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Ds_TRUEENDVERTEX_X;   //!
   TBranch        *b_Ds_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Ds_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Ds_TRUEISSTABLE;   //!
   TBranch        *b_Ds_TRUETAU;   //!
   TBranch        *b_Ds_Reconstructible;   //!
   TBranch        *b_Ds_Reconstructed;   //!
   TBranch        *b_Ds_ProtoParticles;   //!
   TBranch        *b_Ds_PP_PX;   //!
   TBranch        *b_Ds_PP_PY;   //!
   TBranch        *b_Ds_PP_PZ;   //!
   TBranch        *b_Ds_PP_Weight;   //!
   TBranch        *b_Ds_PP_tr_pchi2;   //!
   TBranch        *b_Ds_PP_DLLe;   //!
   TBranch        *b_Ds_PP_DLLk;   //!
   TBranch        *b_Ds_PP_DLLp;   //!
   TBranch        *b_Ds_PP_DLLmu;   //!
   TBranch        *b_Ds_ID;   //!
   TBranch        *b_Ds_TAU;   //!
   TBranch        *b_Ds_TAUERR;   //!
   TBranch        *b_Ds_TAUCHI2;   //!
   TBranch        *b_Ds_X;   //!
   TBranch        *b_Ds_Y;   //!
   TBranch        *b_kaon_m_OWNPV_X;   //!
   TBranch        *b_kaon_m_OWNPV_Y;   //!
   TBranch        *b_kaon_m_OWNPV_Z;   //!
   TBranch        *b_kaon_m_OWNPV_XERR;   //!
   TBranch        *b_kaon_m_OWNPV_YERR;   //!
   TBranch        *b_kaon_m_OWNPV_ZERR;   //!
   TBranch        *b_kaon_m_OWNPV_CHI2;   //!
   TBranch        *b_kaon_m_OWNPV_NDOF;   //!
   TBranch        *b_kaon_m_OWNPV_COV_;   //!
   TBranch        *b_kaon_m_IP_OWNPV;   //!
   TBranch        *b_kaon_m_IPCHI2_OWNPV;   //!
   TBranch        *b_kaon_m_ORIVX_X;   //!
   TBranch        *b_kaon_m_ORIVX_Y;   //!
   TBranch        *b_kaon_m_ORIVX_Z;   //!
   TBranch        *b_kaon_m_ORIVX_XERR;   //!
   TBranch        *b_kaon_m_ORIVX_YERR;   //!
   TBranch        *b_kaon_m_ORIVX_ZERR;   //!
   TBranch        *b_kaon_m_ORIVX_CHI2;   //!
   TBranch        *b_kaon_m_ORIVX_NDOF;   //!
   TBranch        *b_kaon_m_ORIVX_COV_;   //!
   TBranch        *b_kaon_m_P;   //!
   TBranch        *b_kaon_m_PT;   //!
   TBranch        *b_kaon_m_PE;   //!
   TBranch        *b_kaon_m_PX;   //!
   TBranch        *b_kaon_m_PY;   //!
   TBranch        *b_kaon_m_PZ;   //!
   TBranch        *b_kaon_m_M;   //!
   TBranch        *b_kaon_m_TRUEID;   //!
   TBranch        *b_kaon_m_MC_MOTHER_ID;   //!
   TBranch        *b_kaon_m_MC_MOTHER_KEY;   //!
   TBranch        *b_kaon_m_MC_GD_MOTHER_ID;   //!
   TBranch        *b_kaon_m_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_kaon_m_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_kaon_m_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_kaon_m_TRUEP_E;   //!
   TBranch        *b_kaon_m_TRUEP_X;   //!
   TBranch        *b_kaon_m_TRUEP_Y;   //!
   TBranch        *b_kaon_m_TRUEP_Z;   //!
   TBranch        *b_kaon_m_TRUEPT;   //!
   TBranch        *b_kaon_m_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_kaon_m_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_kaon_m_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_kaon_m_TRUEENDVERTEX_X;   //!
   TBranch        *b_kaon_m_TRUEENDVERTEX_Y;   //!
   TBranch        *b_kaon_m_TRUEENDVERTEX_Z;   //!
   TBranch        *b_kaon_m_TRUEISSTABLE;   //!
   TBranch        *b_kaon_m_TRUETAU;   //!
   TBranch        *b_kaon_m_Reconstructible;   //!
   TBranch        *b_kaon_m_Reconstructed;   //!
   TBranch        *b_kaon_m_ProtoParticles;   //!
   TBranch        *b_kaon_m_PP_PX;   //!
   TBranch        *b_kaon_m_PP_PY;   //!
   TBranch        *b_kaon_m_PP_PZ;   //!
   TBranch        *b_kaon_m_PP_Weight;   //!
   TBranch        *b_kaon_m_PP_tr_pchi2;   //!
   TBranch        *b_kaon_m_PP_DLLe;   //!
   TBranch        *b_kaon_m_PP_DLLk;   //!
   TBranch        *b_kaon_m_PP_DLLp;   //!
   TBranch        *b_kaon_m_PP_DLLmu;   //!
   TBranch        *b_kaon_m_ID;   //!
   TBranch        *b_kaon_m_CombDLLMu;   //!
   TBranch        *b_kaon_m_ProbNNmu;   //!
   TBranch        *b_kaon_m_ProbNNghost;   //!
   TBranch        *b_kaon_m_InMuonAcc;   //!
   TBranch        *b_kaon_m_MuonDist2;   //!
   TBranch        *b_kaon_m_regionInM2;   //!
   TBranch        *b_kaon_m_hasMuon;   //!
   TBranch        *b_kaon_m_isMuon;   //!
   TBranch        *b_kaon_m_isMuonLoose;   //!
   TBranch        *b_kaon_m_NShared;   //!
   TBranch        *b_kaon_m_MuonLLmu;   //!
   TBranch        *b_kaon_m_MuonLLbg;   //!
   TBranch        *b_kaon_m_isMuonFromProto;   //!
   TBranch        *b_kaon_m_RICHDLLe;   //!
   TBranch        *b_kaon_m_RICHDLLmu;   //!
   TBranch        *b_kaon_m_RICHDLLpi;   //!
   TBranch        *b_kaon_m_RICHDLLK;   //!
   TBranch        *b_kaon_m_RICHDLLp;   //!
   TBranch        *b_kaon_m_RICHDLLbt;   //!
   TBranch        *b_kaon_m_RICHBestID;   //!
   TBranch        *b_kaon_m_RICHThreshold;   //!
   TBranch        *b_kaon_m_RICHThresholdEl;   //!
   TBranch        *b_kaon_m_RICHThresholdMu;   //!
   TBranch        *b_kaon_m_RICHThresholdPi;   //!
   TBranch        *b_kaon_m_RICHThresholdKa;   //!
   TBranch        *b_kaon_m_RICHThresholdPr;   //!
   TBranch        *b_kaon_m_RICHAerogelUsed;   //!
   TBranch        *b_kaon_m_RICH1GasUsed;   //!
   TBranch        *b_kaon_m_RICH2GasUsed;   //!
   TBranch        *b_kaon_m_TRACK_Eta;   //!
   TBranch        *b_kaon_m_TRACK_Phi;   //!
   TBranch        *b_kaon_m_Aerogel_X;   //!
   TBranch        *b_kaon_m_Aerogel_Y;   //!
   TBranch        *b_kaon_m_Aerogel_Z;   //!
   TBranch        *b_kaon_m_Aerogel_Rho;   //!
   TBranch        *b_kaon_m_Aerogel_Phi;   //!
   TBranch        *b_kaon_m_Rich1Gas_X;   //!
   TBranch        *b_kaon_m_Rich1Gas_Y;   //!
   TBranch        *b_kaon_m_Rich1Gas_Z;   //!
   TBranch        *b_kaon_m_Rich1Gas_Rho;   //!
   TBranch        *b_kaon_m_Rich1Gas_Phi;   //!
   TBranch        *b_kaon_m_Rich2Gas_X;   //!
   TBranch        *b_kaon_m_Rich2Gas_Y;   //!
   TBranch        *b_kaon_m_Rich2Gas_Z;   //!
   TBranch        *b_kaon_m_Rich2Gas_Rho;   //!
   TBranch        *b_kaon_m_Rich2Gas_Phi;   //!
   TBranch        *b_kaon_m_TRACK_Type;   //!
   TBranch        *b_kaon_m_TRACK_Key;   //!
   TBranch        *b_kaon_m_TRACK_CHI2NDOF;   //!
   TBranch        *b_kaon_m_TRACK_PCHI2;   //!
   TBranch        *b_kaon_m_TRACK_MatchCHI2;   //!
   TBranch        *b_kaon_m_TRACK_GhostProb;   //!
   TBranch        *b_kaon_m_TRACK_CloneDist;   //!
   TBranch        *b_kaon_m_TRACK_Likelihood;   //!
   TBranch        *b_kaon_m_X;   //!
   TBranch        *b_kaon_m_Y;   //!
   TBranch        *b_kaon_m_MIPCHI2DV_PV;   //!
   TBranch        *b_kaon_m_0_40_cc_mult;   //!
   TBranch        *b_kaon_m_0_40_cc_sPT;   //!
   TBranch        *b_kaon_m_0_40_cc_vPT;   //!
   TBranch        *b_kaon_m_0_40_cc_PX;   //!
   TBranch        *b_kaon_m_0_40_cc_PY;   //!
   TBranch        *b_kaon_m_0_40_cc_PZ;   //!
   TBranch        *b_kaon_m_0_40_cc_asy_P;   //!
   TBranch        *b_kaon_m_0_40_cc_asy_PT;   //!
   TBranch        *b_kaon_m_0_40_cc_asy_PX;   //!
   TBranch        *b_kaon_m_0_40_cc_asy_PY;   //!
   TBranch        *b_kaon_m_0_40_cc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_40_cc_deltaEta;   //!
   TBranch        *b_kaon_m_0_40_cc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_40_cc_IT;   //!
   TBranch        *b_kaon_m_0_40_cc_maxPt_Q;   //!
   TBranch        *b_kaon_m_0_40_cc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_40_cc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_40_cc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_40_cc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_40_cc_maxPt_PE;   //!
   TBranch        *b_kaon_m_0_40_nc_mult;   //!
   TBranch        *b_kaon_m_0_40_nc_sPT;   //!
   TBranch        *b_kaon_m_0_40_nc_vPT;   //!
   TBranch        *b_kaon_m_0_40_nc_PX;   //!
   TBranch        *b_kaon_m_0_40_nc_PY;   //!
   TBranch        *b_kaon_m_0_40_nc_PZ;   //!
   TBranch        *b_kaon_m_0_40_nc_asy_P;   //!
   TBranch        *b_kaon_m_0_40_nc_asy_PT;   //!
   TBranch        *b_kaon_m_0_40_nc_asy_PX;   //!
   TBranch        *b_kaon_m_0_40_nc_asy_PY;   //!
   TBranch        *b_kaon_m_0_40_nc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_40_nc_deltaEta;   //!
   TBranch        *b_kaon_m_0_40_nc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_40_nc_IT;   //!
   TBranch        *b_kaon_m_0_40_nc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_40_nc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_40_nc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_40_nc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_40_IT;   //!
   TBranch        *b_kaon_m_0_50_cc_mult;   //!
   TBranch        *b_kaon_m_0_50_cc_sPT;   //!
   TBranch        *b_kaon_m_0_50_cc_vPT;   //!
   TBranch        *b_kaon_m_0_50_cc_PX;   //!
   TBranch        *b_kaon_m_0_50_cc_PY;   //!
   TBranch        *b_kaon_m_0_50_cc_PZ;   //!
   TBranch        *b_kaon_m_0_50_cc_asy_P;   //!
   TBranch        *b_kaon_m_0_50_cc_asy_PT;   //!
   TBranch        *b_kaon_m_0_50_cc_asy_PX;   //!
   TBranch        *b_kaon_m_0_50_cc_asy_PY;   //!
   TBranch        *b_kaon_m_0_50_cc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_50_cc_deltaEta;   //!
   TBranch        *b_kaon_m_0_50_cc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_50_cc_IT;   //!
   TBranch        *b_kaon_m_0_50_cc_maxPt_Q;   //!
   TBranch        *b_kaon_m_0_50_cc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_50_cc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_50_cc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_50_cc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_50_cc_maxPt_PE;   //!
   TBranch        *b_kaon_m_0_50_nc_mult;   //!
   TBranch        *b_kaon_m_0_50_nc_sPT;   //!
   TBranch        *b_kaon_m_0_50_nc_vPT;   //!
   TBranch        *b_kaon_m_0_50_nc_PX;   //!
   TBranch        *b_kaon_m_0_50_nc_PY;   //!
   TBranch        *b_kaon_m_0_50_nc_PZ;   //!
   TBranch        *b_kaon_m_0_50_nc_asy_P;   //!
   TBranch        *b_kaon_m_0_50_nc_asy_PT;   //!
   TBranch        *b_kaon_m_0_50_nc_asy_PX;   //!
   TBranch        *b_kaon_m_0_50_nc_asy_PY;   //!
   TBranch        *b_kaon_m_0_50_nc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_50_nc_deltaEta;   //!
   TBranch        *b_kaon_m_0_50_nc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_50_nc_IT;   //!
   TBranch        *b_kaon_m_0_50_nc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_50_nc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_50_nc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_50_nc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_50_IT;   //!
   TBranch        *b_kaon_m_0_60_cc_mult;   //!
   TBranch        *b_kaon_m_0_60_cc_sPT;   //!
   TBranch        *b_kaon_m_0_60_cc_vPT;   //!
   TBranch        *b_kaon_m_0_60_cc_PX;   //!
   TBranch        *b_kaon_m_0_60_cc_PY;   //!
   TBranch        *b_kaon_m_0_60_cc_PZ;   //!
   TBranch        *b_kaon_m_0_60_cc_asy_P;   //!
   TBranch        *b_kaon_m_0_60_cc_asy_PT;   //!
   TBranch        *b_kaon_m_0_60_cc_asy_PX;   //!
   TBranch        *b_kaon_m_0_60_cc_asy_PY;   //!
   TBranch        *b_kaon_m_0_60_cc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_60_cc_deltaEta;   //!
   TBranch        *b_kaon_m_0_60_cc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_60_cc_IT;   //!
   TBranch        *b_kaon_m_0_60_cc_maxPt_Q;   //!
   TBranch        *b_kaon_m_0_60_cc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_60_cc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_60_cc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_60_cc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_60_cc_maxPt_PE;   //!
   TBranch        *b_kaon_m_0_60_nc_mult;   //!
   TBranch        *b_kaon_m_0_60_nc_sPT;   //!
   TBranch        *b_kaon_m_0_60_nc_vPT;   //!
   TBranch        *b_kaon_m_0_60_nc_PX;   //!
   TBranch        *b_kaon_m_0_60_nc_PY;   //!
   TBranch        *b_kaon_m_0_60_nc_PZ;   //!
   TBranch        *b_kaon_m_0_60_nc_asy_P;   //!
   TBranch        *b_kaon_m_0_60_nc_asy_PT;   //!
   TBranch        *b_kaon_m_0_60_nc_asy_PX;   //!
   TBranch        *b_kaon_m_0_60_nc_asy_PY;   //!
   TBranch        *b_kaon_m_0_60_nc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_60_nc_deltaEta;   //!
   TBranch        *b_kaon_m_0_60_nc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_60_nc_IT;   //!
   TBranch        *b_kaon_m_0_60_nc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_60_nc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_60_nc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_60_nc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_60_IT;   //!
   TBranch        *b_kaon_m_0_70_cc_mult;   //!
   TBranch        *b_kaon_m_0_70_cc_sPT;   //!
   TBranch        *b_kaon_m_0_70_cc_vPT;   //!
   TBranch        *b_kaon_m_0_70_cc_PX;   //!
   TBranch        *b_kaon_m_0_70_cc_PY;   //!
   TBranch        *b_kaon_m_0_70_cc_PZ;   //!
   TBranch        *b_kaon_m_0_70_cc_asy_P;   //!
   TBranch        *b_kaon_m_0_70_cc_asy_PT;   //!
   TBranch        *b_kaon_m_0_70_cc_asy_PX;   //!
   TBranch        *b_kaon_m_0_70_cc_asy_PY;   //!
   TBranch        *b_kaon_m_0_70_cc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_70_cc_deltaEta;   //!
   TBranch        *b_kaon_m_0_70_cc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_70_cc_IT;   //!
   TBranch        *b_kaon_m_0_70_cc_maxPt_Q;   //!
   TBranch        *b_kaon_m_0_70_cc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_70_cc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_70_cc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_70_cc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_70_cc_maxPt_PE;   //!
   TBranch        *b_kaon_m_0_70_nc_mult;   //!
   TBranch        *b_kaon_m_0_70_nc_sPT;   //!
   TBranch        *b_kaon_m_0_70_nc_vPT;   //!
   TBranch        *b_kaon_m_0_70_nc_PX;   //!
   TBranch        *b_kaon_m_0_70_nc_PY;   //!
   TBranch        *b_kaon_m_0_70_nc_PZ;   //!
   TBranch        *b_kaon_m_0_70_nc_asy_P;   //!
   TBranch        *b_kaon_m_0_70_nc_asy_PT;   //!
   TBranch        *b_kaon_m_0_70_nc_asy_PX;   //!
   TBranch        *b_kaon_m_0_70_nc_asy_PY;   //!
   TBranch        *b_kaon_m_0_70_nc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_70_nc_deltaEta;   //!
   TBranch        *b_kaon_m_0_70_nc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_70_nc_IT;   //!
   TBranch        *b_kaon_m_0_70_nc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_70_nc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_70_nc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_70_nc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_70_IT;   //!
   TBranch        *b_kaon_m_0_80_cc_mult;   //!
   TBranch        *b_kaon_m_0_80_cc_sPT;   //!
   TBranch        *b_kaon_m_0_80_cc_vPT;   //!
   TBranch        *b_kaon_m_0_80_cc_PX;   //!
   TBranch        *b_kaon_m_0_80_cc_PY;   //!
   TBranch        *b_kaon_m_0_80_cc_PZ;   //!
   TBranch        *b_kaon_m_0_80_cc_asy_P;   //!
   TBranch        *b_kaon_m_0_80_cc_asy_PT;   //!
   TBranch        *b_kaon_m_0_80_cc_asy_PX;   //!
   TBranch        *b_kaon_m_0_80_cc_asy_PY;   //!
   TBranch        *b_kaon_m_0_80_cc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_80_cc_deltaEta;   //!
   TBranch        *b_kaon_m_0_80_cc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_80_cc_IT;   //!
   TBranch        *b_kaon_m_0_80_cc_maxPt_Q;   //!
   TBranch        *b_kaon_m_0_80_cc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_80_cc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_80_cc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_80_cc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_80_cc_maxPt_PE;   //!
   TBranch        *b_kaon_m_0_80_nc_mult;   //!
   TBranch        *b_kaon_m_0_80_nc_sPT;   //!
   TBranch        *b_kaon_m_0_80_nc_vPT;   //!
   TBranch        *b_kaon_m_0_80_nc_PX;   //!
   TBranch        *b_kaon_m_0_80_nc_PY;   //!
   TBranch        *b_kaon_m_0_80_nc_PZ;   //!
   TBranch        *b_kaon_m_0_80_nc_asy_P;   //!
   TBranch        *b_kaon_m_0_80_nc_asy_PT;   //!
   TBranch        *b_kaon_m_0_80_nc_asy_PX;   //!
   TBranch        *b_kaon_m_0_80_nc_asy_PY;   //!
   TBranch        *b_kaon_m_0_80_nc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_80_nc_deltaEta;   //!
   TBranch        *b_kaon_m_0_80_nc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_80_nc_IT;   //!
   TBranch        *b_kaon_m_0_80_nc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_80_nc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_80_nc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_80_nc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_80_IT;   //!
   TBranch        *b_kaon_m_0_90_cc_mult;   //!
   TBranch        *b_kaon_m_0_90_cc_sPT;   //!
   TBranch        *b_kaon_m_0_90_cc_vPT;   //!
   TBranch        *b_kaon_m_0_90_cc_PX;   //!
   TBranch        *b_kaon_m_0_90_cc_PY;   //!
   TBranch        *b_kaon_m_0_90_cc_PZ;   //!
   TBranch        *b_kaon_m_0_90_cc_asy_P;   //!
   TBranch        *b_kaon_m_0_90_cc_asy_PT;   //!
   TBranch        *b_kaon_m_0_90_cc_asy_PX;   //!
   TBranch        *b_kaon_m_0_90_cc_asy_PY;   //!
   TBranch        *b_kaon_m_0_90_cc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_90_cc_deltaEta;   //!
   TBranch        *b_kaon_m_0_90_cc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_90_cc_IT;   //!
   TBranch        *b_kaon_m_0_90_cc_maxPt_Q;   //!
   TBranch        *b_kaon_m_0_90_cc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_90_cc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_90_cc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_90_cc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_90_cc_maxPt_PE;   //!
   TBranch        *b_kaon_m_0_90_nc_mult;   //!
   TBranch        *b_kaon_m_0_90_nc_sPT;   //!
   TBranch        *b_kaon_m_0_90_nc_vPT;   //!
   TBranch        *b_kaon_m_0_90_nc_PX;   //!
   TBranch        *b_kaon_m_0_90_nc_PY;   //!
   TBranch        *b_kaon_m_0_90_nc_PZ;   //!
   TBranch        *b_kaon_m_0_90_nc_asy_P;   //!
   TBranch        *b_kaon_m_0_90_nc_asy_PT;   //!
   TBranch        *b_kaon_m_0_90_nc_asy_PX;   //!
   TBranch        *b_kaon_m_0_90_nc_asy_PY;   //!
   TBranch        *b_kaon_m_0_90_nc_asy_PZ;   //!
   TBranch        *b_kaon_m_0_90_nc_deltaEta;   //!
   TBranch        *b_kaon_m_0_90_nc_deltaPhi;   //!
   TBranch        *b_kaon_m_0_90_nc_IT;   //!
   TBranch        *b_kaon_m_0_90_nc_maxPt_PT;   //!
   TBranch        *b_kaon_m_0_90_nc_maxPt_PX;   //!
   TBranch        *b_kaon_m_0_90_nc_maxPt_PY;   //!
   TBranch        *b_kaon_m_0_90_nc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_0_90_IT;   //!
   TBranch        *b_kaon_m_1_00_cc_mult;   //!
   TBranch        *b_kaon_m_1_00_cc_sPT;   //!
   TBranch        *b_kaon_m_1_00_cc_vPT;   //!
   TBranch        *b_kaon_m_1_00_cc_PX;   //!
   TBranch        *b_kaon_m_1_00_cc_PY;   //!
   TBranch        *b_kaon_m_1_00_cc_PZ;   //!
   TBranch        *b_kaon_m_1_00_cc_asy_P;   //!
   TBranch        *b_kaon_m_1_00_cc_asy_PT;   //!
   TBranch        *b_kaon_m_1_00_cc_asy_PX;   //!
   TBranch        *b_kaon_m_1_00_cc_asy_PY;   //!
   TBranch        *b_kaon_m_1_00_cc_asy_PZ;   //!
   TBranch        *b_kaon_m_1_00_cc_deltaEta;   //!
   TBranch        *b_kaon_m_1_00_cc_deltaPhi;   //!
   TBranch        *b_kaon_m_1_00_cc_IT;   //!
   TBranch        *b_kaon_m_1_00_cc_maxPt_Q;   //!
   TBranch        *b_kaon_m_1_00_cc_maxPt_PT;   //!
   TBranch        *b_kaon_m_1_00_cc_maxPt_PX;   //!
   TBranch        *b_kaon_m_1_00_cc_maxPt_PY;   //!
   TBranch        *b_kaon_m_1_00_cc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_1_00_cc_maxPt_PE;   //!
   TBranch        *b_kaon_m_1_00_nc_mult;   //!
   TBranch        *b_kaon_m_1_00_nc_sPT;   //!
   TBranch        *b_kaon_m_1_00_nc_vPT;   //!
   TBranch        *b_kaon_m_1_00_nc_PX;   //!
   TBranch        *b_kaon_m_1_00_nc_PY;   //!
   TBranch        *b_kaon_m_1_00_nc_PZ;   //!
   TBranch        *b_kaon_m_1_00_nc_asy_P;   //!
   TBranch        *b_kaon_m_1_00_nc_asy_PT;   //!
   TBranch        *b_kaon_m_1_00_nc_asy_PX;   //!
   TBranch        *b_kaon_m_1_00_nc_asy_PY;   //!
   TBranch        *b_kaon_m_1_00_nc_asy_PZ;   //!
   TBranch        *b_kaon_m_1_00_nc_deltaEta;   //!
   TBranch        *b_kaon_m_1_00_nc_deltaPhi;   //!
   TBranch        *b_kaon_m_1_00_nc_IT;   //!
   TBranch        *b_kaon_m_1_00_nc_maxPt_PT;   //!
   TBranch        *b_kaon_m_1_00_nc_maxPt_PX;   //!
   TBranch        *b_kaon_m_1_00_nc_maxPt_PY;   //!
   TBranch        *b_kaon_m_1_00_nc_maxPt_PZ;   //!
   TBranch        *b_kaon_m_1_00_IT;   //!
   TBranch        *b_kaon_p_OWNPV_X;   //!
   TBranch        *b_kaon_p_OWNPV_Y;   //!
   TBranch        *b_kaon_p_OWNPV_Z;   //!
   TBranch        *b_kaon_p_OWNPV_XERR;   //!
   TBranch        *b_kaon_p_OWNPV_YERR;   //!
   TBranch        *b_kaon_p_OWNPV_ZERR;   //!
   TBranch        *b_kaon_p_OWNPV_CHI2;   //!
   TBranch        *b_kaon_p_OWNPV_NDOF;   //!
   TBranch        *b_kaon_p_OWNPV_COV_;   //!
   TBranch        *b_kaon_p_IP_OWNPV;   //!
   TBranch        *b_kaon_p_IPCHI2_OWNPV;   //!
   TBranch        *b_kaon_p_ORIVX_X;   //!
   TBranch        *b_kaon_p_ORIVX_Y;   //!
   TBranch        *b_kaon_p_ORIVX_Z;   //!
   TBranch        *b_kaon_p_ORIVX_XERR;   //!
   TBranch        *b_kaon_p_ORIVX_YERR;   //!
   TBranch        *b_kaon_p_ORIVX_ZERR;   //!
   TBranch        *b_kaon_p_ORIVX_CHI2;   //!
   TBranch        *b_kaon_p_ORIVX_NDOF;   //!
   TBranch        *b_kaon_p_ORIVX_COV_;   //!
   TBranch        *b_kaon_p_P;   //!
   TBranch        *b_kaon_p_PT;   //!
   TBranch        *b_kaon_p_PE;   //!
   TBranch        *b_kaon_p_PX;   //!
   TBranch        *b_kaon_p_PY;   //!
   TBranch        *b_kaon_p_PZ;   //!
   TBranch        *b_kaon_p_M;   //!
   TBranch        *b_kaon_p_TRUEID;   //!
   TBranch        *b_kaon_p_MC_MOTHER_ID;   //!
   TBranch        *b_kaon_p_MC_MOTHER_KEY;   //!
   TBranch        *b_kaon_p_MC_GD_MOTHER_ID;   //!
   TBranch        *b_kaon_p_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_kaon_p_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_kaon_p_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_kaon_p_TRUEP_E;   //!
   TBranch        *b_kaon_p_TRUEP_X;   //!
   TBranch        *b_kaon_p_TRUEP_Y;   //!
   TBranch        *b_kaon_p_TRUEP_Z;   //!
   TBranch        *b_kaon_p_TRUEPT;   //!
   TBranch        *b_kaon_p_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_kaon_p_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_kaon_p_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_kaon_p_TRUEENDVERTEX_X;   //!
   TBranch        *b_kaon_p_TRUEENDVERTEX_Y;   //!
   TBranch        *b_kaon_p_TRUEENDVERTEX_Z;   //!
   TBranch        *b_kaon_p_TRUEISSTABLE;   //!
   TBranch        *b_kaon_p_TRUETAU;   //!
   TBranch        *b_kaon_p_Reconstructible;   //!
   TBranch        *b_kaon_p_Reconstructed;   //!
   TBranch        *b_kaon_p_ProtoParticles;   //!
   TBranch        *b_kaon_p_PP_PX;   //!
   TBranch        *b_kaon_p_PP_PY;   //!
   TBranch        *b_kaon_p_PP_PZ;   //!
   TBranch        *b_kaon_p_PP_Weight;   //!
   TBranch        *b_kaon_p_PP_tr_pchi2;   //!
   TBranch        *b_kaon_p_PP_DLLe;   //!
   TBranch        *b_kaon_p_PP_DLLk;   //!
   TBranch        *b_kaon_p_PP_DLLp;   //!
   TBranch        *b_kaon_p_PP_DLLmu;   //!
   TBranch        *b_kaon_p_ID;   //!
   TBranch        *b_kaon_p_CombDLLMu;   //!
   TBranch        *b_kaon_p_ProbNNmu;   //!
   TBranch        *b_kaon_p_ProbNNghost;   //!
   TBranch        *b_kaon_p_InMuonAcc;   //!
   TBranch        *b_kaon_p_MuonDist2;   //!
   TBranch        *b_kaon_p_regionInM2;   //!
   TBranch        *b_kaon_p_hasMuon;   //!
   TBranch        *b_kaon_p_isMuon;   //!
   TBranch        *b_kaon_p_isMuonLoose;   //!
   TBranch        *b_kaon_p_NShared;   //!
   TBranch        *b_kaon_p_MuonLLmu;   //!
   TBranch        *b_kaon_p_MuonLLbg;   //!
   TBranch        *b_kaon_p_isMuonFromProto;   //!
   TBranch        *b_kaon_p_RICHDLLe;   //!
   TBranch        *b_kaon_p_RICHDLLmu;   //!
   TBranch        *b_kaon_p_RICHDLLpi;   //!
   TBranch        *b_kaon_p_RICHDLLK;   //!
   TBranch        *b_kaon_p_RICHDLLp;   //!
   TBranch        *b_kaon_p_RICHDLLbt;   //!
   TBranch        *b_kaon_p_RICHBestID;   //!
   TBranch        *b_kaon_p_RICHThreshold;   //!
   TBranch        *b_kaon_p_RICHThresholdEl;   //!
   TBranch        *b_kaon_p_RICHThresholdMu;   //!
   TBranch        *b_kaon_p_RICHThresholdPi;   //!
   TBranch        *b_kaon_p_RICHThresholdKa;   //!
   TBranch        *b_kaon_p_RICHThresholdPr;   //!
   TBranch        *b_kaon_p_RICHAerogelUsed;   //!
   TBranch        *b_kaon_p_RICH1GasUsed;   //!
   TBranch        *b_kaon_p_RICH2GasUsed;   //!
   TBranch        *b_kaon_p_TRACK_Eta;   //!
   TBranch        *b_kaon_p_TRACK_Phi;   //!
   TBranch        *b_kaon_p_Aerogel_X;   //!
   TBranch        *b_kaon_p_Aerogel_Y;   //!
   TBranch        *b_kaon_p_Aerogel_Z;   //!
   TBranch        *b_kaon_p_Aerogel_Rho;   //!
   TBranch        *b_kaon_p_Aerogel_Phi;   //!
   TBranch        *b_kaon_p_Rich1Gas_X;   //!
   TBranch        *b_kaon_p_Rich1Gas_Y;   //!
   TBranch        *b_kaon_p_Rich1Gas_Z;   //!
   TBranch        *b_kaon_p_Rich1Gas_Rho;   //!
   TBranch        *b_kaon_p_Rich1Gas_Phi;   //!
   TBranch        *b_kaon_p_Rich2Gas_X;   //!
   TBranch        *b_kaon_p_Rich2Gas_Y;   //!
   TBranch        *b_kaon_p_Rich2Gas_Z;   //!
   TBranch        *b_kaon_p_Rich2Gas_Rho;   //!
   TBranch        *b_kaon_p_Rich2Gas_Phi;   //!
   TBranch        *b_kaon_p_TRACK_Type;   //!
   TBranch        *b_kaon_p_TRACK_Key;   //!
   TBranch        *b_kaon_p_TRACK_CHI2NDOF;   //!
   TBranch        *b_kaon_p_TRACK_PCHI2;   //!
   TBranch        *b_kaon_p_TRACK_MatchCHI2;   //!
   TBranch        *b_kaon_p_TRACK_GhostProb;   //!
   TBranch        *b_kaon_p_TRACK_CloneDist;   //!
   TBranch        *b_kaon_p_TRACK_Likelihood;   //!
   TBranch        *b_kaon_p_X;   //!
   TBranch        *b_kaon_p_Y;   //!
   TBranch        *b_pi_p_OWNPV_X;   //!
   TBranch        *b_pi_p_OWNPV_Y;   //!
   TBranch        *b_pi_p_OWNPV_Z;   //!
   TBranch        *b_pi_p_OWNPV_XERR;   //!
   TBranch        *b_pi_p_OWNPV_YERR;   //!
   TBranch        *b_pi_p_OWNPV_ZERR;   //!
   TBranch        *b_pi_p_OWNPV_CHI2;   //!
   TBranch        *b_pi_p_OWNPV_NDOF;   //!
   TBranch        *b_pi_p_OWNPV_COV_;   //!
   TBranch        *b_pi_p_IP_OWNPV;   //!
   TBranch        *b_pi_p_IPCHI2_OWNPV;   //!
   TBranch        *b_pi_p_ORIVX_X;   //!
   TBranch        *b_pi_p_ORIVX_Y;   //!
   TBranch        *b_pi_p_ORIVX_Z;   //!
   TBranch        *b_pi_p_ORIVX_XERR;   //!
   TBranch        *b_pi_p_ORIVX_YERR;   //!
   TBranch        *b_pi_p_ORIVX_ZERR;   //!
   TBranch        *b_pi_p_ORIVX_CHI2;   //!
   TBranch        *b_pi_p_ORIVX_NDOF;   //!
   TBranch        *b_pi_p_ORIVX_COV_;   //!
   TBranch        *b_pi_p_P;   //!
   TBranch        *b_pi_p_PT;   //!
   TBranch        *b_pi_p_PE;   //!
   TBranch        *b_pi_p_PX;   //!
   TBranch        *b_pi_p_PY;   //!
   TBranch        *b_pi_p_PZ;   //!
   TBranch        *b_pi_p_M;   //!
   TBranch        *b_pi_p_TRUEID;   //!
   TBranch        *b_pi_p_MC_MOTHER_ID;   //!
   TBranch        *b_pi_p_MC_MOTHER_KEY;   //!
   TBranch        *b_pi_p_MC_GD_MOTHER_ID;   //!
   TBranch        *b_pi_p_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_pi_p_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_pi_p_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_pi_p_TRUEP_E;   //!
   TBranch        *b_pi_p_TRUEP_X;   //!
   TBranch        *b_pi_p_TRUEP_Y;   //!
   TBranch        *b_pi_p_TRUEP_Z;   //!
   TBranch        *b_pi_p_TRUEPT;   //!
   TBranch        *b_pi_p_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_pi_p_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_pi_p_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_pi_p_TRUEENDVERTEX_X;   //!
   TBranch        *b_pi_p_TRUEENDVERTEX_Y;   //!
   TBranch        *b_pi_p_TRUEENDVERTEX_Z;   //!
   TBranch        *b_pi_p_TRUEISSTABLE;   //!
   TBranch        *b_pi_p_TRUETAU;   //!
   TBranch        *b_pi_p_Reconstructible;   //!
   TBranch        *b_pi_p_Reconstructed;   //!
   TBranch        *b_pi_p_ProtoParticles;   //!
   TBranch        *b_pi_p_PP_PX;   //!
   TBranch        *b_pi_p_PP_PY;   //!
   TBranch        *b_pi_p_PP_PZ;   //!
   TBranch        *b_pi_p_PP_Weight;   //!
   TBranch        *b_pi_p_PP_tr_pchi2;   //!
   TBranch        *b_pi_p_PP_DLLe;   //!
   TBranch        *b_pi_p_PP_DLLk;   //!
   TBranch        *b_pi_p_PP_DLLp;   //!
   TBranch        *b_pi_p_PP_DLLmu;   //!
   TBranch        *b_pi_p_ID;   //!
   TBranch        *b_pi_p_CombDLLMu;   //!
   TBranch        *b_pi_p_ProbNNmu;   //!
   TBranch        *b_pi_p_ProbNNghost;   //!
   TBranch        *b_pi_p_InMuonAcc;   //!
   TBranch        *b_pi_p_MuonDist2;   //!
   TBranch        *b_pi_p_regionInM2;   //!
   TBranch        *b_pi_p_hasMuon;   //!
   TBranch        *b_pi_p_isMuon;   //!
   TBranch        *b_pi_p_isMuonLoose;   //!
   TBranch        *b_pi_p_NShared;   //!
   TBranch        *b_pi_p_MuonLLmu;   //!
   TBranch        *b_pi_p_MuonLLbg;   //!
   TBranch        *b_pi_p_isMuonFromProto;   //!
   TBranch        *b_pi_p_RICHDLLe;   //!
   TBranch        *b_pi_p_RICHDLLmu;   //!
   TBranch        *b_pi_p_RICHDLLpi;   //!
   TBranch        *b_pi_p_RICHDLLK;   //!
   TBranch        *b_pi_p_RICHDLLp;   //!
   TBranch        *b_pi_p_RICHDLLbt;   //!
   TBranch        *b_pi_p_RICHBestID;   //!
   TBranch        *b_pi_p_RICHThreshold;   //!
   TBranch        *b_pi_p_RICHThresholdEl;   //!
   TBranch        *b_pi_p_RICHThresholdMu;   //!
   TBranch        *b_pi_p_RICHThresholdPi;   //!
   TBranch        *b_pi_p_RICHThresholdKa;   //!
   TBranch        *b_pi_p_RICHThresholdPr;   //!
   TBranch        *b_pi_p_RICHAerogelUsed;   //!
   TBranch        *b_pi_p_RICH1GasUsed;   //!
   TBranch        *b_pi_p_RICH2GasUsed;   //!
   TBranch        *b_pi_p_TRACK_Eta;   //!
   TBranch        *b_pi_p_TRACK_Phi;   //!
   TBranch        *b_pi_p_Aerogel_X;   //!
   TBranch        *b_pi_p_Aerogel_Y;   //!
   TBranch        *b_pi_p_Aerogel_Z;   //!
   TBranch        *b_pi_p_Aerogel_Rho;   //!
   TBranch        *b_pi_p_Aerogel_Phi;   //!
   TBranch        *b_pi_p_Rich1Gas_X;   //!
   TBranch        *b_pi_p_Rich1Gas_Y;   //!
   TBranch        *b_pi_p_Rich1Gas_Z;   //!
   TBranch        *b_pi_p_Rich1Gas_Rho;   //!
   TBranch        *b_pi_p_Rich1Gas_Phi;   //!
   TBranch        *b_pi_p_Rich2Gas_X;   //!
   TBranch        *b_pi_p_Rich2Gas_Y;   //!
   TBranch        *b_pi_p_Rich2Gas_Z;   //!
   TBranch        *b_pi_p_Rich2Gas_Rho;   //!
   TBranch        *b_pi_p_Rich2Gas_Phi;   //!
   TBranch        *b_pi_p_TRACK_Type;   //!
   TBranch        *b_pi_p_TRACK_Key;   //!
   TBranch        *b_pi_p_TRACK_CHI2NDOF;   //!
   TBranch        *b_pi_p_TRACK_PCHI2;   //!
   TBranch        *b_pi_p_TRACK_MatchCHI2;   //!
   TBranch        *b_pi_p_TRACK_GhostProb;   //!
   TBranch        *b_pi_p_TRACK_CloneDist;   //!
   TBranch        *b_pi_p_TRACK_Likelihood;   //!
   TBranch        *b_pi_p_X;   //!
   TBranch        *b_pi_p_Y;   //!
   TBranch        *b_muon_p_OWNPV_X;   //!
   TBranch        *b_muon_p_OWNPV_Y;   //!
   TBranch        *b_muon_p_OWNPV_Z;   //!
   TBranch        *b_muon_p_OWNPV_XERR;   //!
   TBranch        *b_muon_p_OWNPV_YERR;   //!
   TBranch        *b_muon_p_OWNPV_ZERR;   //!
   TBranch        *b_muon_p_OWNPV_CHI2;   //!
   TBranch        *b_muon_p_OWNPV_NDOF;   //!
   TBranch        *b_muon_p_OWNPV_COV_;   //!
   TBranch        *b_muon_p_IP_OWNPV;   //!
   TBranch        *b_muon_p_IPCHI2_OWNPV;   //!
   TBranch        *b_muon_p_ORIVX_X;   //!
   TBranch        *b_muon_p_ORIVX_Y;   //!
   TBranch        *b_muon_p_ORIVX_Z;   //!
   TBranch        *b_muon_p_ORIVX_XERR;   //!
   TBranch        *b_muon_p_ORIVX_YERR;   //!
   TBranch        *b_muon_p_ORIVX_ZERR;   //!
   TBranch        *b_muon_p_ORIVX_CHI2;   //!
   TBranch        *b_muon_p_ORIVX_NDOF;   //!
   TBranch        *b_muon_p_ORIVX_COV_;   //!
   TBranch        *b_muon_p_P;   //!
   TBranch        *b_muon_p_PT;   //!
   TBranch        *b_muon_p_PE;   //!
   TBranch        *b_muon_p_PX;   //!
   TBranch        *b_muon_p_PY;   //!
   TBranch        *b_muon_p_PZ;   //!
   TBranch        *b_muon_p_M;   //!
   TBranch        *b_muon_p_TRUEID;   //!
   TBranch        *b_muon_p_MC_MOTHER_ID;   //!
   TBranch        *b_muon_p_MC_MOTHER_KEY;   //!
   TBranch        *b_muon_p_MC_GD_MOTHER_ID;   //!
   TBranch        *b_muon_p_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_muon_p_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_muon_p_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_muon_p_TRUEP_E;   //!
   TBranch        *b_muon_p_TRUEP_X;   //!
   TBranch        *b_muon_p_TRUEP_Y;   //!
   TBranch        *b_muon_p_TRUEP_Z;   //!
   TBranch        *b_muon_p_TRUEPT;   //!
   TBranch        *b_muon_p_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_muon_p_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_muon_p_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_muon_p_TRUEENDVERTEX_X;   //!
   TBranch        *b_muon_p_TRUEENDVERTEX_Y;   //!
   TBranch        *b_muon_p_TRUEENDVERTEX_Z;   //!
   TBranch        *b_muon_p_TRUEISSTABLE;   //!
   TBranch        *b_muon_p_TRUETAU;   //!
   TBranch        *b_muon_p_Reconstructible;   //!
   TBranch        *b_muon_p_Reconstructed;   //!
   TBranch        *b_muon_p_ProtoParticles;   //!
   TBranch        *b_muon_p_PP_PX;   //!
   TBranch        *b_muon_p_PP_PY;   //!
   TBranch        *b_muon_p_PP_PZ;   //!
   TBranch        *b_muon_p_PP_Weight;   //!
   TBranch        *b_muon_p_PP_tr_pchi2;   //!
   TBranch        *b_muon_p_PP_DLLe;   //!
   TBranch        *b_muon_p_PP_DLLk;   //!
   TBranch        *b_muon_p_PP_DLLp;   //!
   TBranch        *b_muon_p_PP_DLLmu;   //!
   TBranch        *b_muon_p_ID;   //!
   TBranch        *b_muon_p_CombDLLMu;   //!
   TBranch        *b_muon_p_ProbNNmu;   //!
   TBranch        *b_muon_p_ProbNNghost;   //!
   TBranch        *b_muon_p_InMuonAcc;   //!
   TBranch        *b_muon_p_MuonDist2;   //!
   TBranch        *b_muon_p_regionInM2;   //!
   TBranch        *b_muon_p_hasMuon;   //!
   TBranch        *b_muon_p_isMuon;   //!
   TBranch        *b_muon_p_isMuonLoose;   //!
   TBranch        *b_muon_p_NShared;   //!
   TBranch        *b_muon_p_MuonLLmu;   //!
   TBranch        *b_muon_p_MuonLLbg;   //!
   TBranch        *b_muon_p_isMuonFromProto;   //!
   TBranch        *b_muon_p_RICHDLLe;   //!
   TBranch        *b_muon_p_RICHDLLmu;   //!
   TBranch        *b_muon_p_RICHDLLpi;   //!
   TBranch        *b_muon_p_RICHDLLK;   //!
   TBranch        *b_muon_p_RICHDLLp;   //!
   TBranch        *b_muon_p_RICHDLLbt;   //!
   TBranch        *b_muon_p_RICHBestID;   //!
   TBranch        *b_muon_p_RICHThreshold;   //!
   TBranch        *b_muon_p_RICHThresholdEl;   //!
   TBranch        *b_muon_p_RICHThresholdMu;   //!
   TBranch        *b_muon_p_RICHThresholdPi;   //!
   TBranch        *b_muon_p_RICHThresholdKa;   //!
   TBranch        *b_muon_p_RICHThresholdPr;   //!
   TBranch        *b_muon_p_RICHAerogelUsed;   //!
   TBranch        *b_muon_p_RICH1GasUsed;   //!
   TBranch        *b_muon_p_RICH2GasUsed;   //!
   TBranch        *b_muon_p_TRACK_Eta;   //!
   TBranch        *b_muon_p_TRACK_Phi;   //!
   TBranch        *b_muon_p_Aerogel_X;   //!
   TBranch        *b_muon_p_Aerogel_Y;   //!
   TBranch        *b_muon_p_Aerogel_Z;   //!
   TBranch        *b_muon_p_Aerogel_Rho;   //!
   TBranch        *b_muon_p_Aerogel_Phi;   //!
   TBranch        *b_muon_p_Rich1Gas_X;   //!
   TBranch        *b_muon_p_Rich1Gas_Y;   //!
   TBranch        *b_muon_p_Rich1Gas_Z;   //!
   TBranch        *b_muon_p_Rich1Gas_Rho;   //!
   TBranch        *b_muon_p_Rich1Gas_Phi;   //!
   TBranch        *b_muon_p_Rich2Gas_X;   //!
   TBranch        *b_muon_p_Rich2Gas_Y;   //!
   TBranch        *b_muon_p_Rich2Gas_Z;   //!
   TBranch        *b_muon_p_Rich2Gas_Rho;   //!
   TBranch        *b_muon_p_Rich2Gas_Phi;   //!
   TBranch        *b_muon_p_TRACK_Type;   //!
   TBranch        *b_muon_p_TRACK_Key;   //!
   TBranch        *b_muon_p_TRACK_CHI2NDOF;   //!
   TBranch        *b_muon_p_TRACK_PCHI2;   //!
   TBranch        *b_muon_p_TRACK_MatchCHI2;   //!
   TBranch        *b_muon_p_TRACK_GhostProb;   //!
   TBranch        *b_muon_p_TRACK_CloneDist;   //!
   TBranch        *b_muon_p_TRACK_Likelihood;   //!
   TBranch        *b_muon_p_X;   //!
   TBranch        *b_muon_p_Y;   //!
   TBranch        *b_muon_p_MIPCHI2DV_PV;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_GpsYear;   //!
   TBranch        *b_GpsMonth;   //!
   TBranch        *b_GpsDay;   //!
   TBranch        *b_GpsHour;   //!
   TBranch        *b_GpsMinute;   //!
   TBranch        *b_GpsSecond;   //!
   TBranch        *b_TriggerType;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLT1TCK;   //!
   TBranch        *b_HLT2TCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_Collisions;   //!
   TBranch        *b_ProcessType;   //!
   TBranch        *b_HeaviestQuark;   //!
   TBranch        *b_HeaviestQuarkInEvent;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!

   quantiles(TTree *tree=0);
   virtual ~quantiles();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef quantiles_cxx
quantiles::quantiles(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/tmp/DTT_Bs2DsMuNu_66.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/tmp/DTT_Bs2DsMuNu_66.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/tmp/DTT_Bs2DsMuNu_66.root:/Bs2DsMuNuTuple");
      dir->GetObject("DecayTree",tree);

   }
   Init(tree);
}

quantiles::~quantiles()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t quantiles::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t quantiles::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void quantiles::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Bs_IsoTrack_Charge_UpStream", &Bs_IsoTrack_Charge_UpStream, &b_Bs_IsoTrack_Charge_UpStream);
   fChain->SetBranchAddress("Bs_iso_muon_UpStream", &Bs_iso_muon_UpStream, &b_Bs_iso_muon_UpStream);
   fChain->SetBranchAddress("Bs_iso_Kaon_UpStream", &Bs_iso_Kaon_UpStream, &b_Bs_iso_Kaon_UpStream);
   fChain->SetBranchAddress("Bs_iso_SumBDT_UpStream", &Bs_iso_SumBDT_UpStream, &b_Bs_iso_SumBDT_UpStream);
   fChain->SetBranchAddress("Bs_iso_MinBDT_UpStream", &Bs_iso_MinBDT_UpStream, &b_Bs_iso_MinBDT_UpStream);
   fChain->SetBranchAddress("Bs_ConeIso_UpStream", &Bs_ConeIso_UpStream, &b_Bs_ConeIso_UpStream);
   fChain->SetBranchAddress("Bs_MuMu_M_iso_UpStream", &Bs_MuMu_M_iso_UpStream, &b_Bs_MuMu_M_iso_UpStream);
   fChain->SetBranchAddress("Bs_Kh_M_iso_UpStream", &Bs_Kh_M_iso_UpStream, &b_Bs_Kh_M_iso_UpStream);
   fChain->SetBranchAddress("Bs_iso_muon_VELO", &Bs_iso_muon_VELO, &b_Bs_iso_muon_VELO);
   fChain->SetBranchAddress("Bs_iso_Kaon_VELO", &Bs_iso_Kaon_VELO, &b_Bs_iso_Kaon_VELO);
   fChain->SetBranchAddress("Bs_iso_SumBDT_VELO", &Bs_iso_SumBDT_VELO, &b_Bs_iso_SumBDT_VELO);
   fChain->SetBranchAddress("Bs_iso_MinBDT_VELO", &Bs_iso_MinBDT_VELO, &b_Bs_iso_MinBDT_VELO);
   fChain->SetBranchAddress("Bs_ENDVERTEX_X", &Bs_ENDVERTEX_X, &b_Bs_ENDVERTEX_X);
   fChain->SetBranchAddress("Bs_ENDVERTEX_Y", &Bs_ENDVERTEX_Y, &b_Bs_ENDVERTEX_Y);
   fChain->SetBranchAddress("Bs_ENDVERTEX_Z", &Bs_ENDVERTEX_Z, &b_Bs_ENDVERTEX_Z);
   fChain->SetBranchAddress("Bs_ENDVERTEX_XERR", &Bs_ENDVERTEX_XERR, &b_Bs_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Bs_ENDVERTEX_YERR", &Bs_ENDVERTEX_YERR, &b_Bs_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Bs_ENDVERTEX_ZERR", &Bs_ENDVERTEX_ZERR, &b_Bs_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Bs_ENDVERTEX_CHI2", &Bs_ENDVERTEX_CHI2, &b_Bs_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Bs_ENDVERTEX_NDOF", &Bs_ENDVERTEX_NDOF, &b_Bs_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Bs_ENDVERTEX_COV_", Bs_ENDVERTEX_COV_, &b_Bs_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Bs_OWNPV_X", &Bs_OWNPV_X, &b_Bs_OWNPV_X);
   fChain->SetBranchAddress("Bs_OWNPV_Y", &Bs_OWNPV_Y, &b_Bs_OWNPV_Y);
   fChain->SetBranchAddress("Bs_OWNPV_Z", &Bs_OWNPV_Z, &b_Bs_OWNPV_Z);
   fChain->SetBranchAddress("Bs_OWNPV_XERR", &Bs_OWNPV_XERR, &b_Bs_OWNPV_XERR);
   fChain->SetBranchAddress("Bs_OWNPV_YERR", &Bs_OWNPV_YERR, &b_Bs_OWNPV_YERR);
   fChain->SetBranchAddress("Bs_OWNPV_ZERR", &Bs_OWNPV_ZERR, &b_Bs_OWNPV_ZERR);
   fChain->SetBranchAddress("Bs_OWNPV_CHI2", &Bs_OWNPV_CHI2, &b_Bs_OWNPV_CHI2);
   fChain->SetBranchAddress("Bs_OWNPV_NDOF", &Bs_OWNPV_NDOF, &b_Bs_OWNPV_NDOF);
   fChain->SetBranchAddress("Bs_OWNPV_COV_", Bs_OWNPV_COV_, &b_Bs_OWNPV_COV_);
   fChain->SetBranchAddress("Bs_IP_OWNPV", &Bs_IP_OWNPV, &b_Bs_IP_OWNPV);
   fChain->SetBranchAddress("Bs_IPCHI2_OWNPV", &Bs_IPCHI2_OWNPV, &b_Bs_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Bs_FD_OWNPV", &Bs_FD_OWNPV, &b_Bs_FD_OWNPV);
   fChain->SetBranchAddress("Bs_FDCHI2_OWNPV", &Bs_FDCHI2_OWNPV, &b_Bs_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Bs_DIRA_OWNPV", &Bs_DIRA_OWNPV, &b_Bs_DIRA_OWNPV);
   fChain->SetBranchAddress("Bs_P", &Bs_P, &b_Bs_P);
   fChain->SetBranchAddress("Bs_PT", &Bs_PT, &b_Bs_PT);
   fChain->SetBranchAddress("Bs_PE", &Bs_PE, &b_Bs_PE);
   fChain->SetBranchAddress("Bs_PX", &Bs_PX, &b_Bs_PX);
   fChain->SetBranchAddress("Bs_PY", &Bs_PY, &b_Bs_PY);
   fChain->SetBranchAddress("Bs_PZ", &Bs_PZ, &b_Bs_PZ);
   fChain->SetBranchAddress("Bs_MM", &Bs_MM, &b_Bs_MM);
   fChain->SetBranchAddress("Bs_MMERR", &Bs_MMERR, &b_Bs_MMERR);
   fChain->SetBranchAddress("Bs_M", &Bs_M, &b_Bs_M);
   fChain->SetBranchAddress("Bs_BKGCAT", &Bs_BKGCAT, &b_Bs_BKGCAT);
   fChain->SetBranchAddress("Bs_ID", &Bs_ID, &b_Bs_ID);
   fChain->SetBranchAddress("Bs_TAU", &Bs_TAU, &b_Bs_TAU);
   fChain->SetBranchAddress("Bs_TAUERR", &Bs_TAUERR, &b_Bs_TAUERR);
   fChain->SetBranchAddress("Bs_TAUCHI2", &Bs_TAUCHI2, &b_Bs_TAUCHI2);
   fChain->SetBranchAddress("Bs_MCORR", &Bs_MCORR, &b_Bs_MCORR);
   fChain->SetBranchAddress("Bs_MCORRERR", &Bs_MCORRERR, &b_Bs_MCORRERR);
   fChain->SetBranchAddress("Bs_MCORRFULLERR", &Bs_MCORRFULLERR, &b_Bs_MCORRFULLERR);
   fChain->SetBranchAddress("Bs_Q2SOL1", &Bs_Q2SOL1, &b_Bs_Q2SOL1);
   fChain->SetBranchAddress("Bs_Q2SOL2", &Bs_Q2SOL2, &b_Bs_Q2SOL2);
   fChain->SetBranchAddress("Bs_X", &Bs_X, &b_Bs_X);
   fChain->SetBranchAddress("Bs_Y", &Bs_Y, &b_Bs_Y);
   fChain->SetBranchAddress("Bs_DOCA", &Bs_DOCA, &b_Bs_DOCA);
   fChain->SetBranchAddress("Bs_DTF_CHI2NDOF", &Bs_DTF_CHI2NDOF, &b_Bs_DTF_CHI2NDOF);
   fChain->SetBranchAddress("Bs_DTF_CTAUS", &Bs_DTF_CTAUS, &b_Bs_DTF_CTAUS);
   fChain->SetBranchAddress("Bs_DTF_TAU", &Bs_DTF_TAU, &b_Bs_DTF_TAU);
   fChain->SetBranchAddress("Bs_DsMuNu_TruthMatched", &Bs_DsMuNu_TruthMatched, &b_Bs_DsMuNu_TruthMatched);
   fChain->SetBranchAddress("Bs_ETA", &Bs_ETA, &b_Bs_ETA);
   fChain->SetBranchAddress("Bs_FD_CHI2_LOKI", &Bs_FD_CHI2_LOKI, &b_Bs_FD_CHI2_LOKI);
   fChain->SetBranchAddress("Bs_FD_S", &Bs_FD_S, &b_Bs_FD_S);
   fChain->SetBranchAddress("Bs_KMuNu_TruthMatched", &Bs_KMuNu_TruthMatched, &b_Bs_KMuNu_TruthMatched);
   fChain->SetBranchAddress("Bs_PHI", &Bs_PHI, &b_Bs_PHI);
   fChain->SetBranchAddress("Bs_VCHI2_LOKI", &Bs_VCHI2_LOKI, &b_Bs_VCHI2_LOKI);
   fChain->SetBranchAddress("Bs_Dsiso_IsoTrack_Charge_Long", &Bs_Dsiso_IsoTrack_Charge_Long, &b_Bs_Dsiso_IsoTrack_Charge_Long);
   fChain->SetBranchAddress("Bs_Dsiso_iso_muon_Long", &Bs_Dsiso_iso_muon_Long, &b_Bs_Dsiso_iso_muon_Long);
   fChain->SetBranchAddress("Bs_Dsiso_iso_Ds_Long", &Bs_Dsiso_iso_Ds_Long, &b_Bs_Dsiso_iso_Ds_Long);
   fChain->SetBranchAddress("Bs_Dsiso_iso_SumBDT_Long", &Bs_Dsiso_iso_SumBDT_Long, &b_Bs_Dsiso_iso_SumBDT_Long);
   fChain->SetBranchAddress("Bs_Dsiso_iso_MinBDT_Long", &Bs_Dsiso_iso_MinBDT_Long, &b_Bs_Dsiso_iso_MinBDT_Long);
   fChain->SetBranchAddress("Bs_Dsiso_ConeIso_Long", &Bs_Dsiso_ConeIso_Long, &b_Bs_Dsiso_ConeIso_Long);
   fChain->SetBranchAddress("Bs_Dsiso_MuMu_M_iso_Long", &Bs_Dsiso_MuMu_M_iso_Long, &b_Bs_Dsiso_MuMu_M_iso_Long);
   fChain->SetBranchAddress("Bs_Dsiso_Kh_M_iso_Long", &Bs_Dsiso_Kh_M_iso_Long, &b_Bs_Dsiso_Kh_M_iso_Long);
   fChain->SetBranchAddress("Bs_IsoTrack_Charge_Long", &Bs_IsoTrack_Charge_Long, &b_Bs_IsoTrack_Charge_Long);
   fChain->SetBranchAddress("Bs_iso_muon_Long", &Bs_iso_muon_Long, &b_Bs_iso_muon_Long);
   fChain->SetBranchAddress("Bs_iso_Kaon_Long", &Bs_iso_Kaon_Long, &b_Bs_iso_Kaon_Long);
   fChain->SetBranchAddress("Bs_iso_SumBDT_Long", &Bs_iso_SumBDT_Long, &b_Bs_iso_SumBDT_Long);
   fChain->SetBranchAddress("Bs_iso_MinBDT_Long", &Bs_iso_MinBDT_Long, &b_Bs_iso_MinBDT_Long);
   fChain->SetBranchAddress("Bs_ConeIso_Long", &Bs_ConeIso_Long, &b_Bs_ConeIso_Long);
   fChain->SetBranchAddress("Bs_MuMu_M_iso_Long", &Bs_MuMu_M_iso_Long, &b_Bs_MuMu_M_iso_Long);
   fChain->SetBranchAddress("Bs_Kh_M_iso_Long", &Bs_Kh_M_iso_Long, &b_Bs_Kh_M_iso_Long);
   fChain->SetBranchAddress("Bs_0.50_cc_mult", &Bs_0_50_cc_mult, &b_Bs_0_50_cc_mult);
   fChain->SetBranchAddress("Bs_0.50_cc_sPT", &Bs_0_50_cc_sPT, &b_Bs_0_50_cc_sPT);
   fChain->SetBranchAddress("Bs_0.50_cc_vPT", &Bs_0_50_cc_vPT, &b_Bs_0_50_cc_vPT);
   fChain->SetBranchAddress("Bs_0.50_cc_PX", &Bs_0_50_cc_PX, &b_Bs_0_50_cc_PX);
   fChain->SetBranchAddress("Bs_0.50_cc_PY", &Bs_0_50_cc_PY, &b_Bs_0_50_cc_PY);
   fChain->SetBranchAddress("Bs_0.50_cc_PZ", &Bs_0_50_cc_PZ, &b_Bs_0_50_cc_PZ);
   fChain->SetBranchAddress("Bs_0.50_cc_asy_P", &Bs_0_50_cc_asy_P, &b_Bs_0_50_cc_asy_P);
   fChain->SetBranchAddress("Bs_0.50_cc_asy_PT", &Bs_0_50_cc_asy_PT, &b_Bs_0_50_cc_asy_PT);
   fChain->SetBranchAddress("Bs_0.50_cc_asy_PX", &Bs_0_50_cc_asy_PX, &b_Bs_0_50_cc_asy_PX);
   fChain->SetBranchAddress("Bs_0.50_cc_asy_PY", &Bs_0_50_cc_asy_PY, &b_Bs_0_50_cc_asy_PY);
   fChain->SetBranchAddress("Bs_0.50_cc_asy_PZ", &Bs_0_50_cc_asy_PZ, &b_Bs_0_50_cc_asy_PZ);
   fChain->SetBranchAddress("Bs_0.50_cc_deltaEta", &Bs_0_50_cc_deltaEta, &b_Bs_0_50_cc_deltaEta);
   fChain->SetBranchAddress("Bs_0.50_cc_deltaPhi", &Bs_0_50_cc_deltaPhi, &b_Bs_0_50_cc_deltaPhi);
   fChain->SetBranchAddress("Bs_0.50_cc_IT", &Bs_0_50_cc_IT, &b_Bs_0_50_cc_IT);
   fChain->SetBranchAddress("Bs_0.50_cc_maxPt_Q", &Bs_0_50_cc_maxPt_Q, &b_Bs_0_50_cc_maxPt_Q);
   fChain->SetBranchAddress("Bs_0.50_cc_maxPt_PT", &Bs_0_50_cc_maxPt_PT, &b_Bs_0_50_cc_maxPt_PT);
   fChain->SetBranchAddress("Bs_0.50_cc_maxPt_PX", &Bs_0_50_cc_maxPt_PX, &b_Bs_0_50_cc_maxPt_PX);
   fChain->SetBranchAddress("Bs_0.50_cc_maxPt_PY", &Bs_0_50_cc_maxPt_PY, &b_Bs_0_50_cc_maxPt_PY);
   fChain->SetBranchAddress("Bs_0.50_cc_maxPt_PZ", &Bs_0_50_cc_maxPt_PZ, &b_Bs_0_50_cc_maxPt_PZ);
   fChain->SetBranchAddress("Bs_0.50_cc_maxPt_PE", &Bs_0_50_cc_maxPt_PE, &b_Bs_0_50_cc_maxPt_PE);
   fChain->SetBranchAddress("Bs_0.50_nc_mult", &Bs_0_50_nc_mult, &b_Bs_0_50_nc_mult);
   fChain->SetBranchAddress("Bs_0.50_nc_sPT", &Bs_0_50_nc_sPT, &b_Bs_0_50_nc_sPT);
   fChain->SetBranchAddress("Bs_0.50_nc_vPT", &Bs_0_50_nc_vPT, &b_Bs_0_50_nc_vPT);
   fChain->SetBranchAddress("Bs_0.50_nc_PX", &Bs_0_50_nc_PX, &b_Bs_0_50_nc_PX);
   fChain->SetBranchAddress("Bs_0.50_nc_PY", &Bs_0_50_nc_PY, &b_Bs_0_50_nc_PY);
   fChain->SetBranchAddress("Bs_0.50_nc_PZ", &Bs_0_50_nc_PZ, &b_Bs_0_50_nc_PZ);
   fChain->SetBranchAddress("Bs_0.50_nc_asy_P", &Bs_0_50_nc_asy_P, &b_Bs_0_50_nc_asy_P);
   fChain->SetBranchAddress("Bs_0.50_nc_asy_PT", &Bs_0_50_nc_asy_PT, &b_Bs_0_50_nc_asy_PT);
   fChain->SetBranchAddress("Bs_0.50_nc_asy_PX", &Bs_0_50_nc_asy_PX, &b_Bs_0_50_nc_asy_PX);
   fChain->SetBranchAddress("Bs_0.50_nc_asy_PY", &Bs_0_50_nc_asy_PY, &b_Bs_0_50_nc_asy_PY);
   fChain->SetBranchAddress("Bs_0.50_nc_asy_PZ", &Bs_0_50_nc_asy_PZ, &b_Bs_0_50_nc_asy_PZ);
   fChain->SetBranchAddress("Bs_0.50_nc_deltaEta", &Bs_0_50_nc_deltaEta, &b_Bs_0_50_nc_deltaEta);
   fChain->SetBranchAddress("Bs_0.50_nc_deltaPhi", &Bs_0_50_nc_deltaPhi, &b_Bs_0_50_nc_deltaPhi);
   fChain->SetBranchAddress("Bs_0.50_nc_IT", &Bs_0_50_nc_IT, &b_Bs_0_50_nc_IT);
   fChain->SetBranchAddress("Bs_0.50_nc_maxPt_PT", &Bs_0_50_nc_maxPt_PT, &b_Bs_0_50_nc_maxPt_PT);
   fChain->SetBranchAddress("Bs_0.50_nc_maxPt_PX", &Bs_0_50_nc_maxPt_PX, &b_Bs_0_50_nc_maxPt_PX);
   fChain->SetBranchAddress("Bs_0.50_nc_maxPt_PY", &Bs_0_50_nc_maxPt_PY, &b_Bs_0_50_nc_maxPt_PY);
   fChain->SetBranchAddress("Bs_0.50_nc_maxPt_PZ", &Bs_0_50_nc_maxPt_PZ, &b_Bs_0_50_nc_maxPt_PZ);
   fChain->SetBranchAddress("Bs_0.50_IT", &Bs_0_50_IT, &b_Bs_0_50_IT);
   fChain->SetBranchAddress("Bs_1.00_cc_mult", &Bs_1_00_cc_mult, &b_Bs_1_00_cc_mult);
   fChain->SetBranchAddress("Bs_1.00_cc_sPT", &Bs_1_00_cc_sPT, &b_Bs_1_00_cc_sPT);
   fChain->SetBranchAddress("Bs_1.00_cc_vPT", &Bs_1_00_cc_vPT, &b_Bs_1_00_cc_vPT);
   fChain->SetBranchAddress("Bs_1.00_cc_PX", &Bs_1_00_cc_PX, &b_Bs_1_00_cc_PX);
   fChain->SetBranchAddress("Bs_1.00_cc_PY", &Bs_1_00_cc_PY, &b_Bs_1_00_cc_PY);
   fChain->SetBranchAddress("Bs_1.00_cc_PZ", &Bs_1_00_cc_PZ, &b_Bs_1_00_cc_PZ);
   fChain->SetBranchAddress("Bs_1.00_cc_asy_P", &Bs_1_00_cc_asy_P, &b_Bs_1_00_cc_asy_P);
   fChain->SetBranchAddress("Bs_1.00_cc_asy_PT", &Bs_1_00_cc_asy_PT, &b_Bs_1_00_cc_asy_PT);
   fChain->SetBranchAddress("Bs_1.00_cc_asy_PX", &Bs_1_00_cc_asy_PX, &b_Bs_1_00_cc_asy_PX);
   fChain->SetBranchAddress("Bs_1.00_cc_asy_PY", &Bs_1_00_cc_asy_PY, &b_Bs_1_00_cc_asy_PY);
   fChain->SetBranchAddress("Bs_1.00_cc_asy_PZ", &Bs_1_00_cc_asy_PZ, &b_Bs_1_00_cc_asy_PZ);
   fChain->SetBranchAddress("Bs_1.00_cc_deltaEta", &Bs_1_00_cc_deltaEta, &b_Bs_1_00_cc_deltaEta);
   fChain->SetBranchAddress("Bs_1.00_cc_deltaPhi", &Bs_1_00_cc_deltaPhi, &b_Bs_1_00_cc_deltaPhi);
   fChain->SetBranchAddress("Bs_1.00_cc_IT", &Bs_1_00_cc_IT, &b_Bs_1_00_cc_IT);
   fChain->SetBranchAddress("Bs_1.00_cc_maxPt_Q", &Bs_1_00_cc_maxPt_Q, &b_Bs_1_00_cc_maxPt_Q);
   fChain->SetBranchAddress("Bs_1.00_cc_maxPt_PT", &Bs_1_00_cc_maxPt_PT, &b_Bs_1_00_cc_maxPt_PT);
   fChain->SetBranchAddress("Bs_1.00_cc_maxPt_PX", &Bs_1_00_cc_maxPt_PX, &b_Bs_1_00_cc_maxPt_PX);
   fChain->SetBranchAddress("Bs_1.00_cc_maxPt_PY", &Bs_1_00_cc_maxPt_PY, &b_Bs_1_00_cc_maxPt_PY);
   fChain->SetBranchAddress("Bs_1.00_cc_maxPt_PZ", &Bs_1_00_cc_maxPt_PZ, &b_Bs_1_00_cc_maxPt_PZ);
   fChain->SetBranchAddress("Bs_1.00_cc_maxPt_PE", &Bs_1_00_cc_maxPt_PE, &b_Bs_1_00_cc_maxPt_PE);
   fChain->SetBranchAddress("Bs_1.00_nc_mult", &Bs_1_00_nc_mult, &b_Bs_1_00_nc_mult);
   fChain->SetBranchAddress("Bs_1.00_nc_sPT", &Bs_1_00_nc_sPT, &b_Bs_1_00_nc_sPT);
   fChain->SetBranchAddress("Bs_1.00_nc_vPT", &Bs_1_00_nc_vPT, &b_Bs_1_00_nc_vPT);
   fChain->SetBranchAddress("Bs_1.00_nc_PX", &Bs_1_00_nc_PX, &b_Bs_1_00_nc_PX);
   fChain->SetBranchAddress("Bs_1.00_nc_PY", &Bs_1_00_nc_PY, &b_Bs_1_00_nc_PY);
   fChain->SetBranchAddress("Bs_1.00_nc_PZ", &Bs_1_00_nc_PZ, &b_Bs_1_00_nc_PZ);
   fChain->SetBranchAddress("Bs_1.00_nc_asy_P", &Bs_1_00_nc_asy_P, &b_Bs_1_00_nc_asy_P);
   fChain->SetBranchAddress("Bs_1.00_nc_asy_PT", &Bs_1_00_nc_asy_PT, &b_Bs_1_00_nc_asy_PT);
   fChain->SetBranchAddress("Bs_1.00_nc_asy_PX", &Bs_1_00_nc_asy_PX, &b_Bs_1_00_nc_asy_PX);
   fChain->SetBranchAddress("Bs_1.00_nc_asy_PY", &Bs_1_00_nc_asy_PY, &b_Bs_1_00_nc_asy_PY);
   fChain->SetBranchAddress("Bs_1.00_nc_asy_PZ", &Bs_1_00_nc_asy_PZ, &b_Bs_1_00_nc_asy_PZ);
   fChain->SetBranchAddress("Bs_1.00_nc_deltaEta", &Bs_1_00_nc_deltaEta, &b_Bs_1_00_nc_deltaEta);
   fChain->SetBranchAddress("Bs_1.00_nc_deltaPhi", &Bs_1_00_nc_deltaPhi, &b_Bs_1_00_nc_deltaPhi);
   fChain->SetBranchAddress("Bs_1.00_nc_IT", &Bs_1_00_nc_IT, &b_Bs_1_00_nc_IT);
   fChain->SetBranchAddress("Bs_1.00_nc_maxPt_PT", &Bs_1_00_nc_maxPt_PT, &b_Bs_1_00_nc_maxPt_PT);
   fChain->SetBranchAddress("Bs_1.00_nc_maxPt_PX", &Bs_1_00_nc_maxPt_PX, &b_Bs_1_00_nc_maxPt_PX);
   fChain->SetBranchAddress("Bs_1.00_nc_maxPt_PY", &Bs_1_00_nc_maxPt_PY, &b_Bs_1_00_nc_maxPt_PY);
   fChain->SetBranchAddress("Bs_1.00_nc_maxPt_PZ", &Bs_1_00_nc_maxPt_PZ, &b_Bs_1_00_nc_maxPt_PZ);
   fChain->SetBranchAddress("Bs_1.00_IT", &Bs_1_00_IT, &b_Bs_1_00_IT);
   fChain->SetBranchAddress("Bs_1.50_cc_mult", &Bs_1_50_cc_mult, &b_Bs_1_50_cc_mult);
   fChain->SetBranchAddress("Bs_1.50_cc_sPT", &Bs_1_50_cc_sPT, &b_Bs_1_50_cc_sPT);
   fChain->SetBranchAddress("Bs_1.50_cc_vPT", &Bs_1_50_cc_vPT, &b_Bs_1_50_cc_vPT);
   fChain->SetBranchAddress("Bs_1.50_cc_PX", &Bs_1_50_cc_PX, &b_Bs_1_50_cc_PX);
   fChain->SetBranchAddress("Bs_1.50_cc_PY", &Bs_1_50_cc_PY, &b_Bs_1_50_cc_PY);
   fChain->SetBranchAddress("Bs_1.50_cc_PZ", &Bs_1_50_cc_PZ, &b_Bs_1_50_cc_PZ);
   fChain->SetBranchAddress("Bs_1.50_cc_asy_P", &Bs_1_50_cc_asy_P, &b_Bs_1_50_cc_asy_P);
   fChain->SetBranchAddress("Bs_1.50_cc_asy_PT", &Bs_1_50_cc_asy_PT, &b_Bs_1_50_cc_asy_PT);
   fChain->SetBranchAddress("Bs_1.50_cc_asy_PX", &Bs_1_50_cc_asy_PX, &b_Bs_1_50_cc_asy_PX);
   fChain->SetBranchAddress("Bs_1.50_cc_asy_PY", &Bs_1_50_cc_asy_PY, &b_Bs_1_50_cc_asy_PY);
   fChain->SetBranchAddress("Bs_1.50_cc_asy_PZ", &Bs_1_50_cc_asy_PZ, &b_Bs_1_50_cc_asy_PZ);
   fChain->SetBranchAddress("Bs_1.50_cc_deltaEta", &Bs_1_50_cc_deltaEta, &b_Bs_1_50_cc_deltaEta);
   fChain->SetBranchAddress("Bs_1.50_cc_deltaPhi", &Bs_1_50_cc_deltaPhi, &b_Bs_1_50_cc_deltaPhi);
   fChain->SetBranchAddress("Bs_1.50_cc_IT", &Bs_1_50_cc_IT, &b_Bs_1_50_cc_IT);
   fChain->SetBranchAddress("Bs_1.50_cc_maxPt_Q", &Bs_1_50_cc_maxPt_Q, &b_Bs_1_50_cc_maxPt_Q);
   fChain->SetBranchAddress("Bs_1.50_cc_maxPt_PT", &Bs_1_50_cc_maxPt_PT, &b_Bs_1_50_cc_maxPt_PT);
   fChain->SetBranchAddress("Bs_1.50_cc_maxPt_PX", &Bs_1_50_cc_maxPt_PX, &b_Bs_1_50_cc_maxPt_PX);
   fChain->SetBranchAddress("Bs_1.50_cc_maxPt_PY", &Bs_1_50_cc_maxPt_PY, &b_Bs_1_50_cc_maxPt_PY);
   fChain->SetBranchAddress("Bs_1.50_cc_maxPt_PZ", &Bs_1_50_cc_maxPt_PZ, &b_Bs_1_50_cc_maxPt_PZ);
   fChain->SetBranchAddress("Bs_1.50_cc_maxPt_PE", &Bs_1_50_cc_maxPt_PE, &b_Bs_1_50_cc_maxPt_PE);
   fChain->SetBranchAddress("Bs_1.50_nc_mult", &Bs_1_50_nc_mult, &b_Bs_1_50_nc_mult);
   fChain->SetBranchAddress("Bs_1.50_nc_sPT", &Bs_1_50_nc_sPT, &b_Bs_1_50_nc_sPT);
   fChain->SetBranchAddress("Bs_1.50_nc_vPT", &Bs_1_50_nc_vPT, &b_Bs_1_50_nc_vPT);
   fChain->SetBranchAddress("Bs_1.50_nc_PX", &Bs_1_50_nc_PX, &b_Bs_1_50_nc_PX);
   fChain->SetBranchAddress("Bs_1.50_nc_PY", &Bs_1_50_nc_PY, &b_Bs_1_50_nc_PY);
   fChain->SetBranchAddress("Bs_1.50_nc_PZ", &Bs_1_50_nc_PZ, &b_Bs_1_50_nc_PZ);
   fChain->SetBranchAddress("Bs_1.50_nc_asy_P", &Bs_1_50_nc_asy_P, &b_Bs_1_50_nc_asy_P);
   fChain->SetBranchAddress("Bs_1.50_nc_asy_PT", &Bs_1_50_nc_asy_PT, &b_Bs_1_50_nc_asy_PT);
   fChain->SetBranchAddress("Bs_1.50_nc_asy_PX", &Bs_1_50_nc_asy_PX, &b_Bs_1_50_nc_asy_PX);
   fChain->SetBranchAddress("Bs_1.50_nc_asy_PY", &Bs_1_50_nc_asy_PY, &b_Bs_1_50_nc_asy_PY);
   fChain->SetBranchAddress("Bs_1.50_nc_asy_PZ", &Bs_1_50_nc_asy_PZ, &b_Bs_1_50_nc_asy_PZ);
   fChain->SetBranchAddress("Bs_1.50_nc_deltaEta", &Bs_1_50_nc_deltaEta, &b_Bs_1_50_nc_deltaEta);
   fChain->SetBranchAddress("Bs_1.50_nc_deltaPhi", &Bs_1_50_nc_deltaPhi, &b_Bs_1_50_nc_deltaPhi);
   fChain->SetBranchAddress("Bs_1.50_nc_IT", &Bs_1_50_nc_IT, &b_Bs_1_50_nc_IT);
   fChain->SetBranchAddress("Bs_1.50_nc_maxPt_PT", &Bs_1_50_nc_maxPt_PT, &b_Bs_1_50_nc_maxPt_PT);
   fChain->SetBranchAddress("Bs_1.50_nc_maxPt_PX", &Bs_1_50_nc_maxPt_PX, &b_Bs_1_50_nc_maxPt_PX);
   fChain->SetBranchAddress("Bs_1.50_nc_maxPt_PY", &Bs_1_50_nc_maxPt_PY, &b_Bs_1_50_nc_maxPt_PY);
   fChain->SetBranchAddress("Bs_1.50_nc_maxPt_PZ", &Bs_1_50_nc_maxPt_PZ, &b_Bs_1_50_nc_maxPt_PZ);
   fChain->SetBranchAddress("Bs_1.50_IT", &Bs_1_50_IT, &b_Bs_1_50_IT);
   fChain->SetBranchAddress("Bs_2.00_cc_mult", &Bs_2_00_cc_mult, &b_Bs_2_00_cc_mult);
   fChain->SetBranchAddress("Bs_2.00_cc_sPT", &Bs_2_00_cc_sPT, &b_Bs_2_00_cc_sPT);
   fChain->SetBranchAddress("Bs_2.00_cc_vPT", &Bs_2_00_cc_vPT, &b_Bs_2_00_cc_vPT);
   fChain->SetBranchAddress("Bs_2.00_cc_PX", &Bs_2_00_cc_PX, &b_Bs_2_00_cc_PX);
   fChain->SetBranchAddress("Bs_2.00_cc_PY", &Bs_2_00_cc_PY, &b_Bs_2_00_cc_PY);
   fChain->SetBranchAddress("Bs_2.00_cc_PZ", &Bs_2_00_cc_PZ, &b_Bs_2_00_cc_PZ);
   fChain->SetBranchAddress("Bs_2.00_cc_asy_P", &Bs_2_00_cc_asy_P, &b_Bs_2_00_cc_asy_P);
   fChain->SetBranchAddress("Bs_2.00_cc_asy_PT", &Bs_2_00_cc_asy_PT, &b_Bs_2_00_cc_asy_PT);
   fChain->SetBranchAddress("Bs_2.00_cc_asy_PX", &Bs_2_00_cc_asy_PX, &b_Bs_2_00_cc_asy_PX);
   fChain->SetBranchAddress("Bs_2.00_cc_asy_PY", &Bs_2_00_cc_asy_PY, &b_Bs_2_00_cc_asy_PY);
   fChain->SetBranchAddress("Bs_2.00_cc_asy_PZ", &Bs_2_00_cc_asy_PZ, &b_Bs_2_00_cc_asy_PZ);
   fChain->SetBranchAddress("Bs_2.00_cc_deltaEta", &Bs_2_00_cc_deltaEta, &b_Bs_2_00_cc_deltaEta);
   fChain->SetBranchAddress("Bs_2.00_cc_deltaPhi", &Bs_2_00_cc_deltaPhi, &b_Bs_2_00_cc_deltaPhi);
   fChain->SetBranchAddress("Bs_2.00_cc_IT", &Bs_2_00_cc_IT, &b_Bs_2_00_cc_IT);
   fChain->SetBranchAddress("Bs_2.00_cc_maxPt_Q", &Bs_2_00_cc_maxPt_Q, &b_Bs_2_00_cc_maxPt_Q);
   fChain->SetBranchAddress("Bs_2.00_cc_maxPt_PT", &Bs_2_00_cc_maxPt_PT, &b_Bs_2_00_cc_maxPt_PT);
   fChain->SetBranchAddress("Bs_2.00_cc_maxPt_PX", &Bs_2_00_cc_maxPt_PX, &b_Bs_2_00_cc_maxPt_PX);
   fChain->SetBranchAddress("Bs_2.00_cc_maxPt_PY", &Bs_2_00_cc_maxPt_PY, &b_Bs_2_00_cc_maxPt_PY);
   fChain->SetBranchAddress("Bs_2.00_cc_maxPt_PZ", &Bs_2_00_cc_maxPt_PZ, &b_Bs_2_00_cc_maxPt_PZ);
   fChain->SetBranchAddress("Bs_2.00_cc_maxPt_PE", &Bs_2_00_cc_maxPt_PE, &b_Bs_2_00_cc_maxPt_PE);
   fChain->SetBranchAddress("Bs_2.00_nc_mult", &Bs_2_00_nc_mult, &b_Bs_2_00_nc_mult);
   fChain->SetBranchAddress("Bs_2.00_nc_sPT", &Bs_2_00_nc_sPT, &b_Bs_2_00_nc_sPT);
   fChain->SetBranchAddress("Bs_2.00_nc_vPT", &Bs_2_00_nc_vPT, &b_Bs_2_00_nc_vPT);
   fChain->SetBranchAddress("Bs_2.00_nc_PX", &Bs_2_00_nc_PX, &b_Bs_2_00_nc_PX);
   fChain->SetBranchAddress("Bs_2.00_nc_PY", &Bs_2_00_nc_PY, &b_Bs_2_00_nc_PY);
   fChain->SetBranchAddress("Bs_2.00_nc_PZ", &Bs_2_00_nc_PZ, &b_Bs_2_00_nc_PZ);
   fChain->SetBranchAddress("Bs_2.00_nc_asy_P", &Bs_2_00_nc_asy_P, &b_Bs_2_00_nc_asy_P);
   fChain->SetBranchAddress("Bs_2.00_nc_asy_PT", &Bs_2_00_nc_asy_PT, &b_Bs_2_00_nc_asy_PT);
   fChain->SetBranchAddress("Bs_2.00_nc_asy_PX", &Bs_2_00_nc_asy_PX, &b_Bs_2_00_nc_asy_PX);
   fChain->SetBranchAddress("Bs_2.00_nc_asy_PY", &Bs_2_00_nc_asy_PY, &b_Bs_2_00_nc_asy_PY);
   fChain->SetBranchAddress("Bs_2.00_nc_asy_PZ", &Bs_2_00_nc_asy_PZ, &b_Bs_2_00_nc_asy_PZ);
   fChain->SetBranchAddress("Bs_2.00_nc_deltaEta", &Bs_2_00_nc_deltaEta, &b_Bs_2_00_nc_deltaEta);
   fChain->SetBranchAddress("Bs_2.00_nc_deltaPhi", &Bs_2_00_nc_deltaPhi, &b_Bs_2_00_nc_deltaPhi);
   fChain->SetBranchAddress("Bs_2.00_nc_IT", &Bs_2_00_nc_IT, &b_Bs_2_00_nc_IT);
   fChain->SetBranchAddress("Bs_2.00_nc_maxPt_PT", &Bs_2_00_nc_maxPt_PT, &b_Bs_2_00_nc_maxPt_PT);
   fChain->SetBranchAddress("Bs_2.00_nc_maxPt_PX", &Bs_2_00_nc_maxPt_PX, &b_Bs_2_00_nc_maxPt_PX);
   fChain->SetBranchAddress("Bs_2.00_nc_maxPt_PY", &Bs_2_00_nc_maxPt_PY, &b_Bs_2_00_nc_maxPt_PY);
   fChain->SetBranchAddress("Bs_2.00_nc_maxPt_PZ", &Bs_2_00_nc_maxPt_PZ, &b_Bs_2_00_nc_maxPt_PZ);
   fChain->SetBranchAddress("Bs_2.00_IT", &Bs_2_00_IT, &b_Bs_2_00_IT);
   fChain->SetBranchAddress("Bs_TRUEID", &Bs_TRUEID, &b_Bs_TRUEID);
   fChain->SetBranchAddress("Bs_TRUEP_E", &Bs_TRUEP_E, &b_Bs_TRUEP_E);
   fChain->SetBranchAddress("Bs_TRUEP_X", &Bs_TRUEP_X, &b_Bs_TRUEP_X);
   fChain->SetBranchAddress("Bs_TRUEP_Y", &Bs_TRUEP_Y, &b_Bs_TRUEP_Y);
   fChain->SetBranchAddress("Bs_TRUEP_Z", &Bs_TRUEP_Z, &b_Bs_TRUEP_Z);
   fChain->SetBranchAddress("Bs_TRUEPT", &Bs_TRUEPT, &b_Bs_TRUEPT);
   fChain->SetBranchAddress("Bs_TRUEORIGINVERTEX_X", &Bs_TRUEORIGINVERTEX_X, &b_Bs_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Bs_TRUEORIGINVERTEX_Y", &Bs_TRUEORIGINVERTEX_Y, &b_Bs_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Bs_TRUEORIGINVERTEX_Z", &Bs_TRUEORIGINVERTEX_Z, &b_Bs_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Bs_TRUEENDVERTEX_X", &Bs_TRUEENDVERTEX_X, &b_Bs_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Bs_TRUEENDVERTEX_Y", &Bs_TRUEENDVERTEX_Y, &b_Bs_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Bs_TRUEENDVERTEX_Z", &Bs_TRUEENDVERTEX_Z, &b_Bs_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Bs_TRUEISSTABLE", &Bs_TRUEISSTABLE, &b_Bs_TRUEISSTABLE);
   fChain->SetBranchAddress("Bs_TRUETAU", &Bs_TRUETAU, &b_Bs_TRUETAU);
   fChain->SetBranchAddress("Bs_Nu_TRUEID", &Bs_Nu_TRUEID, &b_Bs_Nu_TRUEID);
   fChain->SetBranchAddress("Bs_Nu_TRUEP_E", &Bs_Nu_TRUEP_E, &b_Bs_Nu_TRUEP_E);
   fChain->SetBranchAddress("Bs_Nu_TRUEP_X", &Bs_Nu_TRUEP_X, &b_Bs_Nu_TRUEP_X);
   fChain->SetBranchAddress("Bs_Nu_TRUEP_Y", &Bs_Nu_TRUEP_Y, &b_Bs_Nu_TRUEP_Y);
   fChain->SetBranchAddress("Bs_Nu_TRUEP_Z", &Bs_Nu_TRUEP_Z, &b_Bs_Nu_TRUEP_Z);
   fChain->SetBranchAddress("Bs_L0Global_Dec", &Bs_L0Global_Dec, &b_Bs_L0Global_Dec);
   fChain->SetBranchAddress("Bs_L0Global_TIS", &Bs_L0Global_TIS, &b_Bs_L0Global_TIS);
   fChain->SetBranchAddress("Bs_L0Global_TOS", &Bs_L0Global_TOS, &b_Bs_L0Global_TOS);
   fChain->SetBranchAddress("Bs_Hlt1Global_Dec", &Bs_Hlt1Global_Dec, &b_Bs_Hlt1Global_Dec);
   fChain->SetBranchAddress("Bs_Hlt1Global_TIS", &Bs_Hlt1Global_TIS, &b_Bs_Hlt1Global_TIS);
   fChain->SetBranchAddress("Bs_Hlt1Global_TOS", &Bs_Hlt1Global_TOS, &b_Bs_Hlt1Global_TOS);
   fChain->SetBranchAddress("Bs_Hlt1Phys_Dec", &Bs_Hlt1Phys_Dec, &b_Bs_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Bs_Hlt1Phys_TIS", &Bs_Hlt1Phys_TIS, &b_Bs_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Bs_Hlt1Phys_TOS", &Bs_Hlt1Phys_TOS, &b_Bs_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Global_Dec", &Bs_Hlt2Global_Dec, &b_Bs_Hlt2Global_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Global_TIS", &Bs_Hlt2Global_TIS, &b_Bs_Hlt2Global_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Global_TOS", &Bs_Hlt2Global_TOS, &b_Bs_Hlt2Global_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Phys_Dec", &Bs_Hlt2Phys_Dec, &b_Bs_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Phys_TIS", &Bs_Hlt2Phys_TIS, &b_Bs_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Phys_TOS", &Bs_Hlt2Phys_TOS, &b_Bs_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Bs_L0MuonDecision_Dec", &Bs_L0MuonDecision_Dec, &b_Bs_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Bs_L0MuonDecision_TIS", &Bs_L0MuonDecision_TIS, &b_Bs_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Bs_L0MuonDecision_TOS", &Bs_L0MuonDecision_TOS, &b_Bs_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Bs_L0DiMuonDecision_Dec", &Bs_L0DiMuonDecision_Dec, &b_Bs_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Bs_L0DiMuonDecision_TIS", &Bs_L0DiMuonDecision_TIS, &b_Bs_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Bs_L0DiMuonDecision_TOS", &Bs_L0DiMuonDecision_TOS, &b_Bs_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Bs_L0HadronDecision_Dec", &Bs_L0HadronDecision_Dec, &b_Bs_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Bs_L0HadronDecision_TIS", &Bs_L0HadronDecision_TIS, &b_Bs_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Bs_L0HadronDecision_TOS", &Bs_L0HadronDecision_TOS, &b_Bs_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt1TrackMuonDecision_Dec", &Bs_Hlt1TrackMuonDecision_Dec, &b_Bs_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt1TrackMuonDecision_TIS", &Bs_Hlt1TrackMuonDecision_TIS, &b_Bs_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt1TrackMuonDecision_TOS", &Bs_Hlt1TrackMuonDecision_TOS, &b_Bs_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt1TrackAllL0Decision_Dec", &Bs_Hlt1TrackAllL0Decision_Dec, &b_Bs_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Bs_Hlt1TrackAllL0Decision_TIS", &Bs_Hlt1TrackAllL0Decision_TIS, &b_Bs_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Bs_Hlt1TrackAllL0Decision_TOS", &Bs_Hlt1TrackAllL0Decision_TOS, &b_Bs_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2TopoMu2BodyBBDTDecision_Dec", &Bs_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_Bs_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2TopoMu2BodyBBDTDecision_TIS", &Bs_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_Bs_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2TopoMu2BodyBBDTDecision_TOS", &Bs_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_Bs_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2TopoMu3BodyBBDTDecision_Dec", &Bs_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_Bs_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2TopoMu3BodyBBDTDecision_TIS", &Bs_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_Bs_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2TopoMu3BodyBBDTDecision_TOS", &Bs_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_Bs_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2TopoMu4BodyBBDTDecision_Dec", &Bs_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Bs_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2TopoMu4BodyBBDTDecision_TIS", &Bs_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Bs_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2TopoMu4BodyBBDTDecision_TOS", &Bs_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Bs_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2MuTrackDecision_Dec", &Bs_Hlt2MuTrackDecision_Dec, &b_Bs_Hlt2MuTrackDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2MuTrackDecision_TIS", &Bs_Hlt2MuTrackDecision_TIS, &b_Bs_Hlt2MuTrackDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2MuTrackDecision_TOS", &Bs_Hlt2MuTrackDecision_TOS, &b_Bs_Hlt2MuTrackDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2SingleMuonDecision_Dec", &Bs_Hlt2SingleMuonDecision_Dec, &b_Bs_Hlt2SingleMuonDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2SingleMuonDecision_TIS", &Bs_Hlt2SingleMuonDecision_TIS, &b_Bs_Hlt2SingleMuonDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2SingleMuonDecision_TOS", &Bs_Hlt2SingleMuonDecision_TOS, &b_Bs_Hlt2SingleMuonDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2SingleMuonHighPTDecision_Dec", &Bs_Hlt2SingleMuonHighPTDecision_Dec, &b_Bs_Hlt2SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2SingleMuonHighPTDecision_TIS", &Bs_Hlt2SingleMuonHighPTDecision_TIS, &b_Bs_Hlt2SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2SingleMuonHighPTDecision_TOS", &Bs_Hlt2SingleMuonHighPTDecision_TOS, &b_Bs_Hlt2SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2SingleMuonLowPTDecision_Dec", &Bs_Hlt2SingleMuonLowPTDecision_Dec, &b_Bs_Hlt2SingleMuonLowPTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2SingleMuonLowPTDecision_TIS", &Bs_Hlt2SingleMuonLowPTDecision_TIS, &b_Bs_Hlt2SingleMuonLowPTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2SingleMuonLowPTDecision_TOS", &Bs_Hlt2SingleMuonLowPTDecision_TOS, &b_Bs_Hlt2SingleMuonLowPTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Topo2BodySimpleDecision_Dec", &Bs_Hlt2Topo2BodySimpleDecision_Dec, &b_Bs_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Topo2BodySimpleDecision_TIS", &Bs_Hlt2Topo2BodySimpleDecision_TIS, &b_Bs_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Topo2BodySimpleDecision_TOS", &Bs_Hlt2Topo2BodySimpleDecision_TOS, &b_Bs_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Topo3BodySimpleDecision_Dec", &Bs_Hlt2Topo3BodySimpleDecision_Dec, &b_Bs_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Topo3BodySimpleDecision_TIS", &Bs_Hlt2Topo3BodySimpleDecision_TIS, &b_Bs_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Topo3BodySimpleDecision_TOS", &Bs_Hlt2Topo3BodySimpleDecision_TOS, &b_Bs_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2CharmHadD2HHHDecision_Dec", &Bs_Hlt2CharmHadD2HHHDecision_Dec, &b_Bs_Hlt2CharmHadD2HHHDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2CharmHadD2HHHDecision_TIS", &Bs_Hlt2CharmHadD2HHHDecision_TIS, &b_Bs_Hlt2CharmHadD2HHHDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2CharmHadD2HHHDecision_TOS", &Bs_Hlt2CharmHadD2HHHDecision_TOS, &b_Bs_Hlt2CharmHadD2HHHDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Topo4BodySimpleDecision_Dec", &Bs_Hlt2Topo4BodySimpleDecision_Dec, &b_Bs_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Topo4BodySimpleDecision_TIS", &Bs_Hlt2Topo4BodySimpleDecision_TIS, &b_Bs_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Topo4BodySimpleDecision_TOS", &Bs_Hlt2Topo4BodySimpleDecision_TOS, &b_Bs_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Topo2BodyBBDTDecision_Dec", &Bs_Hlt2Topo2BodyBBDTDecision_Dec, &b_Bs_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Topo2BodyBBDTDecision_TIS", &Bs_Hlt2Topo2BodyBBDTDecision_TIS, &b_Bs_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Topo2BodyBBDTDecision_TOS", &Bs_Hlt2Topo2BodyBBDTDecision_TOS, &b_Bs_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonJPsiHighPTDecision_Dec", &Bs_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_Bs_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonJPsiHighPTDecision_TIS", &Bs_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_Bs_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonJPsiHighPTDecision_TOS", &Bs_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_Bs_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Topo3BodyBBDTDecision_Dec", &Bs_Hlt2Topo3BodyBBDTDecision_Dec, &b_Bs_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Topo3BodyBBDTDecision_TIS", &Bs_Hlt2Topo3BodyBBDTDecision_TIS, &b_Bs_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Topo3BodyBBDTDecision_TOS", &Bs_Hlt2Topo3BodyBBDTDecision_TOS, &b_Bs_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonBDecision_Dec", &Bs_Hlt2DiMuonBDecision_Dec, &b_Bs_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonBDecision_TIS", &Bs_Hlt2DiMuonBDecision_TIS, &b_Bs_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonBDecision_TOS", &Bs_Hlt2DiMuonBDecision_TOS, &b_Bs_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Topo4BodyBBDTDecision_Dec", &Bs_Hlt2Topo4BodyBBDTDecision_Dec, &b_Bs_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Topo4BodyBBDTDecision_TIS", &Bs_Hlt2Topo4BodyBBDTDecision_TIS, &b_Bs_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Topo4BodyBBDTDecision_TOS", &Bs_Hlt2Topo4BodyBBDTDecision_TOS, &b_Bs_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonZDecision_Dec", &Bs_Hlt2DiMuonZDecision_Dec, &b_Bs_Hlt2DiMuonZDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonZDecision_TIS", &Bs_Hlt2DiMuonZDecision_TIS, &b_Bs_Hlt2DiMuonZDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonZDecision_TOS", &Bs_Hlt2DiMuonZDecision_TOS, &b_Bs_Hlt2DiMuonZDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedDecision_Dec", &Bs_Hlt2DiMuonDetachedDecision_Dec, &b_Bs_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedDecision_TIS", &Bs_Hlt2DiMuonDetachedDecision_TIS, &b_Bs_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedDecision_TOS", &Bs_Hlt2DiMuonDetachedDecision_TOS, &b_Bs_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedHeavyDecision_Dec", &Bs_Hlt2DiMuonDetachedHeavyDecision_Dec, &b_Bs_Hlt2DiMuonDetachedHeavyDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedHeavyDecision_TIS", &Bs_Hlt2DiMuonDetachedHeavyDecision_TIS, &b_Bs_Hlt2DiMuonDetachedHeavyDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedHeavyDecision_TOS", &Bs_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_Bs_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedJPsiDecision_Dec", &Bs_Hlt2DiMuonDetachedJPsiDecision_Dec, &b_Bs_Hlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedJPsiDecision_TIS", &Bs_Hlt2DiMuonDetachedJPsiDecision_TIS, &b_Bs_Hlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedJPsiDecision_TOS", &Bs_Hlt2DiMuonDetachedJPsiDecision_TOS, &b_Bs_Hlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2TriMuonDetachedDecision_Dec", &Bs_Hlt2TriMuonDetachedDecision_Dec, &b_Bs_Hlt2TriMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2TriMuonDetachedDecision_TIS", &Bs_Hlt2TriMuonDetachedDecision_TIS, &b_Bs_Hlt2TriMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2TriMuonDetachedDecision_TOS", &Bs_Hlt2TriMuonDetachedDecision_TOS, &b_Bs_Hlt2TriMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2TopoE3BodyBBDTDecision_Dec", &Bs_Hlt2TopoE3BodyBBDTDecision_Dec, &b_Bs_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2TopoE3BodyBBDTDecision_TIS", &Bs_Hlt2TopoE3BodyBBDTDecision_TIS, &b_Bs_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2TopoE3BodyBBDTDecision_TOS", &Bs_Hlt2TopoE3BodyBBDTDecision_TOS, &b_Bs_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2TriMuonTauDecision_Dec", &Bs_Hlt2TriMuonTauDecision_Dec, &b_Bs_Hlt2TriMuonTauDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2TriMuonTauDecision_TIS", &Bs_Hlt2TriMuonTauDecision_TIS, &b_Bs_Hlt2TriMuonTauDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2TriMuonTauDecision_TOS", &Bs_Hlt2TriMuonTauDecision_TOS, &b_Bs_Hlt2TriMuonTauDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2TopoE4BodyBBDTDecision_Dec", &Bs_Hlt2TopoE4BodyBBDTDecision_Dec, &b_Bs_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2TopoE4BodyBBDTDecision_TIS", &Bs_Hlt2TopoE4BodyBBDTDecision_TIS, &b_Bs_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2TopoE4BodyBBDTDecision_TOS", &Bs_Hlt2TopoE4BodyBBDTDecision_TOS, &b_Bs_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2IncPhiDecision_Dec", &Bs_Hlt2IncPhiDecision_Dec, &b_Bs_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2IncPhiDecision_TIS", &Bs_Hlt2IncPhiDecision_TIS, &b_Bs_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2IncPhiDecision_TOS", &Bs_Hlt2IncPhiDecision_TOS, &b_Bs_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2B2HHLTUnbiasedDecision_Dec", &Bs_Hlt2B2HHLTUnbiasedDecision_Dec, &b_Bs_Hlt2B2HHLTUnbiasedDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2B2HHLTUnbiasedDecision_TIS", &Bs_Hlt2B2HHLTUnbiasedDecision_TIS, &b_Bs_Hlt2B2HHLTUnbiasedDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2B2HHLTUnbiasedDecision_TOS", &Bs_Hlt2B2HHLTUnbiasedDecision_TOS, &b_Bs_Hlt2B2HHLTUnbiasedDecision_TOS);
   fChain->SetBranchAddress("Ds_ENDVERTEX_X", &Ds_ENDVERTEX_X, &b_Ds_ENDVERTEX_X);
   fChain->SetBranchAddress("Ds_ENDVERTEX_Y", &Ds_ENDVERTEX_Y, &b_Ds_ENDVERTEX_Y);
   fChain->SetBranchAddress("Ds_ENDVERTEX_Z", &Ds_ENDVERTEX_Z, &b_Ds_ENDVERTEX_Z);
   fChain->SetBranchAddress("Ds_ENDVERTEX_XERR", &Ds_ENDVERTEX_XERR, &b_Ds_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Ds_ENDVERTEX_YERR", &Ds_ENDVERTEX_YERR, &b_Ds_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Ds_ENDVERTEX_ZERR", &Ds_ENDVERTEX_ZERR, &b_Ds_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Ds_ENDVERTEX_CHI2", &Ds_ENDVERTEX_CHI2, &b_Ds_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Ds_ENDVERTEX_NDOF", &Ds_ENDVERTEX_NDOF, &b_Ds_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Ds_ENDVERTEX_COV_", Ds_ENDVERTEX_COV_, &b_Ds_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Ds_OWNPV_X", &Ds_OWNPV_X, &b_Ds_OWNPV_X);
   fChain->SetBranchAddress("Ds_OWNPV_Y", &Ds_OWNPV_Y, &b_Ds_OWNPV_Y);
   fChain->SetBranchAddress("Ds_OWNPV_Z", &Ds_OWNPV_Z, &b_Ds_OWNPV_Z);
   fChain->SetBranchAddress("Ds_OWNPV_XERR", &Ds_OWNPV_XERR, &b_Ds_OWNPV_XERR);
   fChain->SetBranchAddress("Ds_OWNPV_YERR", &Ds_OWNPV_YERR, &b_Ds_OWNPV_YERR);
   fChain->SetBranchAddress("Ds_OWNPV_ZERR", &Ds_OWNPV_ZERR, &b_Ds_OWNPV_ZERR);
   fChain->SetBranchAddress("Ds_OWNPV_CHI2", &Ds_OWNPV_CHI2, &b_Ds_OWNPV_CHI2);
   fChain->SetBranchAddress("Ds_OWNPV_NDOF", &Ds_OWNPV_NDOF, &b_Ds_OWNPV_NDOF);
   fChain->SetBranchAddress("Ds_OWNPV_COV_", Ds_OWNPV_COV_, &b_Ds_OWNPV_COV_);
   fChain->SetBranchAddress("Ds_IP_OWNPV", &Ds_IP_OWNPV, &b_Ds_IP_OWNPV);
   fChain->SetBranchAddress("Ds_IPCHI2_OWNPV", &Ds_IPCHI2_OWNPV, &b_Ds_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Ds_FD_OWNPV", &Ds_FD_OWNPV, &b_Ds_FD_OWNPV);
   fChain->SetBranchAddress("Ds_FDCHI2_OWNPV", &Ds_FDCHI2_OWNPV, &b_Ds_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Ds_DIRA_OWNPV", &Ds_DIRA_OWNPV, &b_Ds_DIRA_OWNPV);
   fChain->SetBranchAddress("Ds_ORIVX_X", &Ds_ORIVX_X, &b_Ds_ORIVX_X);
   fChain->SetBranchAddress("Ds_ORIVX_Y", &Ds_ORIVX_Y, &b_Ds_ORIVX_Y);
   fChain->SetBranchAddress("Ds_ORIVX_Z", &Ds_ORIVX_Z, &b_Ds_ORIVX_Z);
   fChain->SetBranchAddress("Ds_ORIVX_XERR", &Ds_ORIVX_XERR, &b_Ds_ORIVX_XERR);
   fChain->SetBranchAddress("Ds_ORIVX_YERR", &Ds_ORIVX_YERR, &b_Ds_ORIVX_YERR);
   fChain->SetBranchAddress("Ds_ORIVX_ZERR", &Ds_ORIVX_ZERR, &b_Ds_ORIVX_ZERR);
   fChain->SetBranchAddress("Ds_ORIVX_CHI2", &Ds_ORIVX_CHI2, &b_Ds_ORIVX_CHI2);
   fChain->SetBranchAddress("Ds_ORIVX_NDOF", &Ds_ORIVX_NDOF, &b_Ds_ORIVX_NDOF);
   fChain->SetBranchAddress("Ds_ORIVX_COV_", Ds_ORIVX_COV_, &b_Ds_ORIVX_COV_);
   fChain->SetBranchAddress("Ds_FD_ORIVX", &Ds_FD_ORIVX, &b_Ds_FD_ORIVX);
   fChain->SetBranchAddress("Ds_FDCHI2_ORIVX", &Ds_FDCHI2_ORIVX, &b_Ds_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Ds_DIRA_ORIVX", &Ds_DIRA_ORIVX, &b_Ds_DIRA_ORIVX);
   fChain->SetBranchAddress("Ds_P", &Ds_P, &b_Ds_P);
   fChain->SetBranchAddress("Ds_PT", &Ds_PT, &b_Ds_PT);
   fChain->SetBranchAddress("Ds_PE", &Ds_PE, &b_Ds_PE);
   fChain->SetBranchAddress("Ds_PX", &Ds_PX, &b_Ds_PX);
   fChain->SetBranchAddress("Ds_PY", &Ds_PY, &b_Ds_PY);
   fChain->SetBranchAddress("Ds_PZ", &Ds_PZ, &b_Ds_PZ);
   fChain->SetBranchAddress("Ds_MM", &Ds_MM, &b_Ds_MM);
   fChain->SetBranchAddress("Ds_MMERR", &Ds_MMERR, &b_Ds_MMERR);
   fChain->SetBranchAddress("Ds_M", &Ds_M, &b_Ds_M);
   fChain->SetBranchAddress("Ds_BKGCAT", &Ds_BKGCAT, &b_Ds_BKGCAT);
   fChain->SetBranchAddress("Ds_TRUEID", &Ds_TRUEID, &b_Ds_TRUEID);
   fChain->SetBranchAddress("Ds_MC_MOTHER_ID", &Ds_MC_MOTHER_ID, &b_Ds_MC_MOTHER_ID);
   fChain->SetBranchAddress("Ds_MC_MOTHER_KEY", &Ds_MC_MOTHER_KEY, &b_Ds_MC_MOTHER_KEY);
   fChain->SetBranchAddress("Ds_MC_GD_MOTHER_ID", &Ds_MC_GD_MOTHER_ID, &b_Ds_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("Ds_MC_GD_MOTHER_KEY", &Ds_MC_GD_MOTHER_KEY, &b_Ds_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Ds_MC_GD_GD_MOTHER_ID", &Ds_MC_GD_GD_MOTHER_ID, &b_Ds_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("Ds_MC_GD_GD_MOTHER_KEY", &Ds_MC_GD_GD_MOTHER_KEY, &b_Ds_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Ds_TRUEP_E", &Ds_TRUEP_E, &b_Ds_TRUEP_E);
   fChain->SetBranchAddress("Ds_TRUEP_X", &Ds_TRUEP_X, &b_Ds_TRUEP_X);
   fChain->SetBranchAddress("Ds_TRUEP_Y", &Ds_TRUEP_Y, &b_Ds_TRUEP_Y);
   fChain->SetBranchAddress("Ds_TRUEP_Z", &Ds_TRUEP_Z, &b_Ds_TRUEP_Z);
   fChain->SetBranchAddress("Ds_TRUEPT", &Ds_TRUEPT, &b_Ds_TRUEPT);
   fChain->SetBranchAddress("Ds_TRUEORIGINVERTEX_X", &Ds_TRUEORIGINVERTEX_X, &b_Ds_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Ds_TRUEORIGINVERTEX_Y", &Ds_TRUEORIGINVERTEX_Y, &b_Ds_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Ds_TRUEORIGINVERTEX_Z", &Ds_TRUEORIGINVERTEX_Z, &b_Ds_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Ds_TRUEENDVERTEX_X", &Ds_TRUEENDVERTEX_X, &b_Ds_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Ds_TRUEENDVERTEX_Y", &Ds_TRUEENDVERTEX_Y, &b_Ds_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Ds_TRUEENDVERTEX_Z", &Ds_TRUEENDVERTEX_Z, &b_Ds_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Ds_TRUEISSTABLE", &Ds_TRUEISSTABLE, &b_Ds_TRUEISSTABLE);
   fChain->SetBranchAddress("Ds_TRUETAU", &Ds_TRUETAU, &b_Ds_TRUETAU);
   fChain->SetBranchAddress("Ds_Reconstructible", &Ds_Reconstructible, &b_Ds_Reconstructible);
   fChain->SetBranchAddress("Ds_Reconstructed", &Ds_Reconstructed, &b_Ds_Reconstructed);
   fChain->SetBranchAddress("Ds_ProtoParticles", &Ds_ProtoParticles, &b_Ds_ProtoParticles);
   fChain->SetBranchAddress("Ds_PP_PX", Ds_PP_PX, &b_Ds_PP_PX);
   fChain->SetBranchAddress("Ds_PP_PY", Ds_PP_PY, &b_Ds_PP_PY);
   fChain->SetBranchAddress("Ds_PP_PZ", Ds_PP_PZ, &b_Ds_PP_PZ);
   fChain->SetBranchAddress("Ds_PP_Weight", Ds_PP_Weight, &b_Ds_PP_Weight);
   fChain->SetBranchAddress("Ds_PP_tr_pchi2", Ds_PP_tr_pchi2, &b_Ds_PP_tr_pchi2);
   fChain->SetBranchAddress("Ds_PP_DLLe", Ds_PP_DLLe, &b_Ds_PP_DLLe);
   fChain->SetBranchAddress("Ds_PP_DLLk", Ds_PP_DLLk, &b_Ds_PP_DLLk);
   fChain->SetBranchAddress("Ds_PP_DLLp", Ds_PP_DLLp, &b_Ds_PP_DLLp);
   fChain->SetBranchAddress("Ds_PP_DLLmu", Ds_PP_DLLmu, &b_Ds_PP_DLLmu);
   fChain->SetBranchAddress("Ds_ID", &Ds_ID, &b_Ds_ID);
   fChain->SetBranchAddress("Ds_TAU", &Ds_TAU, &b_Ds_TAU);
   fChain->SetBranchAddress("Ds_TAUERR", &Ds_TAUERR, &b_Ds_TAUERR);
   fChain->SetBranchAddress("Ds_TAUCHI2", &Ds_TAUCHI2, &b_Ds_TAUCHI2);
   fChain->SetBranchAddress("Ds_X", &Ds_X, &b_Ds_X);
   fChain->SetBranchAddress("Ds_Y", &Ds_Y, &b_Ds_Y);
   fChain->SetBranchAddress("kaon_m_OWNPV_X", &kaon_m_OWNPV_X, &b_kaon_m_OWNPV_X);
   fChain->SetBranchAddress("kaon_m_OWNPV_Y", &kaon_m_OWNPV_Y, &b_kaon_m_OWNPV_Y);
   fChain->SetBranchAddress("kaon_m_OWNPV_Z", &kaon_m_OWNPV_Z, &b_kaon_m_OWNPV_Z);
   fChain->SetBranchAddress("kaon_m_OWNPV_XERR", &kaon_m_OWNPV_XERR, &b_kaon_m_OWNPV_XERR);
   fChain->SetBranchAddress("kaon_m_OWNPV_YERR", &kaon_m_OWNPV_YERR, &b_kaon_m_OWNPV_YERR);
   fChain->SetBranchAddress("kaon_m_OWNPV_ZERR", &kaon_m_OWNPV_ZERR, &b_kaon_m_OWNPV_ZERR);
   fChain->SetBranchAddress("kaon_m_OWNPV_CHI2", &kaon_m_OWNPV_CHI2, &b_kaon_m_OWNPV_CHI2);
   fChain->SetBranchAddress("kaon_m_OWNPV_NDOF", &kaon_m_OWNPV_NDOF, &b_kaon_m_OWNPV_NDOF);
   fChain->SetBranchAddress("kaon_m_OWNPV_COV_", kaon_m_OWNPV_COV_, &b_kaon_m_OWNPV_COV_);
   fChain->SetBranchAddress("kaon_m_IP_OWNPV", &kaon_m_IP_OWNPV, &b_kaon_m_IP_OWNPV);
   fChain->SetBranchAddress("kaon_m_IPCHI2_OWNPV", &kaon_m_IPCHI2_OWNPV, &b_kaon_m_IPCHI2_OWNPV);
   fChain->SetBranchAddress("kaon_m_ORIVX_X", &kaon_m_ORIVX_X, &b_kaon_m_ORIVX_X);
   fChain->SetBranchAddress("kaon_m_ORIVX_Y", &kaon_m_ORIVX_Y, &b_kaon_m_ORIVX_Y);
   fChain->SetBranchAddress("kaon_m_ORIVX_Z", &kaon_m_ORIVX_Z, &b_kaon_m_ORIVX_Z);
   fChain->SetBranchAddress("kaon_m_ORIVX_XERR", &kaon_m_ORIVX_XERR, &b_kaon_m_ORIVX_XERR);
   fChain->SetBranchAddress("kaon_m_ORIVX_YERR", &kaon_m_ORIVX_YERR, &b_kaon_m_ORIVX_YERR);
   fChain->SetBranchAddress("kaon_m_ORIVX_ZERR", &kaon_m_ORIVX_ZERR, &b_kaon_m_ORIVX_ZERR);
   fChain->SetBranchAddress("kaon_m_ORIVX_CHI2", &kaon_m_ORIVX_CHI2, &b_kaon_m_ORIVX_CHI2);
   fChain->SetBranchAddress("kaon_m_ORIVX_NDOF", &kaon_m_ORIVX_NDOF, &b_kaon_m_ORIVX_NDOF);
   fChain->SetBranchAddress("kaon_m_ORIVX_COV_", kaon_m_ORIVX_COV_, &b_kaon_m_ORIVX_COV_);
   fChain->SetBranchAddress("kaon_m_P", &kaon_m_P, &b_kaon_m_P);
   fChain->SetBranchAddress("kaon_m_PT", &kaon_m_PT, &b_kaon_m_PT);
   fChain->SetBranchAddress("kaon_m_PE", &kaon_m_PE, &b_kaon_m_PE);
   fChain->SetBranchAddress("kaon_m_PX", &kaon_m_PX, &b_kaon_m_PX);
   fChain->SetBranchAddress("kaon_m_PY", &kaon_m_PY, &b_kaon_m_PY);
   fChain->SetBranchAddress("kaon_m_PZ", &kaon_m_PZ, &b_kaon_m_PZ);
   fChain->SetBranchAddress("kaon_m_M", &kaon_m_M, &b_kaon_m_M);
   fChain->SetBranchAddress("kaon_m_TRUEID", &kaon_m_TRUEID, &b_kaon_m_TRUEID);
   fChain->SetBranchAddress("kaon_m_MC_MOTHER_ID", &kaon_m_MC_MOTHER_ID, &b_kaon_m_MC_MOTHER_ID);
   fChain->SetBranchAddress("kaon_m_MC_MOTHER_KEY", &kaon_m_MC_MOTHER_KEY, &b_kaon_m_MC_MOTHER_KEY);
   fChain->SetBranchAddress("kaon_m_MC_GD_MOTHER_ID", &kaon_m_MC_GD_MOTHER_ID, &b_kaon_m_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("kaon_m_MC_GD_MOTHER_KEY", &kaon_m_MC_GD_MOTHER_KEY, &b_kaon_m_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("kaon_m_MC_GD_GD_MOTHER_ID", &kaon_m_MC_GD_GD_MOTHER_ID, &b_kaon_m_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("kaon_m_MC_GD_GD_MOTHER_KEY", &kaon_m_MC_GD_GD_MOTHER_KEY, &b_kaon_m_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("kaon_m_TRUEP_E", &kaon_m_TRUEP_E, &b_kaon_m_TRUEP_E);
   fChain->SetBranchAddress("kaon_m_TRUEP_X", &kaon_m_TRUEP_X, &b_kaon_m_TRUEP_X);
   fChain->SetBranchAddress("kaon_m_TRUEP_Y", &kaon_m_TRUEP_Y, &b_kaon_m_TRUEP_Y);
   fChain->SetBranchAddress("kaon_m_TRUEP_Z", &kaon_m_TRUEP_Z, &b_kaon_m_TRUEP_Z);
   fChain->SetBranchAddress("kaon_m_TRUEPT", &kaon_m_TRUEPT, &b_kaon_m_TRUEPT);
   fChain->SetBranchAddress("kaon_m_TRUEORIGINVERTEX_X", &kaon_m_TRUEORIGINVERTEX_X, &b_kaon_m_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("kaon_m_TRUEORIGINVERTEX_Y", &kaon_m_TRUEORIGINVERTEX_Y, &b_kaon_m_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("kaon_m_TRUEORIGINVERTEX_Z", &kaon_m_TRUEORIGINVERTEX_Z, &b_kaon_m_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("kaon_m_TRUEENDVERTEX_X", &kaon_m_TRUEENDVERTEX_X, &b_kaon_m_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("kaon_m_TRUEENDVERTEX_Y", &kaon_m_TRUEENDVERTEX_Y, &b_kaon_m_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("kaon_m_TRUEENDVERTEX_Z", &kaon_m_TRUEENDVERTEX_Z, &b_kaon_m_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("kaon_m_TRUEISSTABLE", &kaon_m_TRUEISSTABLE, &b_kaon_m_TRUEISSTABLE);
   fChain->SetBranchAddress("kaon_m_TRUETAU", &kaon_m_TRUETAU, &b_kaon_m_TRUETAU);
   fChain->SetBranchAddress("kaon_m_Reconstructible", &kaon_m_Reconstructible, &b_kaon_m_Reconstructible);
   fChain->SetBranchAddress("kaon_m_Reconstructed", &kaon_m_Reconstructed, &b_kaon_m_Reconstructed);
   fChain->SetBranchAddress("kaon_m_ProtoParticles", &kaon_m_ProtoParticles, &b_kaon_m_ProtoParticles);
   fChain->SetBranchAddress("kaon_m_PP_PX", kaon_m_PP_PX, &b_kaon_m_PP_PX);
   fChain->SetBranchAddress("kaon_m_PP_PY", kaon_m_PP_PY, &b_kaon_m_PP_PY);
   fChain->SetBranchAddress("kaon_m_PP_PZ", kaon_m_PP_PZ, &b_kaon_m_PP_PZ);
   fChain->SetBranchAddress("kaon_m_PP_Weight", kaon_m_PP_Weight, &b_kaon_m_PP_Weight);
   fChain->SetBranchAddress("kaon_m_PP_tr_pchi2", kaon_m_PP_tr_pchi2, &b_kaon_m_PP_tr_pchi2);
   fChain->SetBranchAddress("kaon_m_PP_DLLe", kaon_m_PP_DLLe, &b_kaon_m_PP_DLLe);
   fChain->SetBranchAddress("kaon_m_PP_DLLk", kaon_m_PP_DLLk, &b_kaon_m_PP_DLLk);
   fChain->SetBranchAddress("kaon_m_PP_DLLp", kaon_m_PP_DLLp, &b_kaon_m_PP_DLLp);
   fChain->SetBranchAddress("kaon_m_PP_DLLmu", kaon_m_PP_DLLmu, &b_kaon_m_PP_DLLmu);
   fChain->SetBranchAddress("kaon_m_ID", &kaon_m_ID, &b_kaon_m_ID);
   fChain->SetBranchAddress("kaon_m_CombDLLMu", &kaon_m_CombDLLMu, &b_kaon_m_CombDLLMu);
   fChain->SetBranchAddress("kaon_m_ProbNNmu", &kaon_m_ProbNNmu, &b_kaon_m_ProbNNmu);
   fChain->SetBranchAddress("kaon_m_ProbNNghost", &kaon_m_ProbNNghost, &b_kaon_m_ProbNNghost);
   fChain->SetBranchAddress("kaon_m_InMuonAcc", &kaon_m_InMuonAcc, &b_kaon_m_InMuonAcc);
   fChain->SetBranchAddress("kaon_m_MuonDist2", &kaon_m_MuonDist2, &b_kaon_m_MuonDist2);
   fChain->SetBranchAddress("kaon_m_regionInM2", &kaon_m_regionInM2, &b_kaon_m_regionInM2);
   fChain->SetBranchAddress("kaon_m_hasMuon", &kaon_m_hasMuon, &b_kaon_m_hasMuon);
   fChain->SetBranchAddress("kaon_m_isMuon", &kaon_m_isMuon, &b_kaon_m_isMuon);
   fChain->SetBranchAddress("kaon_m_isMuonLoose", &kaon_m_isMuonLoose, &b_kaon_m_isMuonLoose);
   fChain->SetBranchAddress("kaon_m_NShared", &kaon_m_NShared, &b_kaon_m_NShared);
   fChain->SetBranchAddress("kaon_m_MuonLLmu", &kaon_m_MuonLLmu, &b_kaon_m_MuonLLmu);
   fChain->SetBranchAddress("kaon_m_MuonLLbg", &kaon_m_MuonLLbg, &b_kaon_m_MuonLLbg);
   fChain->SetBranchAddress("kaon_m_isMuonFromProto", &kaon_m_isMuonFromProto, &b_kaon_m_isMuonFromProto);
   fChain->SetBranchAddress("kaon_m_RICHDLLe", &kaon_m_RICHDLLe, &b_kaon_m_RICHDLLe);
   fChain->SetBranchAddress("kaon_m_RICHDLLmu", &kaon_m_RICHDLLmu, &b_kaon_m_RICHDLLmu);
   fChain->SetBranchAddress("kaon_m_RICHDLLpi", &kaon_m_RICHDLLpi, &b_kaon_m_RICHDLLpi);
   fChain->SetBranchAddress("kaon_m_RICHDLLK", &kaon_m_RICHDLLK, &b_kaon_m_RICHDLLK);
   fChain->SetBranchAddress("kaon_m_RICHDLLp", &kaon_m_RICHDLLp, &b_kaon_m_RICHDLLp);
   fChain->SetBranchAddress("kaon_m_RICHDLLbt", &kaon_m_RICHDLLbt, &b_kaon_m_RICHDLLbt);
   fChain->SetBranchAddress("kaon_m_RICHBestID", &kaon_m_RICHBestID, &b_kaon_m_RICHBestID);
   fChain->SetBranchAddress("kaon_m_RICHThreshold", &kaon_m_RICHThreshold, &b_kaon_m_RICHThreshold);
   fChain->SetBranchAddress("kaon_m_RICHThresholdEl", &kaon_m_RICHThresholdEl, &b_kaon_m_RICHThresholdEl);
   fChain->SetBranchAddress("kaon_m_RICHThresholdMu", &kaon_m_RICHThresholdMu, &b_kaon_m_RICHThresholdMu);
   fChain->SetBranchAddress("kaon_m_RICHThresholdPi", &kaon_m_RICHThresholdPi, &b_kaon_m_RICHThresholdPi);
   fChain->SetBranchAddress("kaon_m_RICHThresholdKa", &kaon_m_RICHThresholdKa, &b_kaon_m_RICHThresholdKa);
   fChain->SetBranchAddress("kaon_m_RICHThresholdPr", &kaon_m_RICHThresholdPr, &b_kaon_m_RICHThresholdPr);
   fChain->SetBranchAddress("kaon_m_RICHAerogelUsed", &kaon_m_RICHAerogelUsed, &b_kaon_m_RICHAerogelUsed);
   fChain->SetBranchAddress("kaon_m_RICH1GasUsed", &kaon_m_RICH1GasUsed, &b_kaon_m_RICH1GasUsed);
   fChain->SetBranchAddress("kaon_m_RICH2GasUsed", &kaon_m_RICH2GasUsed, &b_kaon_m_RICH2GasUsed);
   fChain->SetBranchAddress("kaon_m_TRACK_Eta", &kaon_m_TRACK_Eta, &b_kaon_m_TRACK_Eta);
   fChain->SetBranchAddress("kaon_m_TRACK_Phi", &kaon_m_TRACK_Phi, &b_kaon_m_TRACK_Phi);
   fChain->SetBranchAddress("kaon_m_Aerogel_X", &kaon_m_Aerogel_X, &b_kaon_m_Aerogel_X);
   fChain->SetBranchAddress("kaon_m_Aerogel_Y", &kaon_m_Aerogel_Y, &b_kaon_m_Aerogel_Y);
   fChain->SetBranchAddress("kaon_m_Aerogel_Z", &kaon_m_Aerogel_Z, &b_kaon_m_Aerogel_Z);
   fChain->SetBranchAddress("kaon_m_Aerogel_Rho", &kaon_m_Aerogel_Rho, &b_kaon_m_Aerogel_Rho);
   fChain->SetBranchAddress("kaon_m_Aerogel_Phi", &kaon_m_Aerogel_Phi, &b_kaon_m_Aerogel_Phi);
   fChain->SetBranchAddress("kaon_m_Rich1Gas_X", &kaon_m_Rich1Gas_X, &b_kaon_m_Rich1Gas_X);
   fChain->SetBranchAddress("kaon_m_Rich1Gas_Y", &kaon_m_Rich1Gas_Y, &b_kaon_m_Rich1Gas_Y);
   fChain->SetBranchAddress("kaon_m_Rich1Gas_Z", &kaon_m_Rich1Gas_Z, &b_kaon_m_Rich1Gas_Z);
   fChain->SetBranchAddress("kaon_m_Rich1Gas_Rho", &kaon_m_Rich1Gas_Rho, &b_kaon_m_Rich1Gas_Rho);
   fChain->SetBranchAddress("kaon_m_Rich1Gas_Phi", &kaon_m_Rich1Gas_Phi, &b_kaon_m_Rich1Gas_Phi);
   fChain->SetBranchAddress("kaon_m_Rich2Gas_X", &kaon_m_Rich2Gas_X, &b_kaon_m_Rich2Gas_X);
   fChain->SetBranchAddress("kaon_m_Rich2Gas_Y", &kaon_m_Rich2Gas_Y, &b_kaon_m_Rich2Gas_Y);
   fChain->SetBranchAddress("kaon_m_Rich2Gas_Z", &kaon_m_Rich2Gas_Z, &b_kaon_m_Rich2Gas_Z);
   fChain->SetBranchAddress("kaon_m_Rich2Gas_Rho", &kaon_m_Rich2Gas_Rho, &b_kaon_m_Rich2Gas_Rho);
   fChain->SetBranchAddress("kaon_m_Rich2Gas_Phi", &kaon_m_Rich2Gas_Phi, &b_kaon_m_Rich2Gas_Phi);
   fChain->SetBranchAddress("kaon_m_TRACK_Type", &kaon_m_TRACK_Type, &b_kaon_m_TRACK_Type);
   fChain->SetBranchAddress("kaon_m_TRACK_Key", &kaon_m_TRACK_Key, &b_kaon_m_TRACK_Key);
   fChain->SetBranchAddress("kaon_m_TRACK_CHI2NDOF", &kaon_m_TRACK_CHI2NDOF, &b_kaon_m_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("kaon_m_TRACK_PCHI2", &kaon_m_TRACK_PCHI2, &b_kaon_m_TRACK_PCHI2);
   fChain->SetBranchAddress("kaon_m_TRACK_MatchCHI2", &kaon_m_TRACK_MatchCHI2, &b_kaon_m_TRACK_MatchCHI2);
   fChain->SetBranchAddress("kaon_m_TRACK_GhostProb", &kaon_m_TRACK_GhostProb, &b_kaon_m_TRACK_GhostProb);
   fChain->SetBranchAddress("kaon_m_TRACK_CloneDist", &kaon_m_TRACK_CloneDist, &b_kaon_m_TRACK_CloneDist);
   fChain->SetBranchAddress("kaon_m_TRACK_Likelihood", &kaon_m_TRACK_Likelihood, &b_kaon_m_TRACK_Likelihood);
   fChain->SetBranchAddress("kaon_m_X", &kaon_m_X, &b_kaon_m_X);
   fChain->SetBranchAddress("kaon_m_Y", &kaon_m_Y, &b_kaon_m_Y);
   fChain->SetBranchAddress("kaon_m_MIPCHI2DV_PV", &kaon_m_MIPCHI2DV_PV, &b_kaon_m_MIPCHI2DV_PV);
   fChain->SetBranchAddress("kaon_m_0.40_cc_mult", &kaon_m_0_40_cc_mult, &b_kaon_m_0_40_cc_mult);
   fChain->SetBranchAddress("kaon_m_0.40_cc_sPT", &kaon_m_0_40_cc_sPT, &b_kaon_m_0_40_cc_sPT);
   fChain->SetBranchAddress("kaon_m_0.40_cc_vPT", &kaon_m_0_40_cc_vPT, &b_kaon_m_0_40_cc_vPT);
   fChain->SetBranchAddress("kaon_m_0.40_cc_PX", &kaon_m_0_40_cc_PX, &b_kaon_m_0_40_cc_PX);
   fChain->SetBranchAddress("kaon_m_0.40_cc_PY", &kaon_m_0_40_cc_PY, &b_kaon_m_0_40_cc_PY);
   fChain->SetBranchAddress("kaon_m_0.40_cc_PZ", &kaon_m_0_40_cc_PZ, &b_kaon_m_0_40_cc_PZ);
   fChain->SetBranchAddress("kaon_m_0.40_cc_asy_P", &kaon_m_0_40_cc_asy_P, &b_kaon_m_0_40_cc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.40_cc_asy_PT", &kaon_m_0_40_cc_asy_PT, &b_kaon_m_0_40_cc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.40_cc_asy_PX", &kaon_m_0_40_cc_asy_PX, &b_kaon_m_0_40_cc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.40_cc_asy_PY", &kaon_m_0_40_cc_asy_PY, &b_kaon_m_0_40_cc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.40_cc_asy_PZ", &kaon_m_0_40_cc_asy_PZ, &b_kaon_m_0_40_cc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.40_cc_deltaEta", &kaon_m_0_40_cc_deltaEta, &b_kaon_m_0_40_cc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.40_cc_deltaPhi", &kaon_m_0_40_cc_deltaPhi, &b_kaon_m_0_40_cc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.40_cc_IT", &kaon_m_0_40_cc_IT, &b_kaon_m_0_40_cc_IT);
   fChain->SetBranchAddress("kaon_m_0.40_cc_maxPt_Q", &kaon_m_0_40_cc_maxPt_Q, &b_kaon_m_0_40_cc_maxPt_Q);
   fChain->SetBranchAddress("kaon_m_0.40_cc_maxPt_PT", &kaon_m_0_40_cc_maxPt_PT, &b_kaon_m_0_40_cc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.40_cc_maxPt_PX", &kaon_m_0_40_cc_maxPt_PX, &b_kaon_m_0_40_cc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.40_cc_maxPt_PY", &kaon_m_0_40_cc_maxPt_PY, &b_kaon_m_0_40_cc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.40_cc_maxPt_PZ", &kaon_m_0_40_cc_maxPt_PZ, &b_kaon_m_0_40_cc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.40_cc_maxPt_PE", &kaon_m_0_40_cc_maxPt_PE, &b_kaon_m_0_40_cc_maxPt_PE);
   fChain->SetBranchAddress("kaon_m_0.40_nc_mult", &kaon_m_0_40_nc_mult, &b_kaon_m_0_40_nc_mult);
   fChain->SetBranchAddress("kaon_m_0.40_nc_sPT", &kaon_m_0_40_nc_sPT, &b_kaon_m_0_40_nc_sPT);
   fChain->SetBranchAddress("kaon_m_0.40_nc_vPT", &kaon_m_0_40_nc_vPT, &b_kaon_m_0_40_nc_vPT);
   fChain->SetBranchAddress("kaon_m_0.40_nc_PX", &kaon_m_0_40_nc_PX, &b_kaon_m_0_40_nc_PX);
   fChain->SetBranchAddress("kaon_m_0.40_nc_PY", &kaon_m_0_40_nc_PY, &b_kaon_m_0_40_nc_PY);
   fChain->SetBranchAddress("kaon_m_0.40_nc_PZ", &kaon_m_0_40_nc_PZ, &b_kaon_m_0_40_nc_PZ);
   fChain->SetBranchAddress("kaon_m_0.40_nc_asy_P", &kaon_m_0_40_nc_asy_P, &b_kaon_m_0_40_nc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.40_nc_asy_PT", &kaon_m_0_40_nc_asy_PT, &b_kaon_m_0_40_nc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.40_nc_asy_PX", &kaon_m_0_40_nc_asy_PX, &b_kaon_m_0_40_nc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.40_nc_asy_PY", &kaon_m_0_40_nc_asy_PY, &b_kaon_m_0_40_nc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.40_nc_asy_PZ", &kaon_m_0_40_nc_asy_PZ, &b_kaon_m_0_40_nc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.40_nc_deltaEta", &kaon_m_0_40_nc_deltaEta, &b_kaon_m_0_40_nc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.40_nc_deltaPhi", &kaon_m_0_40_nc_deltaPhi, &b_kaon_m_0_40_nc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.40_nc_IT", &kaon_m_0_40_nc_IT, &b_kaon_m_0_40_nc_IT);
   fChain->SetBranchAddress("kaon_m_0.40_nc_maxPt_PT", &kaon_m_0_40_nc_maxPt_PT, &b_kaon_m_0_40_nc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.40_nc_maxPt_PX", &kaon_m_0_40_nc_maxPt_PX, &b_kaon_m_0_40_nc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.40_nc_maxPt_PY", &kaon_m_0_40_nc_maxPt_PY, &b_kaon_m_0_40_nc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.40_nc_maxPt_PZ", &kaon_m_0_40_nc_maxPt_PZ, &b_kaon_m_0_40_nc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.40_IT", &kaon_m_0_40_IT, &b_kaon_m_0_40_IT);
   fChain->SetBranchAddress("kaon_m_0.50_cc_mult", &kaon_m_0_50_cc_mult, &b_kaon_m_0_50_cc_mult);
   fChain->SetBranchAddress("kaon_m_0.50_cc_sPT", &kaon_m_0_50_cc_sPT, &b_kaon_m_0_50_cc_sPT);
   fChain->SetBranchAddress("kaon_m_0.50_cc_vPT", &kaon_m_0_50_cc_vPT, &b_kaon_m_0_50_cc_vPT);
   fChain->SetBranchAddress("kaon_m_0.50_cc_PX", &kaon_m_0_50_cc_PX, &b_kaon_m_0_50_cc_PX);
   fChain->SetBranchAddress("kaon_m_0.50_cc_PY", &kaon_m_0_50_cc_PY, &b_kaon_m_0_50_cc_PY);
   fChain->SetBranchAddress("kaon_m_0.50_cc_PZ", &kaon_m_0_50_cc_PZ, &b_kaon_m_0_50_cc_PZ);
   fChain->SetBranchAddress("kaon_m_0.50_cc_asy_P", &kaon_m_0_50_cc_asy_P, &b_kaon_m_0_50_cc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.50_cc_asy_PT", &kaon_m_0_50_cc_asy_PT, &b_kaon_m_0_50_cc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.50_cc_asy_PX", &kaon_m_0_50_cc_asy_PX, &b_kaon_m_0_50_cc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.50_cc_asy_PY", &kaon_m_0_50_cc_asy_PY, &b_kaon_m_0_50_cc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.50_cc_asy_PZ", &kaon_m_0_50_cc_asy_PZ, &b_kaon_m_0_50_cc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.50_cc_deltaEta", &kaon_m_0_50_cc_deltaEta, &b_kaon_m_0_50_cc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.50_cc_deltaPhi", &kaon_m_0_50_cc_deltaPhi, &b_kaon_m_0_50_cc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.50_cc_IT", &kaon_m_0_50_cc_IT, &b_kaon_m_0_50_cc_IT);
   fChain->SetBranchAddress("kaon_m_0.50_cc_maxPt_Q", &kaon_m_0_50_cc_maxPt_Q, &b_kaon_m_0_50_cc_maxPt_Q);
   fChain->SetBranchAddress("kaon_m_0.50_cc_maxPt_PT", &kaon_m_0_50_cc_maxPt_PT, &b_kaon_m_0_50_cc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.50_cc_maxPt_PX", &kaon_m_0_50_cc_maxPt_PX, &b_kaon_m_0_50_cc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.50_cc_maxPt_PY", &kaon_m_0_50_cc_maxPt_PY, &b_kaon_m_0_50_cc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.50_cc_maxPt_PZ", &kaon_m_0_50_cc_maxPt_PZ, &b_kaon_m_0_50_cc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.50_cc_maxPt_PE", &kaon_m_0_50_cc_maxPt_PE, &b_kaon_m_0_50_cc_maxPt_PE);
   fChain->SetBranchAddress("kaon_m_0.50_nc_mult", &kaon_m_0_50_nc_mult, &b_kaon_m_0_50_nc_mult);
   fChain->SetBranchAddress("kaon_m_0.50_nc_sPT", &kaon_m_0_50_nc_sPT, &b_kaon_m_0_50_nc_sPT);
   fChain->SetBranchAddress("kaon_m_0.50_nc_vPT", &kaon_m_0_50_nc_vPT, &b_kaon_m_0_50_nc_vPT);
   fChain->SetBranchAddress("kaon_m_0.50_nc_PX", &kaon_m_0_50_nc_PX, &b_kaon_m_0_50_nc_PX);
   fChain->SetBranchAddress("kaon_m_0.50_nc_PY", &kaon_m_0_50_nc_PY, &b_kaon_m_0_50_nc_PY);
   fChain->SetBranchAddress("kaon_m_0.50_nc_PZ", &kaon_m_0_50_nc_PZ, &b_kaon_m_0_50_nc_PZ);
   fChain->SetBranchAddress("kaon_m_0.50_nc_asy_P", &kaon_m_0_50_nc_asy_P, &b_kaon_m_0_50_nc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.50_nc_asy_PT", &kaon_m_0_50_nc_asy_PT, &b_kaon_m_0_50_nc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.50_nc_asy_PX", &kaon_m_0_50_nc_asy_PX, &b_kaon_m_0_50_nc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.50_nc_asy_PY", &kaon_m_0_50_nc_asy_PY, &b_kaon_m_0_50_nc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.50_nc_asy_PZ", &kaon_m_0_50_nc_asy_PZ, &b_kaon_m_0_50_nc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.50_nc_deltaEta", &kaon_m_0_50_nc_deltaEta, &b_kaon_m_0_50_nc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.50_nc_deltaPhi", &kaon_m_0_50_nc_deltaPhi, &b_kaon_m_0_50_nc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.50_nc_IT", &kaon_m_0_50_nc_IT, &b_kaon_m_0_50_nc_IT);
   fChain->SetBranchAddress("kaon_m_0.50_nc_maxPt_PT", &kaon_m_0_50_nc_maxPt_PT, &b_kaon_m_0_50_nc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.50_nc_maxPt_PX", &kaon_m_0_50_nc_maxPt_PX, &b_kaon_m_0_50_nc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.50_nc_maxPt_PY", &kaon_m_0_50_nc_maxPt_PY, &b_kaon_m_0_50_nc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.50_nc_maxPt_PZ", &kaon_m_0_50_nc_maxPt_PZ, &b_kaon_m_0_50_nc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.50_IT", &kaon_m_0_50_IT, &b_kaon_m_0_50_IT);
   fChain->SetBranchAddress("kaon_m_0.60_cc_mult", &kaon_m_0_60_cc_mult, &b_kaon_m_0_60_cc_mult);
   fChain->SetBranchAddress("kaon_m_0.60_cc_sPT", &kaon_m_0_60_cc_sPT, &b_kaon_m_0_60_cc_sPT);
   fChain->SetBranchAddress("kaon_m_0.60_cc_vPT", &kaon_m_0_60_cc_vPT, &b_kaon_m_0_60_cc_vPT);
   fChain->SetBranchAddress("kaon_m_0.60_cc_PX", &kaon_m_0_60_cc_PX, &b_kaon_m_0_60_cc_PX);
   fChain->SetBranchAddress("kaon_m_0.60_cc_PY", &kaon_m_0_60_cc_PY, &b_kaon_m_0_60_cc_PY);
   fChain->SetBranchAddress("kaon_m_0.60_cc_PZ", &kaon_m_0_60_cc_PZ, &b_kaon_m_0_60_cc_PZ);
   fChain->SetBranchAddress("kaon_m_0.60_cc_asy_P", &kaon_m_0_60_cc_asy_P, &b_kaon_m_0_60_cc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.60_cc_asy_PT", &kaon_m_0_60_cc_asy_PT, &b_kaon_m_0_60_cc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.60_cc_asy_PX", &kaon_m_0_60_cc_asy_PX, &b_kaon_m_0_60_cc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.60_cc_asy_PY", &kaon_m_0_60_cc_asy_PY, &b_kaon_m_0_60_cc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.60_cc_asy_PZ", &kaon_m_0_60_cc_asy_PZ, &b_kaon_m_0_60_cc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.60_cc_deltaEta", &kaon_m_0_60_cc_deltaEta, &b_kaon_m_0_60_cc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.60_cc_deltaPhi", &kaon_m_0_60_cc_deltaPhi, &b_kaon_m_0_60_cc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.60_cc_IT", &kaon_m_0_60_cc_IT, &b_kaon_m_0_60_cc_IT);
   fChain->SetBranchAddress("kaon_m_0.60_cc_maxPt_Q", &kaon_m_0_60_cc_maxPt_Q, &b_kaon_m_0_60_cc_maxPt_Q);
   fChain->SetBranchAddress("kaon_m_0.60_cc_maxPt_PT", &kaon_m_0_60_cc_maxPt_PT, &b_kaon_m_0_60_cc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.60_cc_maxPt_PX", &kaon_m_0_60_cc_maxPt_PX, &b_kaon_m_0_60_cc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.60_cc_maxPt_PY", &kaon_m_0_60_cc_maxPt_PY, &b_kaon_m_0_60_cc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.60_cc_maxPt_PZ", &kaon_m_0_60_cc_maxPt_PZ, &b_kaon_m_0_60_cc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.60_cc_maxPt_PE", &kaon_m_0_60_cc_maxPt_PE, &b_kaon_m_0_60_cc_maxPt_PE);
   fChain->SetBranchAddress("kaon_m_0.60_nc_mult", &kaon_m_0_60_nc_mult, &b_kaon_m_0_60_nc_mult);
   fChain->SetBranchAddress("kaon_m_0.60_nc_sPT", &kaon_m_0_60_nc_sPT, &b_kaon_m_0_60_nc_sPT);
   fChain->SetBranchAddress("kaon_m_0.60_nc_vPT", &kaon_m_0_60_nc_vPT, &b_kaon_m_0_60_nc_vPT);
   fChain->SetBranchAddress("kaon_m_0.60_nc_PX", &kaon_m_0_60_nc_PX, &b_kaon_m_0_60_nc_PX);
   fChain->SetBranchAddress("kaon_m_0.60_nc_PY", &kaon_m_0_60_nc_PY, &b_kaon_m_0_60_nc_PY);
   fChain->SetBranchAddress("kaon_m_0.60_nc_PZ", &kaon_m_0_60_nc_PZ, &b_kaon_m_0_60_nc_PZ);
   fChain->SetBranchAddress("kaon_m_0.60_nc_asy_P", &kaon_m_0_60_nc_asy_P, &b_kaon_m_0_60_nc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.60_nc_asy_PT", &kaon_m_0_60_nc_asy_PT, &b_kaon_m_0_60_nc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.60_nc_asy_PX", &kaon_m_0_60_nc_asy_PX, &b_kaon_m_0_60_nc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.60_nc_asy_PY", &kaon_m_0_60_nc_asy_PY, &b_kaon_m_0_60_nc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.60_nc_asy_PZ", &kaon_m_0_60_nc_asy_PZ, &b_kaon_m_0_60_nc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.60_nc_deltaEta", &kaon_m_0_60_nc_deltaEta, &b_kaon_m_0_60_nc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.60_nc_deltaPhi", &kaon_m_0_60_nc_deltaPhi, &b_kaon_m_0_60_nc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.60_nc_IT", &kaon_m_0_60_nc_IT, &b_kaon_m_0_60_nc_IT);
   fChain->SetBranchAddress("kaon_m_0.60_nc_maxPt_PT", &kaon_m_0_60_nc_maxPt_PT, &b_kaon_m_0_60_nc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.60_nc_maxPt_PX", &kaon_m_0_60_nc_maxPt_PX, &b_kaon_m_0_60_nc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.60_nc_maxPt_PY", &kaon_m_0_60_nc_maxPt_PY, &b_kaon_m_0_60_nc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.60_nc_maxPt_PZ", &kaon_m_0_60_nc_maxPt_PZ, &b_kaon_m_0_60_nc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.60_IT", &kaon_m_0_60_IT, &b_kaon_m_0_60_IT);
   fChain->SetBranchAddress("kaon_m_0.70_cc_mult", &kaon_m_0_70_cc_mult, &b_kaon_m_0_70_cc_mult);
   fChain->SetBranchAddress("kaon_m_0.70_cc_sPT", &kaon_m_0_70_cc_sPT, &b_kaon_m_0_70_cc_sPT);
   fChain->SetBranchAddress("kaon_m_0.70_cc_vPT", &kaon_m_0_70_cc_vPT, &b_kaon_m_0_70_cc_vPT);
   fChain->SetBranchAddress("kaon_m_0.70_cc_PX", &kaon_m_0_70_cc_PX, &b_kaon_m_0_70_cc_PX);
   fChain->SetBranchAddress("kaon_m_0.70_cc_PY", &kaon_m_0_70_cc_PY, &b_kaon_m_0_70_cc_PY);
   fChain->SetBranchAddress("kaon_m_0.70_cc_PZ", &kaon_m_0_70_cc_PZ, &b_kaon_m_0_70_cc_PZ);
   fChain->SetBranchAddress("kaon_m_0.70_cc_asy_P", &kaon_m_0_70_cc_asy_P, &b_kaon_m_0_70_cc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.70_cc_asy_PT", &kaon_m_0_70_cc_asy_PT, &b_kaon_m_0_70_cc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.70_cc_asy_PX", &kaon_m_0_70_cc_asy_PX, &b_kaon_m_0_70_cc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.70_cc_asy_PY", &kaon_m_0_70_cc_asy_PY, &b_kaon_m_0_70_cc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.70_cc_asy_PZ", &kaon_m_0_70_cc_asy_PZ, &b_kaon_m_0_70_cc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.70_cc_deltaEta", &kaon_m_0_70_cc_deltaEta, &b_kaon_m_0_70_cc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.70_cc_deltaPhi", &kaon_m_0_70_cc_deltaPhi, &b_kaon_m_0_70_cc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.70_cc_IT", &kaon_m_0_70_cc_IT, &b_kaon_m_0_70_cc_IT);
   fChain->SetBranchAddress("kaon_m_0.70_cc_maxPt_Q", &kaon_m_0_70_cc_maxPt_Q, &b_kaon_m_0_70_cc_maxPt_Q);
   fChain->SetBranchAddress("kaon_m_0.70_cc_maxPt_PT", &kaon_m_0_70_cc_maxPt_PT, &b_kaon_m_0_70_cc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.70_cc_maxPt_PX", &kaon_m_0_70_cc_maxPt_PX, &b_kaon_m_0_70_cc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.70_cc_maxPt_PY", &kaon_m_0_70_cc_maxPt_PY, &b_kaon_m_0_70_cc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.70_cc_maxPt_PZ", &kaon_m_0_70_cc_maxPt_PZ, &b_kaon_m_0_70_cc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.70_cc_maxPt_PE", &kaon_m_0_70_cc_maxPt_PE, &b_kaon_m_0_70_cc_maxPt_PE);
   fChain->SetBranchAddress("kaon_m_0.70_nc_mult", &kaon_m_0_70_nc_mult, &b_kaon_m_0_70_nc_mult);
   fChain->SetBranchAddress("kaon_m_0.70_nc_sPT", &kaon_m_0_70_nc_sPT, &b_kaon_m_0_70_nc_sPT);
   fChain->SetBranchAddress("kaon_m_0.70_nc_vPT", &kaon_m_0_70_nc_vPT, &b_kaon_m_0_70_nc_vPT);
   fChain->SetBranchAddress("kaon_m_0.70_nc_PX", &kaon_m_0_70_nc_PX, &b_kaon_m_0_70_nc_PX);
   fChain->SetBranchAddress("kaon_m_0.70_nc_PY", &kaon_m_0_70_nc_PY, &b_kaon_m_0_70_nc_PY);
   fChain->SetBranchAddress("kaon_m_0.70_nc_PZ", &kaon_m_0_70_nc_PZ, &b_kaon_m_0_70_nc_PZ);
   fChain->SetBranchAddress("kaon_m_0.70_nc_asy_P", &kaon_m_0_70_nc_asy_P, &b_kaon_m_0_70_nc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.70_nc_asy_PT", &kaon_m_0_70_nc_asy_PT, &b_kaon_m_0_70_nc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.70_nc_asy_PX", &kaon_m_0_70_nc_asy_PX, &b_kaon_m_0_70_nc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.70_nc_asy_PY", &kaon_m_0_70_nc_asy_PY, &b_kaon_m_0_70_nc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.70_nc_asy_PZ", &kaon_m_0_70_nc_asy_PZ, &b_kaon_m_0_70_nc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.70_nc_deltaEta", &kaon_m_0_70_nc_deltaEta, &b_kaon_m_0_70_nc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.70_nc_deltaPhi", &kaon_m_0_70_nc_deltaPhi, &b_kaon_m_0_70_nc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.70_nc_IT", &kaon_m_0_70_nc_IT, &b_kaon_m_0_70_nc_IT);
   fChain->SetBranchAddress("kaon_m_0.70_nc_maxPt_PT", &kaon_m_0_70_nc_maxPt_PT, &b_kaon_m_0_70_nc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.70_nc_maxPt_PX", &kaon_m_0_70_nc_maxPt_PX, &b_kaon_m_0_70_nc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.70_nc_maxPt_PY", &kaon_m_0_70_nc_maxPt_PY, &b_kaon_m_0_70_nc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.70_nc_maxPt_PZ", &kaon_m_0_70_nc_maxPt_PZ, &b_kaon_m_0_70_nc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.70_IT", &kaon_m_0_70_IT, &b_kaon_m_0_70_IT);
   fChain->SetBranchAddress("kaon_m_0.80_cc_mult", &kaon_m_0_80_cc_mult, &b_kaon_m_0_80_cc_mult);
   fChain->SetBranchAddress("kaon_m_0.80_cc_sPT", &kaon_m_0_80_cc_sPT, &b_kaon_m_0_80_cc_sPT);
   fChain->SetBranchAddress("kaon_m_0.80_cc_vPT", &kaon_m_0_80_cc_vPT, &b_kaon_m_0_80_cc_vPT);
   fChain->SetBranchAddress("kaon_m_0.80_cc_PX", &kaon_m_0_80_cc_PX, &b_kaon_m_0_80_cc_PX);
   fChain->SetBranchAddress("kaon_m_0.80_cc_PY", &kaon_m_0_80_cc_PY, &b_kaon_m_0_80_cc_PY);
   fChain->SetBranchAddress("kaon_m_0.80_cc_PZ", &kaon_m_0_80_cc_PZ, &b_kaon_m_0_80_cc_PZ);
   fChain->SetBranchAddress("kaon_m_0.80_cc_asy_P", &kaon_m_0_80_cc_asy_P, &b_kaon_m_0_80_cc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.80_cc_asy_PT", &kaon_m_0_80_cc_asy_PT, &b_kaon_m_0_80_cc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.80_cc_asy_PX", &kaon_m_0_80_cc_asy_PX, &b_kaon_m_0_80_cc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.80_cc_asy_PY", &kaon_m_0_80_cc_asy_PY, &b_kaon_m_0_80_cc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.80_cc_asy_PZ", &kaon_m_0_80_cc_asy_PZ, &b_kaon_m_0_80_cc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.80_cc_deltaEta", &kaon_m_0_80_cc_deltaEta, &b_kaon_m_0_80_cc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.80_cc_deltaPhi", &kaon_m_0_80_cc_deltaPhi, &b_kaon_m_0_80_cc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.80_cc_IT", &kaon_m_0_80_cc_IT, &b_kaon_m_0_80_cc_IT);
   fChain->SetBranchAddress("kaon_m_0.80_cc_maxPt_Q", &kaon_m_0_80_cc_maxPt_Q, &b_kaon_m_0_80_cc_maxPt_Q);
   fChain->SetBranchAddress("kaon_m_0.80_cc_maxPt_PT", &kaon_m_0_80_cc_maxPt_PT, &b_kaon_m_0_80_cc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.80_cc_maxPt_PX", &kaon_m_0_80_cc_maxPt_PX, &b_kaon_m_0_80_cc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.80_cc_maxPt_PY", &kaon_m_0_80_cc_maxPt_PY, &b_kaon_m_0_80_cc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.80_cc_maxPt_PZ", &kaon_m_0_80_cc_maxPt_PZ, &b_kaon_m_0_80_cc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.80_cc_maxPt_PE", &kaon_m_0_80_cc_maxPt_PE, &b_kaon_m_0_80_cc_maxPt_PE);
   fChain->SetBranchAddress("kaon_m_0.80_nc_mult", &kaon_m_0_80_nc_mult, &b_kaon_m_0_80_nc_mult);
   fChain->SetBranchAddress("kaon_m_0.80_nc_sPT", &kaon_m_0_80_nc_sPT, &b_kaon_m_0_80_nc_sPT);
   fChain->SetBranchAddress("kaon_m_0.80_nc_vPT", &kaon_m_0_80_nc_vPT, &b_kaon_m_0_80_nc_vPT);
   fChain->SetBranchAddress("kaon_m_0.80_nc_PX", &kaon_m_0_80_nc_PX, &b_kaon_m_0_80_nc_PX);
   fChain->SetBranchAddress("kaon_m_0.80_nc_PY", &kaon_m_0_80_nc_PY, &b_kaon_m_0_80_nc_PY);
   fChain->SetBranchAddress("kaon_m_0.80_nc_PZ", &kaon_m_0_80_nc_PZ, &b_kaon_m_0_80_nc_PZ);
   fChain->SetBranchAddress("kaon_m_0.80_nc_asy_P", &kaon_m_0_80_nc_asy_P, &b_kaon_m_0_80_nc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.80_nc_asy_PT", &kaon_m_0_80_nc_asy_PT, &b_kaon_m_0_80_nc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.80_nc_asy_PX", &kaon_m_0_80_nc_asy_PX, &b_kaon_m_0_80_nc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.80_nc_asy_PY", &kaon_m_0_80_nc_asy_PY, &b_kaon_m_0_80_nc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.80_nc_asy_PZ", &kaon_m_0_80_nc_asy_PZ, &b_kaon_m_0_80_nc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.80_nc_deltaEta", &kaon_m_0_80_nc_deltaEta, &b_kaon_m_0_80_nc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.80_nc_deltaPhi", &kaon_m_0_80_nc_deltaPhi, &b_kaon_m_0_80_nc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.80_nc_IT", &kaon_m_0_80_nc_IT, &b_kaon_m_0_80_nc_IT);
   fChain->SetBranchAddress("kaon_m_0.80_nc_maxPt_PT", &kaon_m_0_80_nc_maxPt_PT, &b_kaon_m_0_80_nc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.80_nc_maxPt_PX", &kaon_m_0_80_nc_maxPt_PX, &b_kaon_m_0_80_nc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.80_nc_maxPt_PY", &kaon_m_0_80_nc_maxPt_PY, &b_kaon_m_0_80_nc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.80_nc_maxPt_PZ", &kaon_m_0_80_nc_maxPt_PZ, &b_kaon_m_0_80_nc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.80_IT", &kaon_m_0_80_IT, &b_kaon_m_0_80_IT);
   fChain->SetBranchAddress("kaon_m_0.90_cc_mult", &kaon_m_0_90_cc_mult, &b_kaon_m_0_90_cc_mult);
   fChain->SetBranchAddress("kaon_m_0.90_cc_sPT", &kaon_m_0_90_cc_sPT, &b_kaon_m_0_90_cc_sPT);
   fChain->SetBranchAddress("kaon_m_0.90_cc_vPT", &kaon_m_0_90_cc_vPT, &b_kaon_m_0_90_cc_vPT);
   fChain->SetBranchAddress("kaon_m_0.90_cc_PX", &kaon_m_0_90_cc_PX, &b_kaon_m_0_90_cc_PX);
   fChain->SetBranchAddress("kaon_m_0.90_cc_PY", &kaon_m_0_90_cc_PY, &b_kaon_m_0_90_cc_PY);
   fChain->SetBranchAddress("kaon_m_0.90_cc_PZ", &kaon_m_0_90_cc_PZ, &b_kaon_m_0_90_cc_PZ);
   fChain->SetBranchAddress("kaon_m_0.90_cc_asy_P", &kaon_m_0_90_cc_asy_P, &b_kaon_m_0_90_cc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.90_cc_asy_PT", &kaon_m_0_90_cc_asy_PT, &b_kaon_m_0_90_cc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.90_cc_asy_PX", &kaon_m_0_90_cc_asy_PX, &b_kaon_m_0_90_cc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.90_cc_asy_PY", &kaon_m_0_90_cc_asy_PY, &b_kaon_m_0_90_cc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.90_cc_asy_PZ", &kaon_m_0_90_cc_asy_PZ, &b_kaon_m_0_90_cc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.90_cc_deltaEta", &kaon_m_0_90_cc_deltaEta, &b_kaon_m_0_90_cc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.90_cc_deltaPhi", &kaon_m_0_90_cc_deltaPhi, &b_kaon_m_0_90_cc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.90_cc_IT", &kaon_m_0_90_cc_IT, &b_kaon_m_0_90_cc_IT);
   fChain->SetBranchAddress("kaon_m_0.90_cc_maxPt_Q", &kaon_m_0_90_cc_maxPt_Q, &b_kaon_m_0_90_cc_maxPt_Q);
   fChain->SetBranchAddress("kaon_m_0.90_cc_maxPt_PT", &kaon_m_0_90_cc_maxPt_PT, &b_kaon_m_0_90_cc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.90_cc_maxPt_PX", &kaon_m_0_90_cc_maxPt_PX, &b_kaon_m_0_90_cc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.90_cc_maxPt_PY", &kaon_m_0_90_cc_maxPt_PY, &b_kaon_m_0_90_cc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.90_cc_maxPt_PZ", &kaon_m_0_90_cc_maxPt_PZ, &b_kaon_m_0_90_cc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.90_cc_maxPt_PE", &kaon_m_0_90_cc_maxPt_PE, &b_kaon_m_0_90_cc_maxPt_PE);
   fChain->SetBranchAddress("kaon_m_0.90_nc_mult", &kaon_m_0_90_nc_mult, &b_kaon_m_0_90_nc_mult);
   fChain->SetBranchAddress("kaon_m_0.90_nc_sPT", &kaon_m_0_90_nc_sPT, &b_kaon_m_0_90_nc_sPT);
   fChain->SetBranchAddress("kaon_m_0.90_nc_vPT", &kaon_m_0_90_nc_vPT, &b_kaon_m_0_90_nc_vPT);
   fChain->SetBranchAddress("kaon_m_0.90_nc_PX", &kaon_m_0_90_nc_PX, &b_kaon_m_0_90_nc_PX);
   fChain->SetBranchAddress("kaon_m_0.90_nc_PY", &kaon_m_0_90_nc_PY, &b_kaon_m_0_90_nc_PY);
   fChain->SetBranchAddress("kaon_m_0.90_nc_PZ", &kaon_m_0_90_nc_PZ, &b_kaon_m_0_90_nc_PZ);
   fChain->SetBranchAddress("kaon_m_0.90_nc_asy_P", &kaon_m_0_90_nc_asy_P, &b_kaon_m_0_90_nc_asy_P);
   fChain->SetBranchAddress("kaon_m_0.90_nc_asy_PT", &kaon_m_0_90_nc_asy_PT, &b_kaon_m_0_90_nc_asy_PT);
   fChain->SetBranchAddress("kaon_m_0.90_nc_asy_PX", &kaon_m_0_90_nc_asy_PX, &b_kaon_m_0_90_nc_asy_PX);
   fChain->SetBranchAddress("kaon_m_0.90_nc_asy_PY", &kaon_m_0_90_nc_asy_PY, &b_kaon_m_0_90_nc_asy_PY);
   fChain->SetBranchAddress("kaon_m_0.90_nc_asy_PZ", &kaon_m_0_90_nc_asy_PZ, &b_kaon_m_0_90_nc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_0.90_nc_deltaEta", &kaon_m_0_90_nc_deltaEta, &b_kaon_m_0_90_nc_deltaEta);
   fChain->SetBranchAddress("kaon_m_0.90_nc_deltaPhi", &kaon_m_0_90_nc_deltaPhi, &b_kaon_m_0_90_nc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_0.90_nc_IT", &kaon_m_0_90_nc_IT, &b_kaon_m_0_90_nc_IT);
   fChain->SetBranchAddress("kaon_m_0.90_nc_maxPt_PT", &kaon_m_0_90_nc_maxPt_PT, &b_kaon_m_0_90_nc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_0.90_nc_maxPt_PX", &kaon_m_0_90_nc_maxPt_PX, &b_kaon_m_0_90_nc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_0.90_nc_maxPt_PY", &kaon_m_0_90_nc_maxPt_PY, &b_kaon_m_0_90_nc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_0.90_nc_maxPt_PZ", &kaon_m_0_90_nc_maxPt_PZ, &b_kaon_m_0_90_nc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_0.90_IT", &kaon_m_0_90_IT, &b_kaon_m_0_90_IT);
   fChain->SetBranchAddress("kaon_m_1.00_cc_mult", &kaon_m_1_00_cc_mult, &b_kaon_m_1_00_cc_mult);
   fChain->SetBranchAddress("kaon_m_1.00_cc_sPT", &kaon_m_1_00_cc_sPT, &b_kaon_m_1_00_cc_sPT);
   fChain->SetBranchAddress("kaon_m_1.00_cc_vPT", &kaon_m_1_00_cc_vPT, &b_kaon_m_1_00_cc_vPT);
   fChain->SetBranchAddress("kaon_m_1.00_cc_PX", &kaon_m_1_00_cc_PX, &b_kaon_m_1_00_cc_PX);
   fChain->SetBranchAddress("kaon_m_1.00_cc_PY", &kaon_m_1_00_cc_PY, &b_kaon_m_1_00_cc_PY);
   fChain->SetBranchAddress("kaon_m_1.00_cc_PZ", &kaon_m_1_00_cc_PZ, &b_kaon_m_1_00_cc_PZ);
   fChain->SetBranchAddress("kaon_m_1.00_cc_asy_P", &kaon_m_1_00_cc_asy_P, &b_kaon_m_1_00_cc_asy_P);
   fChain->SetBranchAddress("kaon_m_1.00_cc_asy_PT", &kaon_m_1_00_cc_asy_PT, &b_kaon_m_1_00_cc_asy_PT);
   fChain->SetBranchAddress("kaon_m_1.00_cc_asy_PX", &kaon_m_1_00_cc_asy_PX, &b_kaon_m_1_00_cc_asy_PX);
   fChain->SetBranchAddress("kaon_m_1.00_cc_asy_PY", &kaon_m_1_00_cc_asy_PY, &b_kaon_m_1_00_cc_asy_PY);
   fChain->SetBranchAddress("kaon_m_1.00_cc_asy_PZ", &kaon_m_1_00_cc_asy_PZ, &b_kaon_m_1_00_cc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_1.00_cc_deltaEta", &kaon_m_1_00_cc_deltaEta, &b_kaon_m_1_00_cc_deltaEta);
   fChain->SetBranchAddress("kaon_m_1.00_cc_deltaPhi", &kaon_m_1_00_cc_deltaPhi, &b_kaon_m_1_00_cc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_1.00_cc_IT", &kaon_m_1_00_cc_IT, &b_kaon_m_1_00_cc_IT);
   fChain->SetBranchAddress("kaon_m_1.00_cc_maxPt_Q", &kaon_m_1_00_cc_maxPt_Q, &b_kaon_m_1_00_cc_maxPt_Q);
   fChain->SetBranchAddress("kaon_m_1.00_cc_maxPt_PT", &kaon_m_1_00_cc_maxPt_PT, &b_kaon_m_1_00_cc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_1.00_cc_maxPt_PX", &kaon_m_1_00_cc_maxPt_PX, &b_kaon_m_1_00_cc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_1.00_cc_maxPt_PY", &kaon_m_1_00_cc_maxPt_PY, &b_kaon_m_1_00_cc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_1.00_cc_maxPt_PZ", &kaon_m_1_00_cc_maxPt_PZ, &b_kaon_m_1_00_cc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_1.00_cc_maxPt_PE", &kaon_m_1_00_cc_maxPt_PE, &b_kaon_m_1_00_cc_maxPt_PE);
   fChain->SetBranchAddress("kaon_m_1.00_nc_mult", &kaon_m_1_00_nc_mult, &b_kaon_m_1_00_nc_mult);
   fChain->SetBranchAddress("kaon_m_1.00_nc_sPT", &kaon_m_1_00_nc_sPT, &b_kaon_m_1_00_nc_sPT);
   fChain->SetBranchAddress("kaon_m_1.00_nc_vPT", &kaon_m_1_00_nc_vPT, &b_kaon_m_1_00_nc_vPT);
   fChain->SetBranchAddress("kaon_m_1.00_nc_PX", &kaon_m_1_00_nc_PX, &b_kaon_m_1_00_nc_PX);
   fChain->SetBranchAddress("kaon_m_1.00_nc_PY", &kaon_m_1_00_nc_PY, &b_kaon_m_1_00_nc_PY);
   fChain->SetBranchAddress("kaon_m_1.00_nc_PZ", &kaon_m_1_00_nc_PZ, &b_kaon_m_1_00_nc_PZ);
   fChain->SetBranchAddress("kaon_m_1.00_nc_asy_P", &kaon_m_1_00_nc_asy_P, &b_kaon_m_1_00_nc_asy_P);
   fChain->SetBranchAddress("kaon_m_1.00_nc_asy_PT", &kaon_m_1_00_nc_asy_PT, &b_kaon_m_1_00_nc_asy_PT);
   fChain->SetBranchAddress("kaon_m_1.00_nc_asy_PX", &kaon_m_1_00_nc_asy_PX, &b_kaon_m_1_00_nc_asy_PX);
   fChain->SetBranchAddress("kaon_m_1.00_nc_asy_PY", &kaon_m_1_00_nc_asy_PY, &b_kaon_m_1_00_nc_asy_PY);
   fChain->SetBranchAddress("kaon_m_1.00_nc_asy_PZ", &kaon_m_1_00_nc_asy_PZ, &b_kaon_m_1_00_nc_asy_PZ);
   fChain->SetBranchAddress("kaon_m_1.00_nc_deltaEta", &kaon_m_1_00_nc_deltaEta, &b_kaon_m_1_00_nc_deltaEta);
   fChain->SetBranchAddress("kaon_m_1.00_nc_deltaPhi", &kaon_m_1_00_nc_deltaPhi, &b_kaon_m_1_00_nc_deltaPhi);
   fChain->SetBranchAddress("kaon_m_1.00_nc_IT", &kaon_m_1_00_nc_IT, &b_kaon_m_1_00_nc_IT);
   fChain->SetBranchAddress("kaon_m_1.00_nc_maxPt_PT", &kaon_m_1_00_nc_maxPt_PT, &b_kaon_m_1_00_nc_maxPt_PT);
   fChain->SetBranchAddress("kaon_m_1.00_nc_maxPt_PX", &kaon_m_1_00_nc_maxPt_PX, &b_kaon_m_1_00_nc_maxPt_PX);
   fChain->SetBranchAddress("kaon_m_1.00_nc_maxPt_PY", &kaon_m_1_00_nc_maxPt_PY, &b_kaon_m_1_00_nc_maxPt_PY);
   fChain->SetBranchAddress("kaon_m_1.00_nc_maxPt_PZ", &kaon_m_1_00_nc_maxPt_PZ, &b_kaon_m_1_00_nc_maxPt_PZ);
   fChain->SetBranchAddress("kaon_m_1.00_IT", &kaon_m_1_00_IT, &b_kaon_m_1_00_IT);
   fChain->SetBranchAddress("kaon_p_OWNPV_X", &kaon_p_OWNPV_X, &b_kaon_p_OWNPV_X);
   fChain->SetBranchAddress("kaon_p_OWNPV_Y", &kaon_p_OWNPV_Y, &b_kaon_p_OWNPV_Y);
   fChain->SetBranchAddress("kaon_p_OWNPV_Z", &kaon_p_OWNPV_Z, &b_kaon_p_OWNPV_Z);
   fChain->SetBranchAddress("kaon_p_OWNPV_XERR", &kaon_p_OWNPV_XERR, &b_kaon_p_OWNPV_XERR);
   fChain->SetBranchAddress("kaon_p_OWNPV_YERR", &kaon_p_OWNPV_YERR, &b_kaon_p_OWNPV_YERR);
   fChain->SetBranchAddress("kaon_p_OWNPV_ZERR", &kaon_p_OWNPV_ZERR, &b_kaon_p_OWNPV_ZERR);
   fChain->SetBranchAddress("kaon_p_OWNPV_CHI2", &kaon_p_OWNPV_CHI2, &b_kaon_p_OWNPV_CHI2);
   fChain->SetBranchAddress("kaon_p_OWNPV_NDOF", &kaon_p_OWNPV_NDOF, &b_kaon_p_OWNPV_NDOF);
   fChain->SetBranchAddress("kaon_p_OWNPV_COV_", kaon_p_OWNPV_COV_, &b_kaon_p_OWNPV_COV_);
   fChain->SetBranchAddress("kaon_p_IP_OWNPV", &kaon_p_IP_OWNPV, &b_kaon_p_IP_OWNPV);
   fChain->SetBranchAddress("kaon_p_IPCHI2_OWNPV", &kaon_p_IPCHI2_OWNPV, &b_kaon_p_IPCHI2_OWNPV);
   fChain->SetBranchAddress("kaon_p_ORIVX_X", &kaon_p_ORIVX_X, &b_kaon_p_ORIVX_X);
   fChain->SetBranchAddress("kaon_p_ORIVX_Y", &kaon_p_ORIVX_Y, &b_kaon_p_ORIVX_Y);
   fChain->SetBranchAddress("kaon_p_ORIVX_Z", &kaon_p_ORIVX_Z, &b_kaon_p_ORIVX_Z);
   fChain->SetBranchAddress("kaon_p_ORIVX_XERR", &kaon_p_ORIVX_XERR, &b_kaon_p_ORIVX_XERR);
   fChain->SetBranchAddress("kaon_p_ORIVX_YERR", &kaon_p_ORIVX_YERR, &b_kaon_p_ORIVX_YERR);
   fChain->SetBranchAddress("kaon_p_ORIVX_ZERR", &kaon_p_ORIVX_ZERR, &b_kaon_p_ORIVX_ZERR);
   fChain->SetBranchAddress("kaon_p_ORIVX_CHI2", &kaon_p_ORIVX_CHI2, &b_kaon_p_ORIVX_CHI2);
   fChain->SetBranchAddress("kaon_p_ORIVX_NDOF", &kaon_p_ORIVX_NDOF, &b_kaon_p_ORIVX_NDOF);
   fChain->SetBranchAddress("kaon_p_ORIVX_COV_", kaon_p_ORIVX_COV_, &b_kaon_p_ORIVX_COV_);
   fChain->SetBranchAddress("kaon_p_P", &kaon_p_P, &b_kaon_p_P);
   fChain->SetBranchAddress("kaon_p_PT", &kaon_p_PT, &b_kaon_p_PT);
   fChain->SetBranchAddress("kaon_p_PE", &kaon_p_PE, &b_kaon_p_PE);
   fChain->SetBranchAddress("kaon_p_PX", &kaon_p_PX, &b_kaon_p_PX);
   fChain->SetBranchAddress("kaon_p_PY", &kaon_p_PY, &b_kaon_p_PY);
   fChain->SetBranchAddress("kaon_p_PZ", &kaon_p_PZ, &b_kaon_p_PZ);
   fChain->SetBranchAddress("kaon_p_M", &kaon_p_M, &b_kaon_p_M);
   fChain->SetBranchAddress("kaon_p_TRUEID", &kaon_p_TRUEID, &b_kaon_p_TRUEID);
   fChain->SetBranchAddress("kaon_p_MC_MOTHER_ID", &kaon_p_MC_MOTHER_ID, &b_kaon_p_MC_MOTHER_ID);
   fChain->SetBranchAddress("kaon_p_MC_MOTHER_KEY", &kaon_p_MC_MOTHER_KEY, &b_kaon_p_MC_MOTHER_KEY);
   fChain->SetBranchAddress("kaon_p_MC_GD_MOTHER_ID", &kaon_p_MC_GD_MOTHER_ID, &b_kaon_p_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("kaon_p_MC_GD_MOTHER_KEY", &kaon_p_MC_GD_MOTHER_KEY, &b_kaon_p_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("kaon_p_MC_GD_GD_MOTHER_ID", &kaon_p_MC_GD_GD_MOTHER_ID, &b_kaon_p_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("kaon_p_MC_GD_GD_MOTHER_KEY", &kaon_p_MC_GD_GD_MOTHER_KEY, &b_kaon_p_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("kaon_p_TRUEP_E", &kaon_p_TRUEP_E, &b_kaon_p_TRUEP_E);
   fChain->SetBranchAddress("kaon_p_TRUEP_X", &kaon_p_TRUEP_X, &b_kaon_p_TRUEP_X);
   fChain->SetBranchAddress("kaon_p_TRUEP_Y", &kaon_p_TRUEP_Y, &b_kaon_p_TRUEP_Y);
   fChain->SetBranchAddress("kaon_p_TRUEP_Z", &kaon_p_TRUEP_Z, &b_kaon_p_TRUEP_Z);
   fChain->SetBranchAddress("kaon_p_TRUEPT", &kaon_p_TRUEPT, &b_kaon_p_TRUEPT);
   fChain->SetBranchAddress("kaon_p_TRUEORIGINVERTEX_X", &kaon_p_TRUEORIGINVERTEX_X, &b_kaon_p_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("kaon_p_TRUEORIGINVERTEX_Y", &kaon_p_TRUEORIGINVERTEX_Y, &b_kaon_p_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("kaon_p_TRUEORIGINVERTEX_Z", &kaon_p_TRUEORIGINVERTEX_Z, &b_kaon_p_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("kaon_p_TRUEENDVERTEX_X", &kaon_p_TRUEENDVERTEX_X, &b_kaon_p_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("kaon_p_TRUEENDVERTEX_Y", &kaon_p_TRUEENDVERTEX_Y, &b_kaon_p_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("kaon_p_TRUEENDVERTEX_Z", &kaon_p_TRUEENDVERTEX_Z, &b_kaon_p_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("kaon_p_TRUEISSTABLE", &kaon_p_TRUEISSTABLE, &b_kaon_p_TRUEISSTABLE);
   fChain->SetBranchAddress("kaon_p_TRUETAU", &kaon_p_TRUETAU, &b_kaon_p_TRUETAU);
   fChain->SetBranchAddress("kaon_p_Reconstructible", &kaon_p_Reconstructible, &b_kaon_p_Reconstructible);
   fChain->SetBranchAddress("kaon_p_Reconstructed", &kaon_p_Reconstructed, &b_kaon_p_Reconstructed);
   fChain->SetBranchAddress("kaon_p_ProtoParticles", &kaon_p_ProtoParticles, &b_kaon_p_ProtoParticles);
   fChain->SetBranchAddress("kaon_p_PP_PX", kaon_p_PP_PX, &b_kaon_p_PP_PX);
   fChain->SetBranchAddress("kaon_p_PP_PY", kaon_p_PP_PY, &b_kaon_p_PP_PY);
   fChain->SetBranchAddress("kaon_p_PP_PZ", kaon_p_PP_PZ, &b_kaon_p_PP_PZ);
   fChain->SetBranchAddress("kaon_p_PP_Weight", kaon_p_PP_Weight, &b_kaon_p_PP_Weight);
   fChain->SetBranchAddress("kaon_p_PP_tr_pchi2", kaon_p_PP_tr_pchi2, &b_kaon_p_PP_tr_pchi2);
   fChain->SetBranchAddress("kaon_p_PP_DLLe", kaon_p_PP_DLLe, &b_kaon_p_PP_DLLe);
   fChain->SetBranchAddress("kaon_p_PP_DLLk", kaon_p_PP_DLLk, &b_kaon_p_PP_DLLk);
   fChain->SetBranchAddress("kaon_p_PP_DLLp", kaon_p_PP_DLLp, &b_kaon_p_PP_DLLp);
   fChain->SetBranchAddress("kaon_p_PP_DLLmu", kaon_p_PP_DLLmu, &b_kaon_p_PP_DLLmu);
   fChain->SetBranchAddress("kaon_p_ID", &kaon_p_ID, &b_kaon_p_ID);
   fChain->SetBranchAddress("kaon_p_CombDLLMu", &kaon_p_CombDLLMu, &b_kaon_p_CombDLLMu);
   fChain->SetBranchAddress("kaon_p_ProbNNmu", &kaon_p_ProbNNmu, &b_kaon_p_ProbNNmu);
   fChain->SetBranchAddress("kaon_p_ProbNNghost", &kaon_p_ProbNNghost, &b_kaon_p_ProbNNghost);
   fChain->SetBranchAddress("kaon_p_InMuonAcc", &kaon_p_InMuonAcc, &b_kaon_p_InMuonAcc);
   fChain->SetBranchAddress("kaon_p_MuonDist2", &kaon_p_MuonDist2, &b_kaon_p_MuonDist2);
   fChain->SetBranchAddress("kaon_p_regionInM2", &kaon_p_regionInM2, &b_kaon_p_regionInM2);
   fChain->SetBranchAddress("kaon_p_hasMuon", &kaon_p_hasMuon, &b_kaon_p_hasMuon);
   fChain->SetBranchAddress("kaon_p_isMuon", &kaon_p_isMuon, &b_kaon_p_isMuon);
   fChain->SetBranchAddress("kaon_p_isMuonLoose", &kaon_p_isMuonLoose, &b_kaon_p_isMuonLoose);
   fChain->SetBranchAddress("kaon_p_NShared", &kaon_p_NShared, &b_kaon_p_NShared);
   fChain->SetBranchAddress("kaon_p_MuonLLmu", &kaon_p_MuonLLmu, &b_kaon_p_MuonLLmu);
   fChain->SetBranchAddress("kaon_p_MuonLLbg", &kaon_p_MuonLLbg, &b_kaon_p_MuonLLbg);
   fChain->SetBranchAddress("kaon_p_isMuonFromProto", &kaon_p_isMuonFromProto, &b_kaon_p_isMuonFromProto);
   fChain->SetBranchAddress("kaon_p_RICHDLLe", &kaon_p_RICHDLLe, &b_kaon_p_RICHDLLe);
   fChain->SetBranchAddress("kaon_p_RICHDLLmu", &kaon_p_RICHDLLmu, &b_kaon_p_RICHDLLmu);
   fChain->SetBranchAddress("kaon_p_RICHDLLpi", &kaon_p_RICHDLLpi, &b_kaon_p_RICHDLLpi);
   fChain->SetBranchAddress("kaon_p_RICHDLLK", &kaon_p_RICHDLLK, &b_kaon_p_RICHDLLK);
   fChain->SetBranchAddress("kaon_p_RICHDLLp", &kaon_p_RICHDLLp, &b_kaon_p_RICHDLLp);
   fChain->SetBranchAddress("kaon_p_RICHDLLbt", &kaon_p_RICHDLLbt, &b_kaon_p_RICHDLLbt);
   fChain->SetBranchAddress("kaon_p_RICHBestID", &kaon_p_RICHBestID, &b_kaon_p_RICHBestID);
   fChain->SetBranchAddress("kaon_p_RICHThreshold", &kaon_p_RICHThreshold, &b_kaon_p_RICHThreshold);
   fChain->SetBranchAddress("kaon_p_RICHThresholdEl", &kaon_p_RICHThresholdEl, &b_kaon_p_RICHThresholdEl);
   fChain->SetBranchAddress("kaon_p_RICHThresholdMu", &kaon_p_RICHThresholdMu, &b_kaon_p_RICHThresholdMu);
   fChain->SetBranchAddress("kaon_p_RICHThresholdPi", &kaon_p_RICHThresholdPi, &b_kaon_p_RICHThresholdPi);
   fChain->SetBranchAddress("kaon_p_RICHThresholdKa", &kaon_p_RICHThresholdKa, &b_kaon_p_RICHThresholdKa);
   fChain->SetBranchAddress("kaon_p_RICHThresholdPr", &kaon_p_RICHThresholdPr, &b_kaon_p_RICHThresholdPr);
   fChain->SetBranchAddress("kaon_p_RICHAerogelUsed", &kaon_p_RICHAerogelUsed, &b_kaon_p_RICHAerogelUsed);
   fChain->SetBranchAddress("kaon_p_RICH1GasUsed", &kaon_p_RICH1GasUsed, &b_kaon_p_RICH1GasUsed);
   fChain->SetBranchAddress("kaon_p_RICH2GasUsed", &kaon_p_RICH2GasUsed, &b_kaon_p_RICH2GasUsed);
   fChain->SetBranchAddress("kaon_p_TRACK_Eta", &kaon_p_TRACK_Eta, &b_kaon_p_TRACK_Eta);
   fChain->SetBranchAddress("kaon_p_TRACK_Phi", &kaon_p_TRACK_Phi, &b_kaon_p_TRACK_Phi);
   fChain->SetBranchAddress("kaon_p_Aerogel_X", &kaon_p_Aerogel_X, &b_kaon_p_Aerogel_X);
   fChain->SetBranchAddress("kaon_p_Aerogel_Y", &kaon_p_Aerogel_Y, &b_kaon_p_Aerogel_Y);
   fChain->SetBranchAddress("kaon_p_Aerogel_Z", &kaon_p_Aerogel_Z, &b_kaon_p_Aerogel_Z);
   fChain->SetBranchAddress("kaon_p_Aerogel_Rho", &kaon_p_Aerogel_Rho, &b_kaon_p_Aerogel_Rho);
   fChain->SetBranchAddress("kaon_p_Aerogel_Phi", &kaon_p_Aerogel_Phi, &b_kaon_p_Aerogel_Phi);
   fChain->SetBranchAddress("kaon_p_Rich1Gas_X", &kaon_p_Rich1Gas_X, &b_kaon_p_Rich1Gas_X);
   fChain->SetBranchAddress("kaon_p_Rich1Gas_Y", &kaon_p_Rich1Gas_Y, &b_kaon_p_Rich1Gas_Y);
   fChain->SetBranchAddress("kaon_p_Rich1Gas_Z", &kaon_p_Rich1Gas_Z, &b_kaon_p_Rich1Gas_Z);
   fChain->SetBranchAddress("kaon_p_Rich1Gas_Rho", &kaon_p_Rich1Gas_Rho, &b_kaon_p_Rich1Gas_Rho);
   fChain->SetBranchAddress("kaon_p_Rich1Gas_Phi", &kaon_p_Rich1Gas_Phi, &b_kaon_p_Rich1Gas_Phi);
   fChain->SetBranchAddress("kaon_p_Rich2Gas_X", &kaon_p_Rich2Gas_X, &b_kaon_p_Rich2Gas_X);
   fChain->SetBranchAddress("kaon_p_Rich2Gas_Y", &kaon_p_Rich2Gas_Y, &b_kaon_p_Rich2Gas_Y);
   fChain->SetBranchAddress("kaon_p_Rich2Gas_Z", &kaon_p_Rich2Gas_Z, &b_kaon_p_Rich2Gas_Z);
   fChain->SetBranchAddress("kaon_p_Rich2Gas_Rho", &kaon_p_Rich2Gas_Rho, &b_kaon_p_Rich2Gas_Rho);
   fChain->SetBranchAddress("kaon_p_Rich2Gas_Phi", &kaon_p_Rich2Gas_Phi, &b_kaon_p_Rich2Gas_Phi);
   fChain->SetBranchAddress("kaon_p_TRACK_Type", &kaon_p_TRACK_Type, &b_kaon_p_TRACK_Type);
   fChain->SetBranchAddress("kaon_p_TRACK_Key", &kaon_p_TRACK_Key, &b_kaon_p_TRACK_Key);
   fChain->SetBranchAddress("kaon_p_TRACK_CHI2NDOF", &kaon_p_TRACK_CHI2NDOF, &b_kaon_p_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("kaon_p_TRACK_PCHI2", &kaon_p_TRACK_PCHI2, &b_kaon_p_TRACK_PCHI2);
   fChain->SetBranchAddress("kaon_p_TRACK_MatchCHI2", &kaon_p_TRACK_MatchCHI2, &b_kaon_p_TRACK_MatchCHI2);
   fChain->SetBranchAddress("kaon_p_TRACK_GhostProb", &kaon_p_TRACK_GhostProb, &b_kaon_p_TRACK_GhostProb);
   fChain->SetBranchAddress("kaon_p_TRACK_CloneDist", &kaon_p_TRACK_CloneDist, &b_kaon_p_TRACK_CloneDist);
   fChain->SetBranchAddress("kaon_p_TRACK_Likelihood", &kaon_p_TRACK_Likelihood, &b_kaon_p_TRACK_Likelihood);
   fChain->SetBranchAddress("kaon_p_X", &kaon_p_X, &b_kaon_p_X);
   fChain->SetBranchAddress("kaon_p_Y", &kaon_p_Y, &b_kaon_p_Y);
   fChain->SetBranchAddress("pi_p_OWNPV_X", &pi_p_OWNPV_X, &b_pi_p_OWNPV_X);
   fChain->SetBranchAddress("pi_p_OWNPV_Y", &pi_p_OWNPV_Y, &b_pi_p_OWNPV_Y);
   fChain->SetBranchAddress("pi_p_OWNPV_Z", &pi_p_OWNPV_Z, &b_pi_p_OWNPV_Z);
   fChain->SetBranchAddress("pi_p_OWNPV_XERR", &pi_p_OWNPV_XERR, &b_pi_p_OWNPV_XERR);
   fChain->SetBranchAddress("pi_p_OWNPV_YERR", &pi_p_OWNPV_YERR, &b_pi_p_OWNPV_YERR);
   fChain->SetBranchAddress("pi_p_OWNPV_ZERR", &pi_p_OWNPV_ZERR, &b_pi_p_OWNPV_ZERR);
   fChain->SetBranchAddress("pi_p_OWNPV_CHI2", &pi_p_OWNPV_CHI2, &b_pi_p_OWNPV_CHI2);
   fChain->SetBranchAddress("pi_p_OWNPV_NDOF", &pi_p_OWNPV_NDOF, &b_pi_p_OWNPV_NDOF);
   fChain->SetBranchAddress("pi_p_OWNPV_COV_", pi_p_OWNPV_COV_, &b_pi_p_OWNPV_COV_);
   fChain->SetBranchAddress("pi_p_IP_OWNPV", &pi_p_IP_OWNPV, &b_pi_p_IP_OWNPV);
   fChain->SetBranchAddress("pi_p_IPCHI2_OWNPV", &pi_p_IPCHI2_OWNPV, &b_pi_p_IPCHI2_OWNPV);
   fChain->SetBranchAddress("pi_p_ORIVX_X", &pi_p_ORIVX_X, &b_pi_p_ORIVX_X);
   fChain->SetBranchAddress("pi_p_ORIVX_Y", &pi_p_ORIVX_Y, &b_pi_p_ORIVX_Y);
   fChain->SetBranchAddress("pi_p_ORIVX_Z", &pi_p_ORIVX_Z, &b_pi_p_ORIVX_Z);
   fChain->SetBranchAddress("pi_p_ORIVX_XERR", &pi_p_ORIVX_XERR, &b_pi_p_ORIVX_XERR);
   fChain->SetBranchAddress("pi_p_ORIVX_YERR", &pi_p_ORIVX_YERR, &b_pi_p_ORIVX_YERR);
   fChain->SetBranchAddress("pi_p_ORIVX_ZERR", &pi_p_ORIVX_ZERR, &b_pi_p_ORIVX_ZERR);
   fChain->SetBranchAddress("pi_p_ORIVX_CHI2", &pi_p_ORIVX_CHI2, &b_pi_p_ORIVX_CHI2);
   fChain->SetBranchAddress("pi_p_ORIVX_NDOF", &pi_p_ORIVX_NDOF, &b_pi_p_ORIVX_NDOF);
   fChain->SetBranchAddress("pi_p_ORIVX_COV_", pi_p_ORIVX_COV_, &b_pi_p_ORIVX_COV_);
   fChain->SetBranchAddress("pi_p_P", &pi_p_P, &b_pi_p_P);
   fChain->SetBranchAddress("pi_p_PT", &pi_p_PT, &b_pi_p_PT);
   fChain->SetBranchAddress("pi_p_PE", &pi_p_PE, &b_pi_p_PE);
   fChain->SetBranchAddress("pi_p_PX", &pi_p_PX, &b_pi_p_PX);
   fChain->SetBranchAddress("pi_p_PY", &pi_p_PY, &b_pi_p_PY);
   fChain->SetBranchAddress("pi_p_PZ", &pi_p_PZ, &b_pi_p_PZ);
   fChain->SetBranchAddress("pi_p_M", &pi_p_M, &b_pi_p_M);
   fChain->SetBranchAddress("pi_p_TRUEID", &pi_p_TRUEID, &b_pi_p_TRUEID);
   fChain->SetBranchAddress("pi_p_MC_MOTHER_ID", &pi_p_MC_MOTHER_ID, &b_pi_p_MC_MOTHER_ID);
   fChain->SetBranchAddress("pi_p_MC_MOTHER_KEY", &pi_p_MC_MOTHER_KEY, &b_pi_p_MC_MOTHER_KEY);
   fChain->SetBranchAddress("pi_p_MC_GD_MOTHER_ID", &pi_p_MC_GD_MOTHER_ID, &b_pi_p_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("pi_p_MC_GD_MOTHER_KEY", &pi_p_MC_GD_MOTHER_KEY, &b_pi_p_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pi_p_MC_GD_GD_MOTHER_ID", &pi_p_MC_GD_GD_MOTHER_ID, &b_pi_p_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("pi_p_MC_GD_GD_MOTHER_KEY", &pi_p_MC_GD_GD_MOTHER_KEY, &b_pi_p_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pi_p_TRUEP_E", &pi_p_TRUEP_E, &b_pi_p_TRUEP_E);
   fChain->SetBranchAddress("pi_p_TRUEP_X", &pi_p_TRUEP_X, &b_pi_p_TRUEP_X);
   fChain->SetBranchAddress("pi_p_TRUEP_Y", &pi_p_TRUEP_Y, &b_pi_p_TRUEP_Y);
   fChain->SetBranchAddress("pi_p_TRUEP_Z", &pi_p_TRUEP_Z, &b_pi_p_TRUEP_Z);
   fChain->SetBranchAddress("pi_p_TRUEPT", &pi_p_TRUEPT, &b_pi_p_TRUEPT);
   fChain->SetBranchAddress("pi_p_TRUEORIGINVERTEX_X", &pi_p_TRUEORIGINVERTEX_X, &b_pi_p_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("pi_p_TRUEORIGINVERTEX_Y", &pi_p_TRUEORIGINVERTEX_Y, &b_pi_p_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("pi_p_TRUEORIGINVERTEX_Z", &pi_p_TRUEORIGINVERTEX_Z, &b_pi_p_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("pi_p_TRUEENDVERTEX_X", &pi_p_TRUEENDVERTEX_X, &b_pi_p_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("pi_p_TRUEENDVERTEX_Y", &pi_p_TRUEENDVERTEX_Y, &b_pi_p_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("pi_p_TRUEENDVERTEX_Z", &pi_p_TRUEENDVERTEX_Z, &b_pi_p_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("pi_p_TRUEISSTABLE", &pi_p_TRUEISSTABLE, &b_pi_p_TRUEISSTABLE);
   fChain->SetBranchAddress("pi_p_TRUETAU", &pi_p_TRUETAU, &b_pi_p_TRUETAU);
   fChain->SetBranchAddress("pi_p_Reconstructible", &pi_p_Reconstructible, &b_pi_p_Reconstructible);
   fChain->SetBranchAddress("pi_p_Reconstructed", &pi_p_Reconstructed, &b_pi_p_Reconstructed);
   fChain->SetBranchAddress("pi_p_ProtoParticles", &pi_p_ProtoParticles, &b_pi_p_ProtoParticles);
   fChain->SetBranchAddress("pi_p_PP_PX", pi_p_PP_PX, &b_pi_p_PP_PX);
   fChain->SetBranchAddress("pi_p_PP_PY", pi_p_PP_PY, &b_pi_p_PP_PY);
   fChain->SetBranchAddress("pi_p_PP_PZ", pi_p_PP_PZ, &b_pi_p_PP_PZ);
   fChain->SetBranchAddress("pi_p_PP_Weight", pi_p_PP_Weight, &b_pi_p_PP_Weight);
   fChain->SetBranchAddress("pi_p_PP_tr_pchi2", pi_p_PP_tr_pchi2, &b_pi_p_PP_tr_pchi2);
   fChain->SetBranchAddress("pi_p_PP_DLLe", pi_p_PP_DLLe, &b_pi_p_PP_DLLe);
   fChain->SetBranchAddress("pi_p_PP_DLLk", pi_p_PP_DLLk, &b_pi_p_PP_DLLk);
   fChain->SetBranchAddress("pi_p_PP_DLLp", pi_p_PP_DLLp, &b_pi_p_PP_DLLp);
   fChain->SetBranchAddress("pi_p_PP_DLLmu", pi_p_PP_DLLmu, &b_pi_p_PP_DLLmu);
   fChain->SetBranchAddress("pi_p_ID", &pi_p_ID, &b_pi_p_ID);
   fChain->SetBranchAddress("pi_p_CombDLLMu", &pi_p_CombDLLMu, &b_pi_p_CombDLLMu);
   fChain->SetBranchAddress("pi_p_ProbNNmu", &pi_p_ProbNNmu, &b_pi_p_ProbNNmu);
   fChain->SetBranchAddress("pi_p_ProbNNghost", &pi_p_ProbNNghost, &b_pi_p_ProbNNghost);
   fChain->SetBranchAddress("pi_p_InMuonAcc", &pi_p_InMuonAcc, &b_pi_p_InMuonAcc);
   fChain->SetBranchAddress("pi_p_MuonDist2", &pi_p_MuonDist2, &b_pi_p_MuonDist2);
   fChain->SetBranchAddress("pi_p_regionInM2", &pi_p_regionInM2, &b_pi_p_regionInM2);
   fChain->SetBranchAddress("pi_p_hasMuon", &pi_p_hasMuon, &b_pi_p_hasMuon);
   fChain->SetBranchAddress("pi_p_isMuon", &pi_p_isMuon, &b_pi_p_isMuon);
   fChain->SetBranchAddress("pi_p_isMuonLoose", &pi_p_isMuonLoose, &b_pi_p_isMuonLoose);
   fChain->SetBranchAddress("pi_p_NShared", &pi_p_NShared, &b_pi_p_NShared);
   fChain->SetBranchAddress("pi_p_MuonLLmu", &pi_p_MuonLLmu, &b_pi_p_MuonLLmu);
   fChain->SetBranchAddress("pi_p_MuonLLbg", &pi_p_MuonLLbg, &b_pi_p_MuonLLbg);
   fChain->SetBranchAddress("pi_p_isMuonFromProto", &pi_p_isMuonFromProto, &b_pi_p_isMuonFromProto);
   fChain->SetBranchAddress("pi_p_RICHDLLe", &pi_p_RICHDLLe, &b_pi_p_RICHDLLe);
   fChain->SetBranchAddress("pi_p_RICHDLLmu", &pi_p_RICHDLLmu, &b_pi_p_RICHDLLmu);
   fChain->SetBranchAddress("pi_p_RICHDLLpi", &pi_p_RICHDLLpi, &b_pi_p_RICHDLLpi);
   fChain->SetBranchAddress("pi_p_RICHDLLK", &pi_p_RICHDLLK, &b_pi_p_RICHDLLK);
   fChain->SetBranchAddress("pi_p_RICHDLLp", &pi_p_RICHDLLp, &b_pi_p_RICHDLLp);
   fChain->SetBranchAddress("pi_p_RICHDLLbt", &pi_p_RICHDLLbt, &b_pi_p_RICHDLLbt);
   fChain->SetBranchAddress("pi_p_RICHBestID", &pi_p_RICHBestID, &b_pi_p_RICHBestID);
   fChain->SetBranchAddress("pi_p_RICHThreshold", &pi_p_RICHThreshold, &b_pi_p_RICHThreshold);
   fChain->SetBranchAddress("pi_p_RICHThresholdEl", &pi_p_RICHThresholdEl, &b_pi_p_RICHThresholdEl);
   fChain->SetBranchAddress("pi_p_RICHThresholdMu", &pi_p_RICHThresholdMu, &b_pi_p_RICHThresholdMu);
   fChain->SetBranchAddress("pi_p_RICHThresholdPi", &pi_p_RICHThresholdPi, &b_pi_p_RICHThresholdPi);
   fChain->SetBranchAddress("pi_p_RICHThresholdKa", &pi_p_RICHThresholdKa, &b_pi_p_RICHThresholdKa);
   fChain->SetBranchAddress("pi_p_RICHThresholdPr", &pi_p_RICHThresholdPr, &b_pi_p_RICHThresholdPr);
   fChain->SetBranchAddress("pi_p_RICHAerogelUsed", &pi_p_RICHAerogelUsed, &b_pi_p_RICHAerogelUsed);
   fChain->SetBranchAddress("pi_p_RICH1GasUsed", &pi_p_RICH1GasUsed, &b_pi_p_RICH1GasUsed);
   fChain->SetBranchAddress("pi_p_RICH2GasUsed", &pi_p_RICH2GasUsed, &b_pi_p_RICH2GasUsed);
   fChain->SetBranchAddress("pi_p_TRACK_Eta", &pi_p_TRACK_Eta, &b_pi_p_TRACK_Eta);
   fChain->SetBranchAddress("pi_p_TRACK_Phi", &pi_p_TRACK_Phi, &b_pi_p_TRACK_Phi);
   fChain->SetBranchAddress("pi_p_Aerogel_X", &pi_p_Aerogel_X, &b_pi_p_Aerogel_X);
   fChain->SetBranchAddress("pi_p_Aerogel_Y", &pi_p_Aerogel_Y, &b_pi_p_Aerogel_Y);
   fChain->SetBranchAddress("pi_p_Aerogel_Z", &pi_p_Aerogel_Z, &b_pi_p_Aerogel_Z);
   fChain->SetBranchAddress("pi_p_Aerogel_Rho", &pi_p_Aerogel_Rho, &b_pi_p_Aerogel_Rho);
   fChain->SetBranchAddress("pi_p_Aerogel_Phi", &pi_p_Aerogel_Phi, &b_pi_p_Aerogel_Phi);
   fChain->SetBranchAddress("pi_p_Rich1Gas_X", &pi_p_Rich1Gas_X, &b_pi_p_Rich1Gas_X);
   fChain->SetBranchAddress("pi_p_Rich1Gas_Y", &pi_p_Rich1Gas_Y, &b_pi_p_Rich1Gas_Y);
   fChain->SetBranchAddress("pi_p_Rich1Gas_Z", &pi_p_Rich1Gas_Z, &b_pi_p_Rich1Gas_Z);
   fChain->SetBranchAddress("pi_p_Rich1Gas_Rho", &pi_p_Rich1Gas_Rho, &b_pi_p_Rich1Gas_Rho);
   fChain->SetBranchAddress("pi_p_Rich1Gas_Phi", &pi_p_Rich1Gas_Phi, &b_pi_p_Rich1Gas_Phi);
   fChain->SetBranchAddress("pi_p_Rich2Gas_X", &pi_p_Rich2Gas_X, &b_pi_p_Rich2Gas_X);
   fChain->SetBranchAddress("pi_p_Rich2Gas_Y", &pi_p_Rich2Gas_Y, &b_pi_p_Rich2Gas_Y);
   fChain->SetBranchAddress("pi_p_Rich2Gas_Z", &pi_p_Rich2Gas_Z, &b_pi_p_Rich2Gas_Z);
   fChain->SetBranchAddress("pi_p_Rich2Gas_Rho", &pi_p_Rich2Gas_Rho, &b_pi_p_Rich2Gas_Rho);
   fChain->SetBranchAddress("pi_p_Rich2Gas_Phi", &pi_p_Rich2Gas_Phi, &b_pi_p_Rich2Gas_Phi);
   fChain->SetBranchAddress("pi_p_TRACK_Type", &pi_p_TRACK_Type, &b_pi_p_TRACK_Type);
   fChain->SetBranchAddress("pi_p_TRACK_Key", &pi_p_TRACK_Key, &b_pi_p_TRACK_Key);
   fChain->SetBranchAddress("pi_p_TRACK_CHI2NDOF", &pi_p_TRACK_CHI2NDOF, &b_pi_p_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("pi_p_TRACK_PCHI2", &pi_p_TRACK_PCHI2, &b_pi_p_TRACK_PCHI2);
   fChain->SetBranchAddress("pi_p_TRACK_MatchCHI2", &pi_p_TRACK_MatchCHI2, &b_pi_p_TRACK_MatchCHI2);
   fChain->SetBranchAddress("pi_p_TRACK_GhostProb", &pi_p_TRACK_GhostProb, &b_pi_p_TRACK_GhostProb);
   fChain->SetBranchAddress("pi_p_TRACK_CloneDist", &pi_p_TRACK_CloneDist, &b_pi_p_TRACK_CloneDist);
   fChain->SetBranchAddress("pi_p_TRACK_Likelihood", &pi_p_TRACK_Likelihood, &b_pi_p_TRACK_Likelihood);
   fChain->SetBranchAddress("pi_p_X", &pi_p_X, &b_pi_p_X);
   fChain->SetBranchAddress("pi_p_Y", &pi_p_Y, &b_pi_p_Y);
   fChain->SetBranchAddress("muon_p_OWNPV_X", &muon_p_OWNPV_X, &b_muon_p_OWNPV_X);
   fChain->SetBranchAddress("muon_p_OWNPV_Y", &muon_p_OWNPV_Y, &b_muon_p_OWNPV_Y);
   fChain->SetBranchAddress("muon_p_OWNPV_Z", &muon_p_OWNPV_Z, &b_muon_p_OWNPV_Z);
   fChain->SetBranchAddress("muon_p_OWNPV_XERR", &muon_p_OWNPV_XERR, &b_muon_p_OWNPV_XERR);
   fChain->SetBranchAddress("muon_p_OWNPV_YERR", &muon_p_OWNPV_YERR, &b_muon_p_OWNPV_YERR);
   fChain->SetBranchAddress("muon_p_OWNPV_ZERR", &muon_p_OWNPV_ZERR, &b_muon_p_OWNPV_ZERR);
   fChain->SetBranchAddress("muon_p_OWNPV_CHI2", &muon_p_OWNPV_CHI2, &b_muon_p_OWNPV_CHI2);
   fChain->SetBranchAddress("muon_p_OWNPV_NDOF", &muon_p_OWNPV_NDOF, &b_muon_p_OWNPV_NDOF);
   fChain->SetBranchAddress("muon_p_OWNPV_COV_", muon_p_OWNPV_COV_, &b_muon_p_OWNPV_COV_);
   fChain->SetBranchAddress("muon_p_IP_OWNPV", &muon_p_IP_OWNPV, &b_muon_p_IP_OWNPV);
   fChain->SetBranchAddress("muon_p_IPCHI2_OWNPV", &muon_p_IPCHI2_OWNPV, &b_muon_p_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muon_p_ORIVX_X", &muon_p_ORIVX_X, &b_muon_p_ORIVX_X);
   fChain->SetBranchAddress("muon_p_ORIVX_Y", &muon_p_ORIVX_Y, &b_muon_p_ORIVX_Y);
   fChain->SetBranchAddress("muon_p_ORIVX_Z", &muon_p_ORIVX_Z, &b_muon_p_ORIVX_Z);
   fChain->SetBranchAddress("muon_p_ORIVX_XERR", &muon_p_ORIVX_XERR, &b_muon_p_ORIVX_XERR);
   fChain->SetBranchAddress("muon_p_ORIVX_YERR", &muon_p_ORIVX_YERR, &b_muon_p_ORIVX_YERR);
   fChain->SetBranchAddress("muon_p_ORIVX_ZERR", &muon_p_ORIVX_ZERR, &b_muon_p_ORIVX_ZERR);
   fChain->SetBranchAddress("muon_p_ORIVX_CHI2", &muon_p_ORIVX_CHI2, &b_muon_p_ORIVX_CHI2);
   fChain->SetBranchAddress("muon_p_ORIVX_NDOF", &muon_p_ORIVX_NDOF, &b_muon_p_ORIVX_NDOF);
   fChain->SetBranchAddress("muon_p_ORIVX_COV_", muon_p_ORIVX_COV_, &b_muon_p_ORIVX_COV_);
   fChain->SetBranchAddress("muon_p_P", &muon_p_P, &b_muon_p_P);
   fChain->SetBranchAddress("muon_p_PT", &muon_p_PT, &b_muon_p_PT);
   fChain->SetBranchAddress("muon_p_PE", &muon_p_PE, &b_muon_p_PE);
   fChain->SetBranchAddress("muon_p_PX", &muon_p_PX, &b_muon_p_PX);
   fChain->SetBranchAddress("muon_p_PY", &muon_p_PY, &b_muon_p_PY);
   fChain->SetBranchAddress("muon_p_PZ", &muon_p_PZ, &b_muon_p_PZ);
   fChain->SetBranchAddress("muon_p_M", &muon_p_M, &b_muon_p_M);
   fChain->SetBranchAddress("muon_p_TRUEID", &muon_p_TRUEID, &b_muon_p_TRUEID);
   fChain->SetBranchAddress("muon_p_MC_MOTHER_ID", &muon_p_MC_MOTHER_ID, &b_muon_p_MC_MOTHER_ID);
   fChain->SetBranchAddress("muon_p_MC_MOTHER_KEY", &muon_p_MC_MOTHER_KEY, &b_muon_p_MC_MOTHER_KEY);
   fChain->SetBranchAddress("muon_p_MC_GD_MOTHER_ID", &muon_p_MC_GD_MOTHER_ID, &b_muon_p_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("muon_p_MC_GD_MOTHER_KEY", &muon_p_MC_GD_MOTHER_KEY, &b_muon_p_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("muon_p_MC_GD_GD_MOTHER_ID", &muon_p_MC_GD_GD_MOTHER_ID, &b_muon_p_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("muon_p_MC_GD_GD_MOTHER_KEY", &muon_p_MC_GD_GD_MOTHER_KEY, &b_muon_p_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("muon_p_TRUEP_E", &muon_p_TRUEP_E, &b_muon_p_TRUEP_E);
   fChain->SetBranchAddress("muon_p_TRUEP_X", &muon_p_TRUEP_X, &b_muon_p_TRUEP_X);
   fChain->SetBranchAddress("muon_p_TRUEP_Y", &muon_p_TRUEP_Y, &b_muon_p_TRUEP_Y);
   fChain->SetBranchAddress("muon_p_TRUEP_Z", &muon_p_TRUEP_Z, &b_muon_p_TRUEP_Z);
   fChain->SetBranchAddress("muon_p_TRUEPT", &muon_p_TRUEPT, &b_muon_p_TRUEPT);
   fChain->SetBranchAddress("muon_p_TRUEORIGINVERTEX_X", &muon_p_TRUEORIGINVERTEX_X, &b_muon_p_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("muon_p_TRUEORIGINVERTEX_Y", &muon_p_TRUEORIGINVERTEX_Y, &b_muon_p_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("muon_p_TRUEORIGINVERTEX_Z", &muon_p_TRUEORIGINVERTEX_Z, &b_muon_p_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("muon_p_TRUEENDVERTEX_X", &muon_p_TRUEENDVERTEX_X, &b_muon_p_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("muon_p_TRUEENDVERTEX_Y", &muon_p_TRUEENDVERTEX_Y, &b_muon_p_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("muon_p_TRUEENDVERTEX_Z", &muon_p_TRUEENDVERTEX_Z, &b_muon_p_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("muon_p_TRUEISSTABLE", &muon_p_TRUEISSTABLE, &b_muon_p_TRUEISSTABLE);
   fChain->SetBranchAddress("muon_p_TRUETAU", &muon_p_TRUETAU, &b_muon_p_TRUETAU);
   fChain->SetBranchAddress("muon_p_Reconstructible", &muon_p_Reconstructible, &b_muon_p_Reconstructible);
   fChain->SetBranchAddress("muon_p_Reconstructed", &muon_p_Reconstructed, &b_muon_p_Reconstructed);
   fChain->SetBranchAddress("muon_p_ProtoParticles", &muon_p_ProtoParticles, &b_muon_p_ProtoParticles);
   fChain->SetBranchAddress("muon_p_PP_PX", muon_p_PP_PX, &b_muon_p_PP_PX);
   fChain->SetBranchAddress("muon_p_PP_PY", muon_p_PP_PY, &b_muon_p_PP_PY);
   fChain->SetBranchAddress("muon_p_PP_PZ", muon_p_PP_PZ, &b_muon_p_PP_PZ);
   fChain->SetBranchAddress("muon_p_PP_Weight", muon_p_PP_Weight, &b_muon_p_PP_Weight);
   fChain->SetBranchAddress("muon_p_PP_tr_pchi2", muon_p_PP_tr_pchi2, &b_muon_p_PP_tr_pchi2);
   fChain->SetBranchAddress("muon_p_PP_DLLe", muon_p_PP_DLLe, &b_muon_p_PP_DLLe);
   fChain->SetBranchAddress("muon_p_PP_DLLk", muon_p_PP_DLLk, &b_muon_p_PP_DLLk);
   fChain->SetBranchAddress("muon_p_PP_DLLp", muon_p_PP_DLLp, &b_muon_p_PP_DLLp);
   fChain->SetBranchAddress("muon_p_PP_DLLmu", muon_p_PP_DLLmu, &b_muon_p_PP_DLLmu);
   fChain->SetBranchAddress("muon_p_ID", &muon_p_ID, &b_muon_p_ID);
   fChain->SetBranchAddress("muon_p_CombDLLMu", &muon_p_CombDLLMu, &b_muon_p_CombDLLMu);
   fChain->SetBranchAddress("muon_p_ProbNNmu", &muon_p_ProbNNmu, &b_muon_p_ProbNNmu);
   fChain->SetBranchAddress("muon_p_ProbNNghost", &muon_p_ProbNNghost, &b_muon_p_ProbNNghost);
   fChain->SetBranchAddress("muon_p_InMuonAcc", &muon_p_InMuonAcc, &b_muon_p_InMuonAcc);
   fChain->SetBranchAddress("muon_p_MuonDist2", &muon_p_MuonDist2, &b_muon_p_MuonDist2);
   fChain->SetBranchAddress("muon_p_regionInM2", &muon_p_regionInM2, &b_muon_p_regionInM2);
   fChain->SetBranchAddress("muon_p_hasMuon", &muon_p_hasMuon, &b_muon_p_hasMuon);
   fChain->SetBranchAddress("muon_p_isMuon", &muon_p_isMuon, &b_muon_p_isMuon);
   fChain->SetBranchAddress("muon_p_isMuonLoose", &muon_p_isMuonLoose, &b_muon_p_isMuonLoose);
   fChain->SetBranchAddress("muon_p_NShared", &muon_p_NShared, &b_muon_p_NShared);
   fChain->SetBranchAddress("muon_p_MuonLLmu", &muon_p_MuonLLmu, &b_muon_p_MuonLLmu);
   fChain->SetBranchAddress("muon_p_MuonLLbg", &muon_p_MuonLLbg, &b_muon_p_MuonLLbg);
   fChain->SetBranchAddress("muon_p_isMuonFromProto", &muon_p_isMuonFromProto, &b_muon_p_isMuonFromProto);
   fChain->SetBranchAddress("muon_p_RICHDLLe", &muon_p_RICHDLLe, &b_muon_p_RICHDLLe);
   fChain->SetBranchAddress("muon_p_RICHDLLmu", &muon_p_RICHDLLmu, &b_muon_p_RICHDLLmu);
   fChain->SetBranchAddress("muon_p_RICHDLLpi", &muon_p_RICHDLLpi, &b_muon_p_RICHDLLpi);
   fChain->SetBranchAddress("muon_p_RICHDLLK", &muon_p_RICHDLLK, &b_muon_p_RICHDLLK);
   fChain->SetBranchAddress("muon_p_RICHDLLp", &muon_p_RICHDLLp, &b_muon_p_RICHDLLp);
   fChain->SetBranchAddress("muon_p_RICHDLLbt", &muon_p_RICHDLLbt, &b_muon_p_RICHDLLbt);
   fChain->SetBranchAddress("muon_p_RICHBestID", &muon_p_RICHBestID, &b_muon_p_RICHBestID);
   fChain->SetBranchAddress("muon_p_RICHThreshold", &muon_p_RICHThreshold, &b_muon_p_RICHThreshold);
   fChain->SetBranchAddress("muon_p_RICHThresholdEl", &muon_p_RICHThresholdEl, &b_muon_p_RICHThresholdEl);
   fChain->SetBranchAddress("muon_p_RICHThresholdMu", &muon_p_RICHThresholdMu, &b_muon_p_RICHThresholdMu);
   fChain->SetBranchAddress("muon_p_RICHThresholdPi", &muon_p_RICHThresholdPi, &b_muon_p_RICHThresholdPi);
   fChain->SetBranchAddress("muon_p_RICHThresholdKa", &muon_p_RICHThresholdKa, &b_muon_p_RICHThresholdKa);
   fChain->SetBranchAddress("muon_p_RICHThresholdPr", &muon_p_RICHThresholdPr, &b_muon_p_RICHThresholdPr);
   fChain->SetBranchAddress("muon_p_RICHAerogelUsed", &muon_p_RICHAerogelUsed, &b_muon_p_RICHAerogelUsed);
   fChain->SetBranchAddress("muon_p_RICH1GasUsed", &muon_p_RICH1GasUsed, &b_muon_p_RICH1GasUsed);
   fChain->SetBranchAddress("muon_p_RICH2GasUsed", &muon_p_RICH2GasUsed, &b_muon_p_RICH2GasUsed);
   fChain->SetBranchAddress("muon_p_TRACK_Eta", &muon_p_TRACK_Eta, &b_muon_p_TRACK_Eta);
   fChain->SetBranchAddress("muon_p_TRACK_Phi", &muon_p_TRACK_Phi, &b_muon_p_TRACK_Phi);
   fChain->SetBranchAddress("muon_p_Aerogel_X", &muon_p_Aerogel_X, &b_muon_p_Aerogel_X);
   fChain->SetBranchAddress("muon_p_Aerogel_Y", &muon_p_Aerogel_Y, &b_muon_p_Aerogel_Y);
   fChain->SetBranchAddress("muon_p_Aerogel_Z", &muon_p_Aerogel_Z, &b_muon_p_Aerogel_Z);
   fChain->SetBranchAddress("muon_p_Aerogel_Rho", &muon_p_Aerogel_Rho, &b_muon_p_Aerogel_Rho);
   fChain->SetBranchAddress("muon_p_Aerogel_Phi", &muon_p_Aerogel_Phi, &b_muon_p_Aerogel_Phi);
   fChain->SetBranchAddress("muon_p_Rich1Gas_X", &muon_p_Rich1Gas_X, &b_muon_p_Rich1Gas_X);
   fChain->SetBranchAddress("muon_p_Rich1Gas_Y", &muon_p_Rich1Gas_Y, &b_muon_p_Rich1Gas_Y);
   fChain->SetBranchAddress("muon_p_Rich1Gas_Z", &muon_p_Rich1Gas_Z, &b_muon_p_Rich1Gas_Z);
   fChain->SetBranchAddress("muon_p_Rich1Gas_Rho", &muon_p_Rich1Gas_Rho, &b_muon_p_Rich1Gas_Rho);
   fChain->SetBranchAddress("muon_p_Rich1Gas_Phi", &muon_p_Rich1Gas_Phi, &b_muon_p_Rich1Gas_Phi);
   fChain->SetBranchAddress("muon_p_Rich2Gas_X", &muon_p_Rich2Gas_X, &b_muon_p_Rich2Gas_X);
   fChain->SetBranchAddress("muon_p_Rich2Gas_Y", &muon_p_Rich2Gas_Y, &b_muon_p_Rich2Gas_Y);
   fChain->SetBranchAddress("muon_p_Rich2Gas_Z", &muon_p_Rich2Gas_Z, &b_muon_p_Rich2Gas_Z);
   fChain->SetBranchAddress("muon_p_Rich2Gas_Rho", &muon_p_Rich2Gas_Rho, &b_muon_p_Rich2Gas_Rho);
   fChain->SetBranchAddress("muon_p_Rich2Gas_Phi", &muon_p_Rich2Gas_Phi, &b_muon_p_Rich2Gas_Phi);
   fChain->SetBranchAddress("muon_p_TRACK_Type", &muon_p_TRACK_Type, &b_muon_p_TRACK_Type);
   fChain->SetBranchAddress("muon_p_TRACK_Key", &muon_p_TRACK_Key, &b_muon_p_TRACK_Key);
   fChain->SetBranchAddress("muon_p_TRACK_CHI2NDOF", &muon_p_TRACK_CHI2NDOF, &b_muon_p_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muon_p_TRACK_PCHI2", &muon_p_TRACK_PCHI2, &b_muon_p_TRACK_PCHI2);
   fChain->SetBranchAddress("muon_p_TRACK_MatchCHI2", &muon_p_TRACK_MatchCHI2, &b_muon_p_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muon_p_TRACK_GhostProb", &muon_p_TRACK_GhostProb, &b_muon_p_TRACK_GhostProb);
   fChain->SetBranchAddress("muon_p_TRACK_CloneDist", &muon_p_TRACK_CloneDist, &b_muon_p_TRACK_CloneDist);
   fChain->SetBranchAddress("muon_p_TRACK_Likelihood", &muon_p_TRACK_Likelihood, &b_muon_p_TRACK_Likelihood);
   fChain->SetBranchAddress("muon_p_X", &muon_p_X, &b_muon_p_X);
   fChain->SetBranchAddress("muon_p_Y", &muon_p_Y, &b_muon_p_Y);
   fChain->SetBranchAddress("muon_p_MIPCHI2DV_PV", &muon_p_MIPCHI2DV_PV, &b_muon_p_MIPCHI2DV_PV);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("GpsYear", &GpsYear, &b_GpsYear);
   fChain->SetBranchAddress("GpsMonth", &GpsMonth, &b_GpsMonth);
   fChain->SetBranchAddress("GpsDay", &GpsDay, &b_GpsDay);
   fChain->SetBranchAddress("GpsHour", &GpsHour, &b_GpsHour);
   fChain->SetBranchAddress("GpsMinute", &GpsMinute, &b_GpsMinute);
   fChain->SetBranchAddress("GpsSecond", &GpsSecond, &b_GpsSecond);
   fChain->SetBranchAddress("TriggerType", &TriggerType, &b_TriggerType);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLT1TCK", &HLT1TCK, &b_HLT1TCK);
   fChain->SetBranchAddress("HLT2TCK", &HLT2TCK, &b_HLT2TCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("Collisions", &Collisions, &b_Collisions);
   fChain->SetBranchAddress("ProcessType", ProcessType, &b_ProcessType);
   fChain->SetBranchAddress("HeaviestQuark", HeaviestQuark, &b_HeaviestQuark);
   fChain->SetBranchAddress("HeaviestQuarkInEvent", &HeaviestQuarkInEvent, &b_HeaviestQuarkInEvent);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   Notify();
}

Bool_t quantiles::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void quantiles::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t quantiles::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef quantiles_cxx

{
#include "TGraph.h"

//ATLAS Result
Double_t atlas_ptvalues[86]={0.5, 0.6, 0.7, 0.8,
                           0.9, 1.0, 1.1, 1.2, 
                           1.3,1.4, 1.5, 1.6,
			   1.7, 1.8, 1.9, 2.0,
			   2.1, 2.2, 2.3,2.4,
			   2.5, 2.6, 2.7, 2.8,
			   2.9, 3.0, 3.1, 3.2,
			   3.3,3.4, 3.5, 3.6, 
			   3.7, 3.8, 3.9, 4.0,
			   4.1, 4.2, 4.3,4.4,
			   4.5, 4.6, 4.7, 4.8,
			   4.9, 5.0, 5.1, 5.2,
			   5.3,5.4, 5.5, 5.6,
			   5.7, 5.8, 5.9, 6.0,
			   6.1, 6.2, 6.3,6.4,
			   6.5, 6.6, 6.7, 6.8,
			   6.9, 7.0, 7.1, 7.2,
			   7.3,7.4, 7.5, 7.6,
			   7.7, 7.8, 7.9, 8.0,
			   8.1, 8.2, 8.3,8.4,
			   8.5, 8.6, 8.7, 8.8,
			   8.9, 9.0 };

 Double_t zeroervalues[88]={0.0,0.5, 0.6, 0.7, 0.8,
			     0.9, 1.0, 1.1, 1.2,
			     1.3,1.4, 1.5, 1.6,
			     1.7, 1.8, 1.9, 2.0,
			     2.1, 2.2, 2.3,2.4,
			     2.5, 2.6, 2.7, 2.8,
			     2.9, 3.0, 3.1, 3.2,
			     3.3,3.4, 3.5, 3.6,
			     3.7, 3.8, 3.9, 4.0,
			     4.1, 4.2, 4.3,4.4,
			     4.5, 4.6, 4.7, 4.8,
			     4.9, 5.0, 5.1, 5.2,
			     5.3,5.4, 5.5, 5.6,
			     5.7, 5.8, 5.9, 6.0,
			     6.1, 6.2, 6.3,6.4,
			     6.5, 6.6, 6.7, 6.8,
			     6.9, 7.0, 7.1, 7.2,
			     7.3,7.4, 7.5, 7.6,
			     7.7, 7.8, 7.9, 8.0,
			     8.1, 8.2, 8.3,8.4,
			     8.5, 8.6, 8.7, 8.8,
			    8.9, 9.0,10.0 };
//////////////////ATLAS DATA 30-40%
 Double_t atlas_v1values[86]={-0.01271, -0.01114, -0.009324, -0.007028,
			      -0.003952, 3.358E-5, 0.004339, 0.008421,
			      0.01265,0.01747, 0.02264, 0.02787,
			      0.03307, 0.03822, 0.04332, 0.04834,
			      0.05328, 0.05813, 0.06288,0.06753,
			      0.07207, 0.07649, 0.08081, 0.08503,
			      0.08918, 0.09326, 0.09728, 0.1012,
			      0.1048,0.1082, 0.1111, 0.1136,
			      0.1157, 0.1173, 0.1186, 0.1196,
			      0.1203, 0.1208, 0.121,0.1211,
			      0.121, 0.1209, 0.1207, 0.1205,
			      0.1202, 0.1199, 0.1196, 0.1193,
			      0.1191,0.1189, 0.1188, 0.1188,
			      0.1188, 0.1189, 0.1189, 0.1189,
			      0.1187, 0.1185, 0.118,0.1174,
			      0.1165, 0.1153, 0.1139, 0.1122,
			      0.1105, 0.1087, 0.1069, 0.105,
			      0.1033,0.1017, 0.1003, 0.09915,
			      0.0982, 0.09745, 0.09689, 0.0965,
			      0.09625, 0.09612, 0.09609,0.09615,
			      0.09627, 0.09644, 0.09662, 0.09682,
			      0.09699, 0.09713 };

Double_t atlas_v1errors[86]={0.00467, 0.00168, 8.63E-4, 0.001662,
			     0.002462, 0.00203, 0.001599, 0.0018,
			     0.002,0.0017, 0.0014, 0.00159,
			     0.00177, 0.00196, 0.00214, 0.00232,
			     0.0023, 0.00227, 0.00224,0.00221,
			     0.00218, 0.00232, 0.00246, 0.0026,
			     0.00273, 0.00287, 0.00288, 0.0029,
			     0.0029,0.0029, 0.0029, 0.0032,
			     0.0034, 0.0037, 0.0039, 0.0042,
			     0.0041, 0.0041, 0.0041,0.0044,
			     0.0047, 0.0049, 0.0052, 0.0055,
			     0.0058, 0.0062, 0.0061, 0.006,
			     0.0058,0.0057, 0.0057, 0.0058,
			     0.006, 0.0062, 0.0064, 0.0066,
			     0.0068, 0.007, 0.0072,0.0073,
			     0.0075, 0.0079, 0.0083, 0.0087,
			     0.0088, 0.0088, 0.009, 0.0092,
			     0.0095,0.0097, 0.0099, 0.01017,
			     0.01046, 0.01075, 0.011, 0.01124,
			     0.01142, 0.01159, 0.0117,0.01182,
			     0.0119, 0.01198, 0.01204, 0.01211,
			     0.01216, 0.01221 };


Float_t trdata_points[16];
Float_t trerror[16];
Float_t bincenter[16];
trdata_points[0]=-0.00334889;
trdata_points[1]=-0.00293328;
trdata_points[2]=-0.00171535;
trdata_points[3]=2.86196e-06;
trdata_points[4]=0.00163383;
trdata_points[5]=0.00358275;
trdata_points[6]=0.00581652;
trdata_points[7]=0.00843059;
trdata_points[8]=0.0118873;
trdata_points[9]=0.0165647;
trdata_points[10]=0.0207347;
trdata_points[11]=0.0218316;
trdata_points[12]=0.0243846;
trdata_points[13]=0.0195544;
trdata_points[14]=0.00774892;
trdata_points[15]=-0.0155718;
trerror[0]=0.000109186;
trerror[1]=0.000127552;
trerror[2]=0.00015439;
trerror[3]=0.000188218;
trerror[4]=0.000230128;
trerror[5]=0.000276566;
trerror[6]=0.000331532;
trerror[7]=0.00046909;
trerror[8]=0.000437113;
trerror[9]=0.000634313;
trerror[10]=0.00090864;
trerror[11]=0.00127644;
trerror[12]=0.00136175;
trerror[13]=0.0020655;
trerror[14]=0.00462464;
trerror[15]=0.0111394;
bincenter[0]=0.496021;
bincenter[1]=0.693959;
bincenter[2]=0.893444;
bincenter[3]=1.09335;
bincenter[4]=1.29322;
bincenter[5]=1.49927;
bincenter[6]=1.69299;
bincenter[7]=1.89371;
bincenter[8]=2.17511;
bincenter[9]=2.57548;
bincenter[10]=2.97694;
bincenter[11]=3.37832;
bincenter[12]=3.95499;
bincenter[13]=5.17125;
bincenter[14]=7.53784;
bincenter[15]=10.5192;
//Raw <cos(Psi_a - Psi_b)>
Double_t rawres=0.0168651;
//Real Resolution
Double_t realres=0.183658;

///CMS 2PC Data 30-40%
 Float_t cms_2pcdata[16]={-0.035428,-0.029864,-0.024006,-0.020614,
                           -0.012665,0.000655,0.006720,0.017325,
                           0.027543,0.038075,0.055910,0.067698,
                           0.071688,0.079766,0.071351,0.045913};

 Float_t cms_2pcerror[16]={0.000360,0.000423,0.000591,0.000671,
                            0.000754,0.000850,0.001147,0.001522,
                            0.001376,0.001929,0.003182,0.004653,
                            0.005014,0.007384,0.016842,0.039912};


 Float_t pTcenter[16] = {0.499,0.696,0.895,1.09,
			 1.29,1.503,1.693,1.89,
			 2.174,2.575,2.975,3.378,
			 3.95,5.17,7.542,10.56};
 

 Float_t pt_bin[17]={0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.4,2.8,3.2,3.6,4.5,6.5,9.5,12};


for (Int_t i=0;i<16;i++)
        {
          trdata_points[i]=trdata_points[i]/realres;
        }
Float_t xerrors[16]={0.};

//CMS EP
  TGraphErrors *V1PtEven = new TGraphErrors(16,bincenter,trdata_points,xerrors,trerror);
  V1PtEven->SetMarkerStyle(22);
  V1PtEven->SetName("V1PtEven");
  V1PtEven->SetMarkerColor(kBlue);
  V1PtEven->SetMarkerSize(1.2);
  V1PtEven->SetTitle("");

//CMS 2PC
  TGraphErrors *V12PC = new TGraphErrors(16,pTcenter,cms_2pcdata,xerrors,cms_2pcerror);
  V12PC->SetMarkerStyle(33);
  V12PC->SetName("V12PC");
  V12PC->SetMarkerColor(kRed);
  V12PC->SetMarkerSize(1.2);
  V12PC->SetTitle("");

//ATLAS 2PC
 TGraphErrors *Atlasdata = new TGraphErrors(86,atlas_ptvalues,atlas_v1values,atlas_v1errors,atlas_v1errors);
 Atlasdata->GetXaxis()->SetTitle("p_{T} (GeV/c)");
 Atlasdata->GetYaxis()->SetTitle("v_{1}^{even}");
 Atlasdata->SetTitle("");
 Atlasdata->SetName("Atlasdata");
 Atlasdata->GetXaxis()->CenterTitle(1);
 Atlasdata->GetYaxis()->CenterTitle(1);
 Atlasdata->GetXaxis()->SetTickLength(0.02);
 Atlasdata->GetYaxis()->SetTickLength(0.02);
 gStyle->SetPadTickY(1);
 gStyle->SetPadTickX(1);
 

 TH1F* zeroer= new TH1F("zeroer","zeroer",87,zeroervalues);
  zeroer->SetLineStyle(2);
  zeroer->SetLineWidth(2);
  zeroer->SetLineColor(2);
  Float_t zero[87]={0.};
 
  for (Int_t i=0;i<87;i++)
    {
      //V1PtEven->SetBinContent(i+1,trdata_points[i]/realres);
      //V1PtEven->SetBinError(i+1,trerror[i]);
      zeroer->SetBinContent(i+1,zero[i]);
    }//end of filling data points
 

  new TCanvas;
  Atlasdata->Draw("AL");
  //Atlasdata->Draw("a4");
  zeroer->Draw("same");
  V1PtEven->Draw("Psame");
  V12PC->Draw("Psame");


  ///Legend///
  TLegend* leg= new TLegend(0.42,0.15,0.55,0.4,"v_{1}","brNDC");
  leg->AddEntry("Atlasdata","v_{1}{2}(#Delta#eta>=2) ATLAS  PRC.86.014907","lp");
  leg->AddEntry("V1PtEven","v_{1}{EP} CMS","lp");
  leg->AddEntry("V12PC","v_{1}{2} (#Delta#eta>=2) CMS","lp");
  leg->SetFillColor(kWhite);
  leg->SetTextFont(43);
  leg->SetTextSize(14);
  leg->SetBorderSize(0);
  leg->Draw();
  //////////////////
  ///TLatex////
  tex=new TLatex(0.18,0.83,"PbPb  #sqrt{s_{NN}}\ =\ 2.76TeV");
  tex->SetNDC();
  tex->SetTextSize(16);
  tex->SetTextFont(43);
  tex->Draw();
  tex1=new TLatex(0.25,0.78,"30-40%");
  tex1->SetNDC();
  tex1->SetTextFont(43);
  tex1->SetTextSize(16);
  //tex1->SetTextColor(kRed);
  tex1->Draw();
  

}

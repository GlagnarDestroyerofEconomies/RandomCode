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
////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////ATLAS//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////ATLAS DATA 10-20%
  Double_t atlas_v1values_10to20[86] = { -0.01057, -0.009955, -0.009146, -0.007882,
					 -0.005596, -0.002032, 0.001512, 0.003929,
					 0.006417,0.01026, 0.01482, 0.01916,
					 0.0232, 0.0271, 0.03098, 0.035,
					 0.03925, 0.0437, 0.0483,0.05296,
					 0.05763, 0.06225, 0.06679, 0.07123,
					 0.07558, 0.0798, 0.08387, 0.08773,
					 0.09131,0.09453, 0.09733, 0.09963,
					 0.1015, 0.1029, 0.104, 0.1048,
					 0.1053, 0.1056, 0.1057,0.1057,
					 0.1056, 0.1056, 0.1054, 0.1053,
					 0.105, 0.1048, 0.1044, 0.104,
					 0.1034,0.1028, 0.1021, 0.1012,
					 0.1002, 0.09912, 0.09795, 0.09669,
					 0.09536, 0.09397, 0.09253,0.09105,
					 0.08954, 0.08801, 0.08649, 0.08498,
					 0.0835, 0.08207, 0.08071, 0.07942,
					 0.07824,0.07717, 0.07623, 0.07543,
					 0.07477, 0.07423, 0.07381, 0.07349,
					 0.07326, 0.07311, 0.07302,0.07299,
					 0.073, 0.07305, 0.07312, 0.07319,
					 0.07327, 0.07333 };

  Double_t atlas_v1errors_10to20[86] = { 0.00235, 9.3E-4, 6.2E-4, 0.001229,
					 0.001837, 0.001539, 0.001241, 0.001498,
					 0.001755,0.00147, 0.00119, 0.00129,
					 0.00138, 0.00148, 0.00158, 0.00168,
					 0.00158, 0.00148, 0.00138,0.00128,
					 0.00119, 0.00139, 0.00161, 0.00182,
					 0.00203, 0.00224, 0.00221, 0.00219,
					 0.00216,0.00214, 0.00211, 0.00249,
					 0.0029, 0.0032, 0.0036, 0.004,
					 0.0039, 0.0037, 0.0036,0.004,
					 0.0044, 0.0048, 0.0049, 0.0051,
					 0.0045, 0.0039, 0.0035, 0.0032,
					 0.0034,0.0036, 0.0038, 0.0041,
					 0.0044, 0.00465, 0.00453, 0.0044,
					 0.00453, 0.00466, 0.0048,0.00493,
					 0.00509, 0.00529, 0.00559, 0.00589,
					 0.00585, 0.00581, 0.00597, 0.00612,
					 0.00625,0.00637, 0.0065, 0.00668,
					 0.00687, 0.00705, 0.00718, 0.0073,
					 0.00737, 0.00744, 0.00745,0.00747,
					 0.00747, 0.00747, 0.00746, 0.00745,
					 0.00745, 0.00746 };


//////////////////ATLAS DATA 20-30%
  Double_t atlas_v1values_20to30[86] = { -0.0114, -0.0107, -0.009637, -0.007885,
					 -0.005152, -0.001421, 0.002315, 0.005269,
					 0.008484,0.01302, 0.0182, 0.02309,
					 0.02765, 0.032, 0.03631, 0.04072,
					 0.04535, 0.05014, 0.05503,0.05995,
					 0.06482, 0.06957, 0.07419, 0.07867,
					 0.083, 0.08717, 0.09116, 0.09493,
					 0.0984,0.1015, 0.1042, 0.1065,
					 0.1083, 0.1097, 0.1108, 0.1115,
					 0.1121, 0.1124, 0.1125,0.1126,
					 0.1125, 0.1124, 0.1123, 0.1121,
					 0.1118, 0.1114, 0.1109, 0.1102,
					 0.1094,0.1085, 0.1073, 0.1059,
					 0.1044, 0.1027, 0.1009, 0.09903,
					 0.09712, 0.0952, 0.09331,0.09147,
					 0.08974, 0.08812, 0.08664, 0.08528,
					 0.08406, 0.08297, 0.08201, 0.08119,
					 0.0805,0.07996, 0.07955, 0.07928,
					 0.07914, 0.0791, 0.07917, 0.07932,
					 0.07953, 0.07981, 0.08012,0.08045,
					 0.0808, 0.08114, 0.08147, 0.08176,
					 0.08201, 0.0822 };


  Double_t atlas_v1errors_20to30[86] = { 0.00286, 0.00116, 6.68E-4, 0.001855,
					 0.003042, 0.002423, 0.001804, 0.002023,
					 0.002242,0.00193, 0.00161, 0.00169,
					 0.00177, 0.00185, 0.00193, 0.002,
					 0.0019, 0.0018, 0.0017,0.0016,
					 0.0015, 0.00158, 0.00166, 0.00174,
					 0.00182, 0.0019, 0.00187, 0.00184,
					 0.00181,0.0018, 0.0017, 0.0019,
					 0.0021, 0.0022, 0.0024, 0.0026,
					 0.0026, 0.0027, 0.0028,0.0032,
					 0.0036, 0.0038, 0.004, 0.0041,
					 0.0042, 0.0042, 0.0042, 0.0043,
					 0.0045,0.0047, 0.0049, 0.0052,
					 0.0056, 0.006, 0.0058, 0.00551,
					 0.00563, 0.00575, 0.00588,0.00602,
					 0.00618, 0.00639, 0.0067, 0.007,
					 0.00708, 0.00717, 0.00732, 0.00747,
					 0.00758,0.0077, 0.00783, 0.00802,
					 0.00821, 0.00841, 0.00856, 0.00871,
					 0.00883, 0.00894, 0.00903,0.00912,
					 0.00919, 0.00926, 0.00932, 0.00938,
					 0.00943, 0.00947 };

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

//////////////////ATLAS DATA 40-50%
  Double_t atlas_v1values_40to50[86] = { -0.0131, -0.01066, -0.00805, -0.005069,
					 -0.001338, 0.003355, 0.008394, 0.01318,
					 0.01798,0.02318, 0.02863, 0.03408,
					 0.0395, 0.04487, 0.05018, 0.05543,
					 0.06061, 0.06571, 0.07076,0.07574,
					 0.08068, 0.08555, 0.09032, 0.09491,
					 0.09927, 0.1033, 0.107, 0.1104,
					 0.1134,0.116, 0.1183, 0.1202,
					 0.1218, 0.1231, 0.1241, 0.1249,
					 0.1255, 0.1259, 0.1261,0.1262, 
					 0.1262, 0.1262, 0.126, 0.1258,
					 0.1255, 0.125, 0.1245, 0.1238,
					 0.123,0.122, 0.1208, 0.1195,
					 0.1181, 0.1165, 0.1148, 0.1131,
					 0.1114, 0.1096, 0.1078,0.1061,
					 0.1045, 0.1029, 0.1015, 0.1002,
					 0.09894, 0.09783, 0.09684, 0.09596,
					 0.0952,0.09457, 0.09406, 0.09368,
					 0.09342, 0.09327, 0.0932, 0.09322,
					 0.09331, 0.09345, 0.09363,0.09385,
					 0.09408, 0.09432, 0.09455, 0.09476,
					 0.09495, 0.09509 };

  Double_t atlas_v1errors_40to50[86] = { 0.00654, 0.00223, 0.00172, 0.003515,
					 0.00531, 0.003958, 0.002606, 0.00283,
					 0.00306,0.00291, 0.00276, 0.00288,
					 0.003, 0.00312, 0.00324, 0.00335,
					 0.00344, 0.00352, 0.0036,0.00368,
					 0.00376, 0.0039, 0.00403, 0.00417,
					 0.00431, 0.0044, 0.0044, 0.0044,
					 0.0044,0.0044, 0.0044, 0.0047,
					 0.0049, 0.0052, 0.0055, 0.0057,
					 0.0061, 0.0066, 0.0071,0.0075,
					 0.008, 0.0082, 0.0086, 0.009,
					 0.0089, 0.0088, 0.0084, 0.008,
					 0.0083,0.0086, 0.0091, 0.0097,
					 0.0103, 0.011, 0.0105, 0.0099,
					 0.0103, 0.0106, 0.011,0.0115,
					 0.012, 0.0125, 0.0131, 0.0137,
					 0.01384, 0.01397, 0.01441, 0.01484,
					 0.01521,0.01559, 0.01593, 0.0163,
					 0.01662, 0.01694, 0.01707, 0.0172,
					 0.01739, 0.01758, 0.01772,0.01785,
					 0.01796, 0.01806, 0.01813, 0.0182,
					 0.01826, 0.01829 };

////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////CMS//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
  //CMS data 10-20%///////////////////////
  Float_t trdatapoints_2010_10to20[16]={-0.00325511,-0.00264375,-0.00164186,-0.000123301,
                                        0.00170244,0.00339901,0.0055065,0.00849105,
                                        0.0121468,0.0170716,0.0222057,0.0244224,
                                        0.0299075,0.0286183,0.0151039,0.000291607};

  Float_t trerror_2010_10to20[16]={4.75803e-05,5.50509e-05,6.61209e-05,8.01614e-05,
                                   9.76049e-05,0.000116634,0.000139088,0.000199143,
                                   0.000186055,0.000272821,0.000397128,0.000569706,
                                   0.000629495,0.00101018,0.00231222,0.0055182};

  Float_t bincenter_2010_10to20[16]={0.496397,0.694244,0.893636,1.09351,
                                     1.29333,1.49959,1.69309,1.89368,
                                     2.1747,2.57491,2.97547,3.37691,
                                     3.94732,5.15308,7.53971,10.519};

  //Raw <cos(Psi_a - Psi_b)>
  Double_t rawres_2010_10to20=0.0262729;
  //Real Resolution
  Double_t realres_2010_10to20=0.229229;

  ///CMS data 20-30%////////////////////
  Float_t trdatapoints_2010_20to30[16]={-0.00360051,-0.00289821,-0.00171568,-0.000185204,
                                        0.00181064,0.00384769,0.00582402,0.00835414,
                                        0.0116744,0.0160811,0.0215079,0.0236252,
                                        0.0292363,0.0261316,0.0154939,0.00553109};

  Float_t trerror_2010_20to30[16]={5.77413e-05,6.70232e-05,8.07198e-05,9.80257e-05,
                                   0.000119514,0.000143144,0.000171086,0.000243218,
                                   0.000226907,0.000331166,0.000478031,0.000677869,
                                   0.000736439,0.00114749,0.00259662,0.00627946};

  Float_t bincenter_2010_20to30[16]={0.496285,0.694163,0.893576,1.09345,
                                     1.29328,1.49945,1.69309,1.89367,
                                     2.17494,2.5754,2.97624,3.37759,
                                     3.9508,5.16203,7.53737,10.5201};

  //Raw <cos(Psi_a - Psi_b)>
  Double_t rawres_2010_20to30=0.0215682;
  //Real Resolution
  Double_t realres_2010_20to30=0.207693;

  ///CMS Data 30-40%///////////////////////////////////////////////

  Float_t trdatapoints_2010_30to40[16]={-0.00340688,-0.00286284,-0.00148177,-1.65883e-05,
                                        0.00174572,0.00370613,0.00594541,0.00825915,
                                        0.0118355,0.01646,0.0199311,0.0227737,
                                        0.0244216,0.021927,0.00836197,-0.00596023};

  Float_t trerror_2010_30to40[16]={7.11721e-05,8.31674e-05,0.000100657,0.000122711,
                                   0.000150046,0.000180344,0.00021616,0.000305727,
                                   0.000284997,0.000413918,0.000592694,0.000832485,
                                   0.000887973,0.00134523,0.00301863,0.00734261};

  Float_t bincenter_2010_30to40[16]={0.496034,0.693962,0.893441,1.09336,
                                     1.29321,1.49926,1.69302,1.89369,
                                     2.17509,2.57566,2.9769,3.37846,
                                     3.95471,5.16966,7.53458,10.5232};

  //Raw <cos(Psi_a - Psi_b)>
  Double_t rawres_2010_30to40=0.0176922;
  //Real Resolution
  Double_t realres_2010_30to40=0.188107;

  ////////////////////////////////////////////////////////////////////////

  //CMS data 40-50%////////////
  Float_t trdatapoints_2010_40to50[16]={-0.00285408,-0.00228102,-0.000837566,0.000716039,
                                        0.00221209,0.00459246,0.00626835,0.00908185,
                                        0.0110173,0.0145896,0.0179174,0.0209914,
                                        0.0188315,0.0166309,0.0071668,-0.0351846};

  Float_t trerror_2010_40to50[16]={9.94921e-05,0.000117243,0.000142858,0.000175085,
                                   0.000214913,0.000259346,0.000311745,0.000439467,
                                   0.000409397,0.000592362,0.000842298,0.00117383,
                                   0.00123008,0.00182418,0.00403419,0.0099071};

  Float_t bincenter_2010_40to50[16]={0.4957,0.693715,0.893241,1.09319,
                                     1.29308,1.4992,1.69295,1.89366,
                                     2.17518,2.57607,2.97738,3.37898,
                                     3.95781,5.17783,7.53311,10.5232};

  //Raw <cos(Psi_a - Psi_b)>
  Double_t rawres_2010_40to50=0.0100605;
  //Real Resolution
  Double_t realres_2010_40to50=0.141849;//////////////////////


  /////////////////////////////////////////////////////////////////////////


  Float_t pt_bin[17]={0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.4,2.8,3.2,3.6,4.5,6.5,9.5,12};


  Float_t xerrors[16]={0.};

  for (Int_t i=0;i<16;i++)
    {
      trdatapoints_2010_10to20[i]=trdatapoints_2010_10to20[i]/realres_2010_10to20;
      trdatapoints_2010_20to30[i]=trdatapoints_2010_20to30[i]/realres_2010_20to30;
      trdatapoints_2010_30to40[i]=trdatapoints_2010_30to40[i]/realres_2010_30to40;
      trdatapoints_2010_40to50[i]=trdatapoints_2010_40to50[i]/realres_2010_40to50;
    }//end of correction loop
////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////CMS PLOTS///////////////////////////////////////////////////
  //CMS 30to40
  TGraphErrors *V1Even = new TGraphErrors(15,bincenter_2010_30to40,trdatapoints_2010_30to40,xerrors,trerror_2010_30to40);
  V1Even->SetMarkerStyle(22);
  V1Even->SetName("V1Even");
  V1Even->SetMarkerColor(kBlue);
  V1Even->SetMarkerSize(1.3);
  V1Even->SetTitle("");
  V1Even->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  V1Even->GetYaxis()->SetTitle("v_{1}^{even}");
  V1Even->GetXaxis()->CenterTitle(1);
  V1Even->GetYaxis()->CenterTitle(1);
  V1Even->GetXaxis()->SetTickLength(0.02);
  V1Even->GetYaxis()->SetTickLength(0.02);
  gStyle->SetPadTickY(1);
  gStyle->SetPadTickX(1);

  //CMS 10to20
  TGraphErrors *V1Even_10to20 = new TGraphErrors(15,bincenter_2010_10to20,trdatapoints_2010_10to20,xerrors,trerror_2010_10to20);
  V1Even_10to20->SetMarkerStyle(22);
  V1Even_10to20->SetName("V1Even_10to20");
  V1Even_10to20->SetMarkerColor(kBlue);
  V1Even_10to20->SetMarkerSize(1.3);
  V1Even_10to20->SetTitle("");
  V1Even_10to20->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  V1Even_10to20->GetYaxis()->SetTitle("v_{1}^{even}");
  V1Even_10to20->GetXaxis()->CenterTitle(1);
  V1Even_10to20->GetYaxis()->CenterTitle(1);
  V1Even_10to20->GetXaxis()->SetTickLength(0.02);
  V1Even_10to20->GetYaxis()->SetTickLength(0.02);

  //CMS 2PC 20to30
  TGraphErrors *V1Even_20to30 = new TGraphErrors(15,bincenter_2010_20to30,trdatapoints_2010_20to30,xerrors,trerror_2010_20to30);
  V1Even_20to30->SetMarkerStyle(22);
  V1Even_20to30->SetName("V1Even_20to30");
  V1Even_20to30->SetMarkerColor(kBlue);
  V1Even_20to30->SetMarkerSize(1.3);
  V1Even_20to30->SetTitle("");
  V1Even_20to30->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  V1Even_20to30->GetYaxis()->SetTitle("v_{1}^{even}");
  V1Even_20to30->GetXaxis()->CenterTitle(1);
  V1Even_20to30->GetYaxis()->CenterTitle(1);
  V1Even_20to30->GetXaxis()->SetTickLength(0.02);
  V1Even_20to30->GetYaxis()->SetTickLength(0.02);

  //CMS 2PC 40to50
  TGraphErrors *V1Even_40to50 = new TGraphErrors(15,bincenter_2010_40to50,trdatapoints_2010_40to50,xerrors,trerror_2010_40to50);
  V1Even_40to50->SetMarkerStyle(22);
  V1Even_40to50->SetName("V1Even_40to50");
  V1Even_40to50->SetMarkerColor(kBlue);
  V1Even_40to50->SetMarkerSize(1.3);
  V1Even_40to50->SetTitle("");
  V1Even_40to50->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  V1Even_40to50->GetYaxis()->SetTitle("v_{1}^{even}");
  V1Even_40to50->GetXaxis()->CenterTitle(1);
  V1Even_40to50->GetYaxis()->CenterTitle(1);
  V1Even_40to50->GetXaxis()->SetTickLength(0.02);
  V1Even_40to50->GetYaxis()->SetTickLength(0.02);





  ///////////////////////////////////////////////////////////ATLAS PLOTS/////////////////////////////////////////////////////////
//ATLAS 2PC 30-40%
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


 //10-20% 
 TGraphErrors *Atlasdata_10to20 = new TGraphErrors(86,atlas_ptvalues,atlas_v1values_10to20,atlas_v1errors_10to20,atlas_v1errors_10to20);
 Atlasdata->GetXaxis()->SetTitle("p_{T} (GeV/c)");
 Atlasdata->GetYaxis()->SetTitle("v_{1}^{even}");
 Atlasdata->SetTitle("");
 Atlasdata->SetName("Atlasdata_10to20");
 Atlasdata->GetXaxis()->CenterTitle(1);
 Atlasdata->GetYaxis()->CenterTitle(1);
 Atlasdata->GetXaxis()->SetTickLength(0.02);
 Atlasdata->GetYaxis()->SetTickLength(0.02);
 gStyle->SetPadTickY(1);
 gStyle->SetPadTickX(1);

 //20-30%
 TGraphErrors *Atlasdata_20to30 = new TGraphErrors(86,atlas_ptvalues,atlas_v1values_20to30,atlas_v1errors_20to30,atlas_v1errors_20to30);
 Atlasdata->GetXaxis()->SetTitle("p_{T} (GeV/c)");
 Atlasdata->GetYaxis()->SetTitle("v_{1}^{even}");
 Atlasdata->SetTitle("");
 Atlasdata->SetName("Atlasdata_20to30");
 Atlasdata->GetXaxis()->CenterTitle(1);
 Atlasdata->GetYaxis()->CenterTitle(1);
 Atlasdata->GetXaxis()->SetTickLength(0.02);
 Atlasdata->GetYaxis()->SetTickLength(0.02);
 gStyle->SetPadTickY(1);
 gStyle->SetPadTickX(1);


 //40-50%
 TGraphErrors *Atlasdata_40to50 = new TGraphErrors(86,atlas_ptvalues,atlas_v1values_40to50,atlas_v1errors_40to50,atlas_v1errors_40to50);
 Atlasdata->GetXaxis()->SetTitle("p_{T} (GeV/c)");
 Atlasdata->GetYaxis()->SetTitle("v_{1}^{even}");
 Atlasdata->SetTitle("");
 Atlasdata->SetName("Atlasdata_40to50");
 Atlasdata->GetXaxis()->CenterTitle(1);
 Atlasdata->GetYaxis()->CenterTitle(1);
 Atlasdata->GetXaxis()->SetTickLength(0.02);
 Atlasdata->GetYaxis()->SetTickLength(0.02);
 gStyle->SetPadTickY(1);
 gStyle->SetPadTickX(1);




 ////////////////////////////////////////////////////////////////////////////////////////


 TH1F* zeroer= new TH1F("zeroer","zeroer",87,zeroervalues);
  zeroer->SetLineStyle(2);
  zeroer->SetLineWidth(2);
  zeroer->SetLineColor(2);
  zeroer->SetMaximum(0.17);
  zeroer->SetMinimum(-0.025);
  zeroer->SetTitle("");
  zeroer->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  zeroer->GetYaxis()->SetTitle("v_{1}^{even}");
  zeroer->GetXaxis()->CenterTitle(1);
  zeroer->GetYaxis()->CenterTitle(1);
  zeroer->GetXaxis()->SetTickLength(0.02);
  zeroer->GetYaxis()->SetTickLength(0.02);
  gStyle->SetOptStat(0);
  Float_t zero[87]={0.};
 
  for (Int_t i=0;i<87;i++)
    {
      //V1PtEven->SetBinContent(i+1,trdata_points[i]/realres);
      //V1PtEven->SetBinError(i+1,trerror[i]);
      zeroer->SetBinContent(i+1,zero[i]);
    }//end of filling data points
 

  new TCanvas;
  c1->Divide(4,1,0);
  c1->cd(1);
  zeroer->Draw();
  Atlasdata_10to20->Draw("Lsame");
  V1Even_10to20->Draw("Psame");
  c1->cd(2);
  zeroer->Draw();
  Atlasdata_20to30->Draw("Lsame");
  V1Even_20to30->Draw("Psame");
  c1->cd(3);
  zeroer->Draw();
  Atlasdata->Draw("Lsame");
  V1Even->Draw("Psame");
  c1->cd(4);
  zeroer->Draw();
  Atlasdata_40to50->Draw("Lsame");
  V1Even_40to50->Draw("Psame");

  ///Legend///
  c1->cd(1);
  TLegend* leg= new TLegend(0.22,0.85,0.5,0.95,"v_{1}","brNDC");
  leg->AddEntry("Atlasdata_10to20","v_{1}{2} ATLAS","lp");
  leg->AddEntry("V1Even_10to20","v_{1}{EP} CMS","lp");
  leg->SetFillColor(kWhite);
  leg->SetTextFont(43);
  leg->SetTextSize(14);
  leg->SetBorderSize(1);
  leg->Draw();
  //////////////////
  ///TLatex////
  tex1=new TLatex(0.75,0.9,"10-20%");
  tex1->SetNDC();
  tex1->SetTextFont(43);
  tex1->SetTextSize(16);
  //tex1->SetTextColor(kRed);
  tex1->Draw();

  c1->cd(2);
  tex2=new TLatex(0.75,0.9,"20-30%");
  tex2->SetNDC();
  tex2->SetTextFont(43);
  tex2->SetTextSize(16);
  tex2->Draw();

  c1->cd(3);
  tex4=new TLatex(0.75,0.9,"30-40%");
  tex4->SetNDC();
  tex4->SetTextFont(43);
  tex4->SetTextSize(16);
  tex4->Draw();


  c1->cd(4);
  tex6=new TLatex(0.75,0.9,"40-50%");
  tex6->SetNDC();
  tex6->SetTextFont(43);
  tex6->SetTextSize(16);
  tex6->Draw();
  

}

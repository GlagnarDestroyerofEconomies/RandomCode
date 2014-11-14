{

  #include "TH1F.h"
  #include "TF1.h"
  
  //Make A Random Gaussian and set titles and other fun stuff
  TH1F h1("h1","Histo from a Gaussian",100,-3,3);
  h1->GetXaxis()->SetTitle("X axis Title");
  h1->GetYaxis()->SetTitle("Y axis Title");
  h1->SetMarkerSize(1.0);
  h1->SetMarkerStyle(21);
  h1.FillRandom("gaus",10000);
  
  
  //Clone the first histogram
  TH1F *hnew = (TH1F*)h1->Clone("hnew");
  hnew->GetYaxis()->SetRangeUser(-1,4);
  
  //This is just defining a gaussian explicity
  TF1 *myfit = new TF1("myfit","([0]/(TMath::Sqrt(TMath::TwoPi())*[2]))*(TMath::Exp(-0.5*((x-[1])/[2])^2))",-3, 3);
  myfit->SetParameter(1,0);
  myfit->SetParameter(2,1);

//TF1 *myfit = new TF1("myfit","gaus",-3,3);
 
  new TCanvas;
  h1->Draw("P");
  h1->Fit("myfit");
  
  new TCanvas;
  myfit->Draw();

  //  hnew->Divide(myfit);
  

  new TCanvas;
  hnew->Divide(myfit);
  hnew->Draw();




}

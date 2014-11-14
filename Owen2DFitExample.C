{

#include "TH2F.h"
#include "TF2.h"




  //Make A Random 2D Gaussian and set titles and other fun stuff
  TH2F h1("h1","2DGaussian",100,-3,3,100,-3,3);
  h1->SetOption("surf3z");
  h1->GetXaxis()->SetTitle("My X Title");
  h1->GetYaxis()->SetTitle("My Y Title");
  TRandom3 foo(12345);
  for(int i=0;i<10000;i++)
    {
      h1->Fill(foo.Gaus(0,1),foo.Gaus(0,1));
    }



  //This is just defining a 2D gaussian explicity
  //TF2 *my2dfit = new TF2("my2dfit","[0]*TMath::Gaus(x,[1],[2])*TMath::Gaus(y,[3],[4])",-3,3,-3,3);
  TF2 *my2dfit = new TF2("my2dfit","(([0]/(TMath::Sqrt(TMath::TwoPi())))*(1/([2]*[4])))*(TMath::Exp(-0.5*((x-[1])/[2])^2))*(TMath::Exp(-0.5*((y-[3])/[4])^2))");
  my2dfit->SetParameter(2,1);
  my2dfit->SetParameter(4,1);
  my2dfit->SetParameter(1,0);
  my2dfit->SetParameter(3,0);

  
  TH2F *hnew = (TH2F*)h1->Clone("hnew");
  
  





  new TCanvas;
  h1->Draw();
  h1->Fit("my2dfit");
  
  
  new TCanvas;
  my2dfit->Draw();

  //  hnew->Divide(myfit);


  new TCanvas;
  hnew->Divide(my2dfit);
  hnew->Draw();
}

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
  
  ofstream myout;
  myout.open("OllitrautDataPointsTest.txt");


for (int i=1;i<100;i++)
  {
    if (i==1) myout<<Float_t DataPoints[99]={"<<h1->GetBinContent(i)<<","<<endl;
    else if(i!=1 && i!=99) myout<<h1->GetBinContent(i)<<",";
    else if(i==99) myout<<h1->GetBinContent(i)<<"};"<<endl;
  }


myout.close();

}//end of whole thing

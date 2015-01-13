{

  TFile *f = new TFile("HFEP_EPPlotting_final.root");

  f.cd();
  Plots.cd();
  V1Results.cd();
  V1EtaOdd.cd();

  ofstream myout;
  myout.open("HFEPResults.txt");

  myout<<"Float_t eta_bin_small[7]={-1.5,-1.0,-0.5,0.0,0.5,1.0,1.5};"<<endl;

  myout<<endl;
  myout<<endl;


  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 0-10% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;


  //First V11 data
      for (int j=1;j<7;j++)
        {
          myout<<"V1HFEP_0to10["<<j-1<<"]="<<V1Eta_Odd_0to10->GetBinContent(j)<<";"<<endl;
        }
      
  myout<<endl;
  myout<<endl;

  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 10-20% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;


  for (int j=1;j<7;j++)
    {
      myout<<"V1HFEP_10to20["<<j-1<<"]="<<V1Eta_Odd_10to20->GetBinContent(j)<<";"<<endl;
    }




  myout<<endl;
  myout<<endl;


  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 20-30% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;


  for (int j=1;j<7;j++)
    {
      myout<<"V1HFEP_20to30["<<j-1<<"]="<<V1Eta_Odd_20to30->GetBinContent(j)<<";"<<endl;
    }


  myout<<endl;
  myout<<endl;

  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 30-40% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;


  for (int j=1;j<7;j++)
    {
      myout<<"V1HFEP_30to40["<<j-1<<"]="<<V1Eta_Odd_30to40->GetBinContent(j)<<";"<<endl;
    }



  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 40-50% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;


  for (int j=1;j<7;j++)
    {
      myout<<"V1HFEP_40to50["<<j-1<<"]="<<V1Eta_Odd_40to50->GetBinContent(j)<<";"<<endl;
    }

  myout<<endl;
  myout<<endl;



  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//++++   EP Resolutions                           +++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

  f.cd();
  Plots.cd();
  Resolutions.cd();
  OddResolutions.cd();
  
  for (int j=1;j<6;j++)
    {
      Double_t resolution=0.;
      resolution= TMath::Sqrt((fabs(HFPMinusHFMOdd->GetBinContent(j))*fabs(HFPMinusTROdd->GetBinContent(j)))/fabs(HFMMinusTROdd->GetBinContent(j)));
      myout<<"V1EPResolution["<<j-1<<"]="<<resolution<<";"<<endl;
    }

  myout.close();

}

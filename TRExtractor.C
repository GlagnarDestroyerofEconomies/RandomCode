{

  TFile *f = new TFile("TREP_EPPlotting_final.root");

  f.cd();
  Plots.cd();
  V1Results.cd();

  ofstream myout;
  myout.open("TREPResults.txt");


  myout<<"ptbinsoriginal[17]={0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.4,2.8,3.2,3.6,4.5,6.5,9.5,12};"<<endl;
  myout<<endl;
  myout<<endl;
  
  for (int j=1;j<17;j++)
    {
      if (j==1) myout<<"Ptdatapoints_0to10[17]={"<<pTcenter_0to10->GetBinContent(j)<<",";
      else if (j!=16) myout<<pTcenter_0to10->GetBinContent(j)<<",";
      else if (j==16) myout<<pTcenter_0to10->GetBinContent(j)<<"};"<<endl;
    }

  myout<<endl;
  myout<<endl;
  
  for (int j=1;j<17;j++)
    {
      if (j==1) myout<<"Ptdatapoints_10to20[17]={"<<pTcenter_10to20->GetBinContent(j)<<",";
      else if (j!=16) myout<<pTcenter_10to20->GetBinContent(j)<<",";
      else if (j==16) myout<<pTcenter_10to20->GetBinContent(j)<<"};"<<endl;
    }

  myout<<endl;
  myout<<endl;

  for (int j=1;j<17;j++)
    {
      if (j==1) myout<<"Ptdatapoints_20to30[17]={"<<pTcenter_20to30->GetBinContent(j)<<",";
      else if (j!=16) myout<<pTcenter_20to30->GetBinContent(j)<<",";
      else if (j==16) myout<<pTcenter_20to30->GetBinContent(j)<<"};"<<endl;
    }

  myout<<endl;
  myout<<endl;

  for (int j=1;j<17;j++)
    {
      if (j==1) myout<<"Ptdatapoints_30to40[17]={"<<pTcenter_30to40->GetBinContent(j)<<",";
      else if (j!=16) myout<<pTcenter_30to40->GetBinContent(j)<<",";
      else if (j==16) myout<<pTcenter_30to40->GetBinContent(j)<<"};"<<endl;
    }

  myout<<endl;
  myout<<endl;

  for (int j=1;j<17;j++)
    {
      if (j==1) myout<<"Ptdatapoints_40to50[17]={"<<pTcenter_40to50->GetBinContent(j)<<",";
      else if (j!=16) myout<<pTcenter_40to50->GetBinContent(j)<<",";
      else if (j==16) myout<<pTcenter_40to50->GetBinContent(j)<<"};"<<endl;
    }

  myout<<endl;
  myout<<endl;




  V1pTEven.cd();

  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 0-10% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;


  //First V11 data
      for (int j=1;j<17;j++)
        {
          myout<<"V1PtEven_0to10["<<j-1<<"]="<<V1PtEven_0to10->GetBinContent(j)<<";"<<endl;
        }
      
  myout<<endl;
  myout<<endl;

  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 10-20% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

  for (int j=1;j<17;j++)
    {
      myout<<"V1PtEven_10to20["<<j-1<<"]="<<V1PtEven_10to20->GetBinContent(j)<<";"<<endl;
    }



  myout<<endl;
  myout<<endl;


  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 20-30% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;


  for (int j=1;j<17;j++)
    {
      myout<<"V1PtEven_20to30["<<j-1<<"]="<<V1PtEven_20to30->GetBinContent(j)<<";"<<endl;
    }


  myout<<endl;
  myout<<endl;

  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 30-40% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;


  for (int j=1;j<17;j++)
    {
      myout<<"V1PtEven_30to40["<<j-1<<"]="<<V1PtEven_30to40->GetBinContent(j)<<";"<<endl;
    }



  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++ 40-50% ++++++++++++++++++++++++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

  for (int j=1;j<17;j++)
    {
      myout<<"V1PtEven_40to50["<<j-1<<"]="<<V1PtEven_40to50->GetBinContent(j)<<";"<<endl;
    }



  myout<<endl;
  myout<<endl;



  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  myout<<"//++++   EP Resolutions                           +++++"<<endl;
  myout<<"//+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

  f.cd();
  Plots.cd();
  EventPlaneResolutions.cd();
  PsiOneEvenResolution.cd();

  std::cout<<"I made it here"<<std::endl;
 
  //0to10
  //myout<<"TREPResolution_0to10="<<
  myout<<TMath::Sqrt((fabs(TRPMinusTRM_EPResolution_0to10->GetBinContent(1))*fabs(TRPMinusTRC_EPResolution_0to10->GetBinContent(1)))/fabs(TRMMinusTRC_EPResolution_0to10->GetBinContent(1)))<<";"<<endl;
		     
					       
  //10to20
  myout<<TMath::Sqrt((fabs(TRPMinusTRM_EPResolution_10to20->GetBinContent(1))*fabs(TRPMinusTRC_EPResolution_10to20->GetBinContent(1)))/fabs(TRMMinusTRC_EPResolution_10to20->GetBinContent(1)))<<";"<<endl;

  //20 to 30
  myout<<TMath::Sqrt((fabs(TRPMinusTRM_EPResolution_20to30->GetBinContent(1))*fabs(TRPMinusTRC_EPResolution_20to30->GetBinContent(1)))/fabs(TRMMinusTRC_EPResolution_20to30->GetBinContent(1)))<<";"<<endl;

  //30 to 40
  myout<<TMath::Sqrt((fabs(TRPMinusTRM_EPResolution_30to40->GetBinContent(1))*fabs(TRPMinusTRC_EPResolution_30to40->GetBinContent(1)))/fabs(TRMMinusTRC_EPResolution_30to40->GetBinContent(1)))<<";"<<endl;

  //40 to 50
  myout<<TMath::Sqrt((fabs(TRPMinusTRM_EPResolution_40to50->GetBinContent(1))*fabs(TRPMinusTRC_EPResolution_40to50->GetBinContent(1)))/fabs(TRMMinusTRC_EPResolution_40to50->GetBinContent(1)))<<";"<<endl;

  myout.close();

}

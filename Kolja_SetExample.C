
{
#include<set>
  int MinHits = 1;
  float MinEnergy=5;
  double tooHot=100000;
  set<int> goodmodules;
  //  goodmodules.insert(0);
  goodmodules.insert(1);
  goodmodules.insert(2);
  goodmodules.insert(3);
  goodmodules.insert(4);
  goodmodules.insert(5);
  goodmodules.insert(6);
  goodmodules.insert(7);
  goodmodules.insert(8);
  goodmodules.insert(9);
  goodmodules.insert(10);
  goodmodules.insert(11);
  goodmodules.insert(12);
  goodmodules.insert(13);
  goodmodules.insert(14);
  goodmodules.insert(15);
  goodmodules.insert(16);
  


  TChain* chain= new TChain("CastorRecoTree");
  //   TChain* chain1= new TChain("ZDCDigiTree");
  chain->Add("/hadoop/store/user/belt/ZDC_PA2013_ForCalibration/211623/running/ZDCTree*");
  // chain1->Add("/hadoop/store/user/belt/ZDC_PA2013_ForCalibration/211623/running/ZDCTree*");
  //  chain->Add("/hadoop/store/user/jgomez2/HeavyIonRun2013/PAUPCMinBias_RAW/ForwardTrees_PAUPCMinBiasRaw_211623merged_castorfix_beamreversal.root");
  //chain1->Add("/hadoop/store/user/jgomez2/HeavyIonRun2013/PAUPCMinBias_RAW/ForwardTrees_PAUPCMinBiasRaw_211623merged_castorfix_beamreversal.root");
  int NumberOfEvents=0;
  

  //  NumberOfEvents = chain->GetEntries();
  //  NumberOfEvents=1000000;
  NumberOfEvents=50000;
  // NumberOfEvents=100;
  // NumberOfEvents=1;

  /////////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////////
  //////////////////////VARIABLES////////////////////////////////////
  ///////////////////////////////////////////////////////////////////
  int NumberOfRecHits = 0;
  int module=0;
  int sector=0;
  double TotalHits=0.;
  int EventHits=0;
  int ModuleHits=0;
  double X_n=0.;
  double Y_n=0.; 
  double Psi_n=0.;
  double pi=3.14159265;
  double Energy=0.;
  bool hotevent=false;
  
  
  //////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////   
  
 
  
  
  
  TH1F* histogram_1 = new TH1F("EventPlane","#Psi_{EP} (radians) Odd  Modules,E>100",16*8,-pi,pi);  
  TH1F* histogram_3 = new TH1F("NhitVsPhi","Weighting as a function of Sector Angle",16,-pi, pi);
  TH1F* hphi         = new TH1F("hphi","N_hit vs Phi (radians) Odd Modules , E>100",16*4,-pi, pi);
  TH1F* ephi        = new TH1F("ephi","E vs Phi (radians), E>5",20,1,21);

  histogram_1->Sumw2();
  hphi->Sumw2();
  ephi->Sumw2();
  // histogram_3->Sumw2();
      
  ////////////////////////////////////
  /////FIRST LOOP OVER ALL EVENTS/////
  ///////////////////////////////////
  float phi=0;
  set<int> sectorused;

  for(int i =0;i<NumberOfEvents;i++)    {
    if ( !(i%10000) ) cout << " 1st round, event # " << i << " / " << NumberOfEvents << endl;
    
    hotevent=false;
    chain->GetEntry(i);
    CasSec= (TLeaf*) chain->GetLeaf("Castor_Section");
    CasMod= (TLeaf*) chain->GetLeaf("Castor_Module");
    CasSector= (TLeaf*) chain->GetLeaf("Castor_Sector");
    CasHits= (TLeaf*) chain->GetLeaf("Castor_NumberOfHits");
    CasEN= (TLeaf*) chain->GetLeaf("Castor_Energy");
    NumberOfRecHits= CasHits->GetValue();
    
    // First check if event is acceptable
    EventHits=0;
    ModuleHits=0;
    sectorused.clear();
    for (int j=0;j<NumberOfRecHits;j++){
      module=0;
      sector=0;
      Energy=0.;
      module=CasMod->GetValue(j);
      sector=CasSector->GetValue(j);
      Energy=CasEN->GetValue(j);
      if (Energy>tooHot) 
	{
	  hotevent=true;
	  std::cout<<"Gosh its hot in sector"<<" " <<sector<<std::endl;
	  break;
	}
      // ephi->Fill(sector,Energy);
      //      std::cout<<sector<<' '<<Energy<<std::endl;
      if ( goodmodules.count(module)>0 && sectorused.count(sector)==0 && Energy>MinEnergy)
	{	  
	  sectorused.insert(sector);
	  EventHits++;
	  // The loop below tries to count hits only once 
	  // if they are in the same sector but different modules.
	  // I think that's not a good thing and it needs to be done differently in any case
	  // Disabling for now
// 	  if(ModuleHits==0)
// 	    {
// 	      ModuleHits=module;
// 	      EventHits++;
// 	    }
// 	  else if(ModuleHits==module)
// 	    {
// 	      continue;
// 	    }
// 	  else if(ModuleHits!=module)
// 	    {
// 	      EventHits++;
// 	    }
	}
    }
    if ((EventHits<MinHits) || (hotevent)) continue;
        
    ////////////////////////////////////////
    //////////LOOP OVER CASTOR RECHITS//////
    ////////////////////////////////////////
    sectorused.clear();
    for (int j=0;j<NumberOfRecHits;j++)
      {
	module=0;
	sector=0;
	Energy=0.;
	module=CasMod->GetValue(j);
	sector=CasSector->GetValue(j);
	Energy=CasEN->GetValue(j);
	phi=0;
	if ( goodmodules.count(module)>0 && sectorused.count(sector)==0 && Energy>MinEnergy)
	  {
	    sectorused.insert(sector);
	    
	    //KOLJAS WAY
	    
	    phi = atan2(sin((sector)*(22.5*pi)/180),cos((sector)*(22.5*pi)/180)); // complicated way to map phi into +-pi
	    // cout << phi << endl;	    
	    //////////////////
	    
	    histogram_3->Fill( phi-0.01 ); // phi sits on sector boundaries, push it inward just to be safe
	    // cout << atan2(sin((sector)*(22.5*pi)/180),cos((sector)*(22.5*pi)/180)) << endl;
	    //std::cout<<Energy<<" "<<sector<<std::endl
	  }//Energy>1000 && module<4
      }//END OF LOOP OVER RECHITS
    /////////////////////////////////////
    /////////////////////////////////////
    /////////////////////////////////////
  }//END OF FIRST LOOP OVER EVENTS
  ////////////////////////////////////
  ////////////////////////////////////
  /////////////////////////////////// 
  
  // weights should for example average out to unity
  histogram_3->Scale(1./histogram_3->GetEntries()*16);
  //  histogram_3->Draw();return;
  
       
  //Now there is a specific weighting for each sector, when calling the function later to fit the EP using cos, sin of phi_i, there will be a specific weighting for each sector.
  //////////////////////////////
  //////////////////////////////
  //////////////////////////////
       
       
       
  ////////////////////////////////////
  /////SECOND LOOP OVER ALL EVENTS/////
  ///////////////////////////////////  
  for(int i =0;i<NumberOfEvents;i++)
    {
      float w=1;
      hotevent=false;
      if ( !(i%10000) ) cout << " 2nd round, event # " << i << " / " << NumberOfEvents << endl;
      
      chain->GetEntry(i);
      ///////////////////////////////////////////////////////////
      /////////////////GRAB Leaves///////////////////////////////
      //////////////////////////////////////////////////////////
      CasSec= (TLeaf*) chain->GetLeaf("Castor_Section");
      CasMod= (TLeaf*) chain->GetLeaf("Castor_Module");
      CasSector= (TLeaf*) chain->GetLeaf("Castor_Sector");
      CasHits= (TLeaf*) chain->GetLeaf("Castor_NumberOfHits");
      CasEN= (TLeaf*) chain->GetLeaf("Castor_Energy");
      ////////////////////
      ////ZERO THE EP/////
      ////////////////////
      X_n=0.;
      Y_n=0.;
      Psi_n=0.;     
      ////////////////////
      
      ////////////////////////////////////////
      //////////LOOP OVER CASTOR RECHITS//////
      ////////////////////////////////////////     
      NumberOfRecHits= CasHits->GetValue();
      // First check if event is acceptable
      EventHits=0;
      ModuleHits=0;
      sectorused.clear();      
      for (int j=0;j<NumberOfRecHits;j++)
	{
	  module=0;
	  sector=0;
	  Energy=0.;
	  module=CasMod->GetValue(j);
	  sector=CasSector->GetValue(j);
	  Energy=CasEN->GetValue(j);
	  if (Energy>tooHot)
	    {
	      hotevent=true;
	      break;
	    }


	  if ( goodmodules.count(module)>0 && sectorused.count(sector)==0 && Energy>MinEnergy)
	    {
	      sectorused.insert(sector);
	      EventHits++;

// 	      if(ModuleHits==0)
// 		{
// 		  ModuleHits=module;
// 		  EventHits++;
// 		}
// 	      else if(ModuleHits==module)
// 		{
// 		  continue;
// 		}
// 	      else if(ModuleHits!=module)
// 		{
// 		  EventHits++;
// 		}
	    }
	}
      if ((EventHits<MinHits) || (hotevent==true)) continue;
      
      
      
      sectorused.clear();
      for (int j=0;j<NumberOfRecHits;j++)
	{
	  module=0;
	  sector=0;
	  Energy=0.;
	  phi=0;
	  module=CasMod->GetValue(j);
	  sector=CasSector->GetValue(j);
	  Energy=CasEN->GetValue(j);
	  if ( goodmodules.count(module)>0 && sectorused.count(sector)==0 && Energy>MinEnergy)
	    {
	      sectorused.insert(sector);
	      ///KOLJAS WAY
	      
	      phi = atan2(sin((sector)*(22.5*pi)/180),cos((sector)*(22.5*pi)/180));
	      //   w = 1./ histogram_3->GetBinContent(histogram_3->GetXaxis()->FindBin(phi-0.01)); // boundary stuff again.
	      w=1;
	      // smear out. without smearing, the values range from -7*pi/8 .. pi
	      // so subtract Rndm(pi/8)
	      phi-=pi/8.*gRandom->Rndm();
	      ///////////////////////
	      
	   
	      // std::cout<<histogram_3->GetXaxis()->FindBin(phi)<<" "<<sector<<std::endl;
	      // cout << w << endl;
	      // cout <<phi << "  " << w << endl;
	      //      std::cout<<Energy<<" "<<sector<<std::endl;
	      X_n+=cos( phi ) * w ;
	      Y_n+=sin( phi ) * w ;
	      hphi->Fill(phi, w);
	    }//Energy>1000
	}//END OF LOOP OVER CASTOR RECHITS
      ////////////////////////////////////////////
      ////////////////////////////////////////////
      ////////////////////////////////////////////
      
      
      Psi_n=atan2(Y_n,X_n);
      histogram_1->Fill(Psi_n);
      
      
    }//END OF SECOND EVENT LOOP
  ////////////////////////////////////
  ///////////////////////////////////
  ///////////////////////////////////
  
  c1 = new TCanvas();
  histogram_1->SetXTitle("#Psi_{EP} (radians)");
  histogram_1->SetYTitle("Counts");
  histogram_1->GetXaxis()->CenterTitle(1);
  histogram_1->GetXaxis()->CenterTitle(1);
  histogram_1->SetTitleOffset(1.13,"Y");
  histogram_1->Draw();
  
  
  c3 = new TCanvas();
  histogram_3->SetXTitle("#phi_{i} (radians)");
  histogram_3->SetYTitle("Counts");
  histogram_3->GetXaxis()->CenterTitle(1);
  histogram_3->GetXaxis()->CenterTitle(1);
  histogram_3->SetTitleOffset(1.13,"Y");
  histogram_3->Draw();   
  
  
  new TCanvas; 
  hphi->Draw();
  
  new TCanvas;
  ephi->Draw();
  
  
}//END OF WHOLE THING

//KOLJA's Special Fix
/*// ------------------------------------------------
// Bring angle value back into +-pi 
Float_t mod2pi (Float_t x)
{
  while ( x>=TMath::Pi() ) x-= TMath::TwoPi();
  while ( x<-TMath::Pi() ) x+= TMath::TwoPi();


  return x;
}
*/

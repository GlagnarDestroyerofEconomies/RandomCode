{

#include <vector>
  
  float Number=0.;
  float pi=TMath::Pi();
  std:: vector<float> Section;  

  TFile* f= new TFile("SomeOutput.root","RECREATE");
  TTree* t2 = new TTree("SomeTree","SomeTree");
  t2->Branch("Number",&Number,"Number/F");
  t2->Branch("Blah",&Section,"Blah/F");
  for(int i=0;i<100;i++)
    {
      Number=i+1.;
      //      Number=sin(2.0*pi*gRandom->Rndm());
      Section.clear();
      Section.push_back(i*5);
      t2->SetBranchAddress("Blah",&Section[0]);
      t2->Fill();
    }//end of loop
  f->Write();
}//end of whole thing

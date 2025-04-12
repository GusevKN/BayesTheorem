#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;
////////////////////////////////////
class CDetail {
public:
    CDetail();
//    int m_worker;
    bool m_detailBrak;
    int m_numWorker;
};
////////////////////////////////////
class CWorker {
public:
     CWorker(float,float,int);
     CDetail m_detail;
    CDetail randomBrak();
    float m_veroyatnostBraka;
    float m_kolVo;
    int m_numWorker;
};
//////////////////////////////////////////////////////////////////////////////////////////


int main(int argc, char* argv[])
{
  srand(time(NULL));
    CWorker FirstWorker(0.9,800,1);
    CWorker SecondWorker(0.5,600,2);
    CWorker ThirdWorker(0.2,900,3);
      vector<CDetail> Korob;
      int i=0;
      while(i<800){
     Korob.push_back(FirstWorker.randomBrak());
     cout<<FirstWorker.m_detail.m_detailBrak;
     i++;
      };
      cout<<endl;
           cout<<endl;
      i=0;
            while(i<600){
     Korob.push_back(SecondWorker.randomBrak());
     cout<<SecondWorker.m_detail.m_detailBrak;
     i++;
      };
      cout<<endl;
           cout<<endl;
      i=0;
            while(i<900){
     Korob.push_back(ThirdWorker.randomBrak());
     cout<<ThirdWorker.m_detail.m_detailBrak;
     i++;
      };
      
      
  int d = 0;
  double e;
  int f = 0;
        for(long int i = 0; i < 10000000; i++){    
   int r = rand()%Korob.size();                         
 if(Korob[r].m_detailBrak== 1){
      d++;
         if(Korob[r].m_numWorker == 3){
        f++;
      }
    }
  }
      e=(double)f/(double)d;
  cout << "  Вероятность  "  <<e*100<<" %" << endl;
  cout <<"  "<< Korob.size() << endl;
      
      
      
      
 return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////
CDetail::CDetail(){};
///////////////////////////////////
CWorker::CWorker(float veroyatnost, float kolVo, int nameWorker){
 m_veroyatnostBraka=veroyatnost;
 m_kolVo=kolVo;
 m_numWorker=nameWorker;
 m_detail.m_numWorker=m_numWorker;
 };
//////////////////////////////////
CDetail CWorker::randomBrak() {
 CDetail detail;
 int random = rand()%1000;
 int a = 1000*m_veroyatnostBraka;
 if(random<=a){
 detail.m_detailBrak=1;}
 else
{  detail.m_detailBrak=0;}
detail.m_numWorker=m_detail.m_numWorker;
m_detail=detail;
    return detail;
};

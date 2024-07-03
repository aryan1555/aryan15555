#include <iostream>
using namespace std;
 
 class cricket{
 protected:
    int bcod;
    char bname [20];
    int innings, notout, runs;
     float batavg;


      public:
    void  readdata (){
        cout<<"enter the bcod number:";
        cin>>bcod;
        cout<<"enter the bname:";
        cin>>bname;
        cout<<"enter the innings:";
        cin>>innings;
        cout<<"enter the notout  :";
        cin>>notout;
        cout<<"enter the runs:";
        cin>>runs;
    
    }
    int  calcavg(){
        return runs/(innings-notout);
}
 };
    class derive:public cricket{
        public:
        float batavg;
        void desplay(){
        batavg=calcavg();
        cout<<"average is :"<<batavg;

    }

 };


int main ()
{
    class derive pr;
    pr.readdata();
    pr.desplay();
return 0;
}
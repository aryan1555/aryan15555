#include <iostream>
using namespace std;

class student{
   protected:
    int adno;
    char sname[20];

   public:
   void getdata(){
        cout<<"enter the adnumber :"<<endl;
        cin>>adno;
        cout<<"enter the  sname:"<<endl;
        cin>>sname;
        
    }   
};
class student1{
    protected:
    float eng,maths,sci;
    
    public:
    void showdata (){
        cout<<"enter the eng marks :"<<endl;
        cin>>eng;
        cout<<"enter the maths marks :"<<endl;
        cin>>maths;
        cout<<"enter the sci:"<<endl;
        cin>>sci;
    }
};

class derive:public student,public student1{

        public:
        float total=0;
        void final(){
           total=eng+maths+sci;
            cout<<"total is ="<<total;
       
        }
    };


int main(){
class derive st;
st.getdata();
st.showdata();
st.final();
return 0;
}

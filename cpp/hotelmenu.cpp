#include<iostream>
 using namespace std;

 class hotel {

    protected:
    string name;
    string discripition;
    int qty;
    int rate;
    int amount;
    int total_amount;
    float gst;
    float discount;
    int final_amount;
    int menu[10];

 };



 int main (){


   hotel h;
   cout<<"o*o*o*o*o*o*o*o*o* Hotel Pet Puja *o*o**o*o*o*o*o*o*o*o*o"<<endl<<endl;
   
              cout<<"        <<<<<<<<<<Food Menu>>>>>>>>>>>>"   <<endl<<endl;

     cout<<"                :SANDWICH:        "<<endl<<endl;


      cout<<"No.              Food Dish               Price "<<endl;

      cout<<"1.              VEG.SANDWICH              ₹150/-  "<<endl;
      cout<<"2.        VEG.CHEES SANDWICH              ₹250/-  "<<endl;
      cout<<"3.        VEG.PANIR SANDWICH              ₹350/-  "<<endl;
      cout<<"4.      VEG.ITALIYANSANDWICH              ₹450/-  "<<endl;
      cout<<"5.          SP. VEG.SANDWICH              ₹550/-n   "<<endl;


      cout<<"selact the number"


   return 0;
 }
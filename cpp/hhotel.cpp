#include<iostream>
using namespace std;
class Hotel
{
    
    string Discriptin[50];
    int Rate[50];
    int Qty[50];
    int Amount[50];
    int Total_Amount;
    float Sgst;
    float Cgst;
    float Discount;
    int Final_Amount;
    float Discount_cal(int Amount_limit,float Discount_Rate);
    
    public:
    void Final(int Index);
    void showdetail(int Lindex);
    void setdetail(int Index,string Discriptin,int Rate,int Qty);
};

class Menu  {
   
    int Supe();
    
    public:
    string Description (int index);
    int Rate(int index);
    int print(int ch);
    int show();
    int setqty();
};

void Hotel:: setdetail(int Index,string Discriptin,int Rate,int Qty)
{
    this->Discriptin[Index]=Discriptin;
    this->Rate[Index]=Rate;
    this->Qty[Index]=Qty;
    this->Amount[Index]=Rate*Qty;
}
void Hotel:: Final(int Index)
{   int Amount=0;
    for(int i=0;i<Index;i++)
    {
       Amount+=this->Amount[i];
    }
    Total_Amount=Amount;
    Sgst=0.025*Total_Amount;
    Cgst=0.025*Total_Amount;
    Discount=Discount_cal(5000,0.05);
    Final_Amount=Total_Amount-Sgst-Cgst-Discount;
}
float Hotel:: Discount_cal(int Amount_limit,float Discount_Rate)
{
    if(Total_Amount>Amount_limit)
    {
        return Total_Amount*Discount_Rate;
    }
    return 0;
}
void Hotel:: showdetail(int Lindex)
{
    system("cls");
    cout<<"----------------------------------------------------"<<endl;
    cout<<"                  Bill Recipt                       "<<endl;
    cout<<"----------------------------------------------------"<<endl;
    
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Discription                     Rate\tQty   Amount"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    for(int i=0; i<Lindex; i++){
    cout<<Discriptin[i];
    cout<<Rate[i]<<"\t" ;
    cout<<Qty[i]<<"\t";
    cout<<Amount[i]<<endl;
    }
    cout<<"----------------------------------------------------"<<endl;
    cout<<"\t\t\tTotal Amount:-          "<<Total_Amount<<endl;
    cout<<"\t\t\tSGSt Amount(2.5%):-     "<<Sgst<<endl;
    cout<<"\t\t\tCGSt Amount(2.5%):-     "<<Cgst<<endl;
    cout<<"\t\t\tDiscount Amount:-       "<<Discount<<endl;
    cout<<"\t\t\tNet Amount:-            "<<Final_Amount<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"                   Thank You                        "<<endl;
    cout<<"----------------------------------------------------"<<endl;
}

int Menu:: setqty()
{   int q;
    cout<<"Enter You Qty:-";
    cin>>q;
    return q;
}
int Menu:: show()
{   int ch;
    Re4:
    cout<<"1. Supe"<<endl;

}
    
int Menu:: print(int ch)
{
switch (ch)
{
       case 1:
    return Supe()+10;
    break;
}
}  
int  Menu:: Supe()
{   int r;
    Re5:
    cout<<"1. Mancou"<<endl;
    cout<<"2. Toneto"<<endl;
    cout<<"3. Vagitabal corn"<<endl;
    cout<<"4. Noodels"<<endl;
    cout<<"Enter you Book Odar:-";
    cin>>r;
    if(r>0 && r<5){
    return r;
    }
    cout<<"invalide"<<endl;
    goto Re5;
}
string  Menu:: Description (int index)
{   
    switch (index){
    case 1:
        return "Mancou Supe                     ";
        break;
    case 2:
        return "Toneto Supe                     ";
        break;
    case 3:
        return "Vagitabal corn Supe             ";
        break;
    case 4:
        return "Noodels Supe                    ";
        break;
    }
}
int main()

{   
    int index=0,ch;
    
    Hotel h;
    Menu m;
    do{
    Re2:
    int j=m.show();
    Re1:
    int k=m.print(j);
    h.setdetail(index,m.Description(k),m.Rate(k),m.setqty());
    index++;
    Re:
    cout<<"Enter you This More Odar Press 1 And \nBack To Main Manu Press 2 \nConform Odar 9"<<endl;
    cin>>ch;
    if(ch==1)
    {
        goto Re1;
    }
    else if(ch==2)
    {
        goto Re2;
    }
    else {
        if(ch==9)
        {
        h.Final(index);
        goto  Re3;
        }
        cout<<"invalide Selection"<<endl;
        goto Re;
    }

    }while(ch==9);
   Re3:
    h.showdetail(index);   
}
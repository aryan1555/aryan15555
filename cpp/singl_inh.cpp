#include <iostream>
using namespace std;

class base {
    int a=10;
    int b=20;

    protected:
    int c=40;

    public:
    int d=50;

    int sum (){
        return a+b;
    
    }
};

class derive:public base{

    public:
    int total=0;
    void desplay(){
        total=sum();
        cout<<"total is :"<<total<<c<<d<<endl;

    }
};

int main ()
{
    class derive ob;
    ob.desplay();
return 0;
}
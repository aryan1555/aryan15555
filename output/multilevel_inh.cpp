#include <iostream>
using namespace std;

class Number{

    protected:
    int a;
    public:
    void setA(){
        cout<<"enter A :";
        cin>>a;

    }
};
class Number1:public Number{

 protected:
    int b;
    public:
    void setB(){
        cout<<"enter B :";
        cin>>b;

    }
};
    class derive:public Number1 {

        public:
        void product(){
            cout<<"get a and b="<<a*b;
        }
    };

int main ()
{
    class derive c;
    c.setA();
    c.setB();
    c.product();

return 0;
}
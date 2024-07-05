#include <iostream>
using namespace std;

class base{
    public:
    virtual void display()=0;

};
class derived: public base {
    public:
    void display (){
        cout<<"derive class desplay function call ";
    }
};

int main ()
{
    base*p;
    derived d;
    p=&d;
    p ->display();
return 0;
}
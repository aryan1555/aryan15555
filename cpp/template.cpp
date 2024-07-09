#include <iostream>
using namespace std;

template <class T>
void display(T t1)
{
    cout<<"Display Template:"<<t1<<endl;
}

template <class x, class y>
void Display(x a, y b)
{
    cout<<"Display Template :"
        <<a<<"\t"
        <<b<<endl;
}
 
 template<class t>
 t sum (t x, t y)
 {
    return x+y;
 }

int main ()
{
    display(200);
    display(12.15);
    display('G');

    Display('G',25);
    Display('x',2.25);
    Display(25,2.25);

    cout<<sum(1,2)<<endl;
    cout<<sum(25.4,1.5);
return 0;
}
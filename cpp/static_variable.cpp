#include <iostream>
using namespace std;

class hello{
    public:
    static int number;
    int i=0;

hello(){
    number++;
    i++;
}
void desplay (){
    cout<<"desplay funtion call...."<<i<<endl;
}
static void Desplay(){
    cout<<"static function call....."<<number<<endl;
}

};

int hello ::number=50;

int main ()
{
    hello s1;
    s1.desplay();

    hello s2;
    s2.desplay();

    hello s3;
    s3.desplay();


     cout<<"static :"<<s3.number;

return 0;
}
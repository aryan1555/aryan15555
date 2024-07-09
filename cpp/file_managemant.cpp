#include<iostream>
#include<fstream>

using namespace std;

int main ()
{
    char input[100];
    of.stream os;
    os.open ("xyz.txt");

    cout<<"please entyer your name :"<<endl;
    cin.getline(input,100);
    os<<input<<endl;

    cout<<"please enter your contect number :"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl; 
    os.closer();

    ifstream is ;
     string line;
     is.open("xyz.txt");
      cout<<endl<<"reading from a text file"<<endl;
      whil (getline) 

}
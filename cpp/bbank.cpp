#include <iostream>
using namespace std;
class bank
{
        float balance = 50000;
        

               
        void deposite(int n)
        {
                balance = balance + n;
        }

        
        void withdraw(int n)
        {
                if (n <= balance)
                {
                        balance = balance - n;
                }
                else
                {
                        cout << "invelide Balance" << endl;
                }
               
        }
        
        void show()
        {
                cout << "Your balance is : " << balance << endl;
        }
};

int main()
{
        bank b;
        int n, amount;
        int choice;
        while (n != 0)
        {
                cout << "-----welcom-----  " << endl;
                cout << "1 : Deposite  " << endl;
                cout << "2 : Withdraw  " << endl;
                cout << "3 : Show Balance   " << endl;
                cout << "4 : Exit  " << endl;
                cout << "Enter Your choice :   ";
                cin >> n;

                switch (n)
                {

                case 1:
                        cout << "Enter deposit : ";
                        cin >> amount;
                        b.deposite(amount);

                        break;
                case 2:
                        cout << "Enter Withdraw : ";
                        cin >> amount;
                        b.withdraw(amount);
                        b.show();
                        
                        break;
                case 3:
                        b.show();
                        break;
                case 4:
                        cout << " Thank you for visit " << endl;
                        return 0;
                        break;

                default:
                        cout << "Invalid balance " << endl;
                }
        }do(n==4);
        
        
        return 0;
}
 
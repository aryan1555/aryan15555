#include <iostream>
using namespace std;
class bank
{
private:
  int ATM_pin;
  int mobile_number;
  int pin;
  int code;
  int cash;
  int balance = 50000;

public:
  void account()
  {
    cout << "ENTER PIN NUMBER : ";
    cin >> ATM_pin;
    cout << endl;
    if (ATM_pin == 0000)
    {
      cout << "******Aryan******" << endl
           << endl;
    }
    else
    {
      cout << "exit" << endl;
    }
  }
  void pin_n()
  {
    cout << "------WELLCOME TO SBI ------";

    cout << "ENTER THE MOBILE NUMBER : ";
    cin >> mobile_number;
  }

   void withdrawal()
  {
    cout << "------WELLCOME TO SBI ------" << endl
         << endl;
    cout << "----ENTER YOUR ATM CARD----" << endl;

    cout << "ENTER THE AMOUNT : ";
    cin >> cash;
    cout << "ENTER PIN NUMBER : ";
    cin >> ATM_pin;
    if (balance = (balance - cash))
    {
      cout << "BALANCE IS : " << balance;
    }
    else
    {
      cout << balance;
    }
  }
  void deposit()
  {
    cout << "------WELLCOME TO SBI ------" << endl
         << endl;
    cout << "----ENTER YOUR ATM CARD----" << endl
         << endl;

    cout << "ENTER PIN NUMBER : ";
    cin >> ATM_pin;
    cout << "ENTER THE AMOUNT : ";
    cin >> cash;

    if (balance = (balance + cash))
    {
      cout << "BALANCE IS : " << balance;
    }
    else
    {
      cout << balance;
    }
  }

  void exit()
  {

    cout << "------THANKS FOR VISIT------";
  }
};
int main()
{
  bank b;
  cout << "\t--------------SBI BANK----------------" << endl
       << endl;

  int number;
  do
  {
    cout << endl
         << "1 : ACOUNT " << endl
         << endl;
    cout << "2 : CASH WITHDRAWAL " << endl
         << endl;
    cout << "3 : CASH DEPOSIT" << endl
         << endl;
    cout << "4 : EXIT" << endl
         << endl;
    cout << "select number : ";
    cin >> number;

    switch (number)
    {
    case 1:
      b.account();
      break;

    case 2:
      b.withdrawal();
      break;

    case 3:
      b.deposit();
      break;

    case 4:
      b.exit();
      break;
    }
  } while (number != 5);
  return 0;
}

#include <iostream>
#include <string>

using namespace std;

class Bank_Acc
{
    string Depositor;
    unsigned int Acc_No;
    bool acc_Type
    double Blnce;

    public:
        Bank_Acc()
        {
          cout << "\nEnter Your Name:";
          cin >> Depositor;
          cout << "\nEnter Account Number: ";
          Blnce = d;
            }       

        void Deposit(double d)
        {
          blnce = blnce + d; 
            } 

        void Withdraw(double d)
        {
          if(blnce > d)
                blnce = blnce - d;

          else
            cout << "\nInsufficient Balance!!" << endl;
            }

        void Display()
        {
          cout << "\n Depositor Name: " << Depositor << endl;
          cout << "Account Balance: " << Blnce << endl;
            }
};

int main()
{
  Bank_Acc Acc[5];

 return 0;
}

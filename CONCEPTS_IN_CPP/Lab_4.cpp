/*  Define a class to represent a bank account which includes the following data Member and Member function:
*   Data Members:
*       1. Name of the Depositor.
*       2. Bank account Number.
*       3. Type of Account.
*       4. Balance Amount in Account.
*
*   Member Functions:
*       1. To assign the initial value to all data members.
*       2. Deposit an Amount.
*       3. To withdraw an amount after checking the balance.
*       4. To display the Name and Balance.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Bank_Acc
{
    string Depositor;
    unsigned int Acc_No;
    bool acc_Type;
    double Blnce;

    public:
        Bank_Acc(string D,unsigned int No,bool type,double d = 0)
        {
          Depositor = D;
          Acc_No = No;
          acc_Type = type;
          Blnce = d;
            }       

        void Deposit(double d)
        {
          Blnce = Blnce + d; 
            } 

        void Withdraw(double d)
        {
          if(Blnce > d)
                Blnce = Blnce - d;

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
   char ch = 'Y';
   int i;
   Bank_Acc* ptr;
   vector<Bank_Acc> list;

 do{

 cout << "\n***************** MENU *****************\n";
 cout << "\n 1. Create New Account";
 cout << "\n 2. Deposit Amount";
 cout << "\n 3. Withdraw Amount";
 cout << "\n 4. View Balance";

 cout << "\nEnter Choice: ";
 cin >> i;

 cout << "\n Enter Account Number:";

 double b;
 switch(i)
    {
       case 1:  string dep; unsigned int AccNo; bool type;   
                cout << "\nEnter Your Name: ";
                cin >> dep;
                cout << "\n Enter Account Number:";
                cin >> AccNo;
                cout << "\n Enter Account Type: ";
                cin >> type;
                cout << "\nEnter Initial Balance: ";
                cin >>  b;
             //   list.push_back(Bank_Acc(dep,AccNo,type,b));
                break;    

       case 2:  cout << "\nEnter Amount: ";
                cin >> b;
                ptr->Deposit(b);
                break;

       case 3: 
               cout << "\nEnter Amount: ";
               cin >> b;
               ptr->Withdraw(b);
               break;

       case 4: ptr->Display();
               break;        
    }


cout << "\nDo you want to perform more operations? (Y/N): ";
cin >> ch;
}while((ch == 'Y') || (ch == 'y'));

    return 0;
}

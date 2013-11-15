#include "CDAccount.h"
#include "MoneyMarketAccount.h"
#include "BankAccount.h"
#include <iostream>



using namespace std;
int main()
{
    string name;
    double balance;
    double amount;
    double interestRate;

    cout << "Enter Josh's MoneyMarketAccount balance: ";
    cin >> balance;

    MoneyMarket a("Josh", balance);
    cout << "Enter amount to withdraw from Josh: ";
    cin >> amount;
    if(a.withdraw(amount))
        cout << "That worked." << endl << "Josh's new balance is: " << a.getBalance() << endl;
    else cout << "That didn't work.";
    amount = 0;
    cout << "Enter amount to withdraw from Josh (again): ";
    cin >> amount;
    if(a.withdraw(amount)) cout << "That worked." << endl << "Josh's new balance is: " << a.getBalance()<< endl;
    else cout << "That didn't work.";
    amount = 0;

    cout << "Enter Tracy's CDAccount balance: ";
    cin >> balance;
    cout<<"Enter Tracy's CDAccount interest rate: ";
    cin>>interestRate;
    cout<<"Enter amount to deposit into Tracy's account: ";
    cin>>amount;


    CDAccount b("Tracy", balance, interestRate);
    if(b.deposit(amount))
        cout<<"That worked."<<endl<<"Tracy's new balance is: "<<b.getBalance()<<endl;
    else
        cout<<"That didn't work.";
    amount = 0;

    cout<<"Enter amount to transfer from Tracy to Josh: ";
    cin>>amount;
    if(a.transfer(amount, b))
        cout<<"That worked."<<endl<<"Tracy's new balance: "<<b.getBalance()<<endl<<"Josh's new balance: "<<a.getBalance()<<endl;
    else
        cout<<"That worked."<<endl<<"Tracy's new balance: "<<b.getBalance()<<endl<<"Josh's new balance: "<<a.getBalance()<<endl;

}

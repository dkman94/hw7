#include "MoneyMarketAccount.h"
#include "BankAccount.h"
#include <iostream>

using namespace std;

int main()
{
string name;
double bal;

    cout<<"Enter acct holder name: ";
    cin>>name;
    cout<<endl;

    cout<<"Enter balance: ";
    cin>>bal;
    cout<<endl;

    MoneyMarketAccount jmacct(name, bal);

    cout<<name<<"'s acct has $"<<bal<<" in it.";

    return 0;
}

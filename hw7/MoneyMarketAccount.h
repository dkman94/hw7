//craete definition for a money market account
#ifndef MoneyMarketAccount_h
#define MoneyMarketAccount_h
#include "BankAccount.h"
#include <iostream>
using namespace std;

//craete the money market class
class MoneyMarket : public BankAccount
{
    public:
//define the constructors for the money market class
    MoneyMarket();
    MoneyMarket(string owner);
    MoneyMarket(string owner, double balance);
//create the deposit and withdraw functions(withdraw is oing to be overridden)
    bool deposit(double amount);
    bool withdraw(double amount);
//create the numWithdraws varibale
    int numWithdraws;
    bool transfer(double amount, BankAccount &other);
};
#endif // MoneyMarketAccount

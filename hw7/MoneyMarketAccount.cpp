//create the money market account header file info
#include "MoneyMarketAccount.h"
#include <iostream>
#include <string>
using namespace std;

MoneyMarket::MoneyMarket()
    : BankAccount()
{
    owner = "";
    balance = 0.0;
    numWithdraws = 0;
}
MoneyMarket::MoneyMarket(string _owner)
    : BankAccount(_owner)
{
    owner = _owner;
    balance = 0.0;
    numWithdraws = 0;
}


MoneyMarket::MoneyMarket(string _owner, double _balance)
    : BankAccount(_owner, _balance)
{
    owner = _owner;
    balance = _balance;
    numWithdraws = 0;
}

bool MoneyMarket::deposit(double amount)
{
    if(amount > 0)
    {
        balance += amount;
        return true;
    }
    else
    {
        return false;
    }
}

bool MoneyMarket::withdraw(double amount)
{
    if((balance > amount) && (amount > 0))
    {
        if(numWithdraws > 2)
        {
            balance -= (amount + 1.50);
        }
        else
        {
            balance -=amount;
        }
        numWithdraws++; // not updating
        return true;
    }
    else
    {
        return false;
    }
}

bool MoneyMarket::transfer(double amount, BankAccount &other)
{
    other.deposit(amount);
    withdraw(amount);
    return true;
}

//create the money market account header file info
#include "MoneyMarketAccount.h"
#include <iostream>
#include <string>
using namespace std;

//create moneymarket constructors. first is default, then owner only, then owner and balance
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

//create the deposit class. simply add the amount to the balance
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

//withdraw function for moneymarket accounts
bool MoneyMarket::withdraw(double amount)
{
    if((balance > amount) && (amount > 0))
    {
//if the number of withdraws is greater than 2, then subtract an additional fee of $1.50
        if(numWithdraws > 2)
        {
            balance -= (amount + 1.50);
        }
        else
        {
//if the number of withdraws is less than 2, then subtract only the amount
            balance -=amount;
        }
        numWithdraws++;
        return true;
    }
    else
    {
//else return false
        return false;
    }
}

//recreate the transfer method for the moneymarket class
bool MoneyMarket::transfer(double amount, BankAccount &other)
{
    other.deposit(amount);
    withdraw(amount);
    return true;
}

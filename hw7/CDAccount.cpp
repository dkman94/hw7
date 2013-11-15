#include "CDAccount.h"
#include <iostream>
#include <string>
using namespace std;


CDAccount::CDAccount(string _owner, double _balance, double rate)
    : BankAccount(_owner, _balance)
{
    owner = _owner;
    balance = _balance;
    interestRate_ = rate;
}

bool CDAccount::deposit(double amount)
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

bool CDAccount::withdraw(double amount)
{
    if((balance > amount) && (amount > 0))
    {
        balance -= (amount + (.25*(interestRate_*balance)));
        return true;
    }
    else
    {
        return false;
    }
}

bool CDAccount::transfer(double amount, BankAccount &other)
{
    other.deposit(amount);
    withdraw(amount);
    return true;
}

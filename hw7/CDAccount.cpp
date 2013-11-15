//include the proper additional files
#include "CDAccount.h"
#include <iostream>
#include <string>
using namespace std;

//define the cdaccount constructor. includes the owner, balance, and rate
CDAccount::CDAccount(string _owner, double _balance, double rate)
    : BankAccount(_owner, _balance)
{
    owner = _owner;
    balance = _balance;
    interestRate_ = rate;
}
//create the deposit method which simply adds the amount to the balance
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
//create the withdraw method
bool CDAccount::withdraw(double amount)
{
    if((balance > amount) && (amount > 0))
    {
//if the amount to withdraw is possible...then take the balance and
//subtract the amount+25% times the annual interest(defined as interestRate*balance)

        balance -= (amount + (.25*(interestRate_*balance)));
        return true;
    }
    else
    {
//else simply return false
        return false;
    }
}

//again redefine the trasnfer method in the cdaccount class
bool CDAccount::transfer(double amount, BankAccount &other)
{
    other.deposit(amount);
    withdraw(amount);
    return true;
}

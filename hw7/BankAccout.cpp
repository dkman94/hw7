//include the bank account header file
#include <iostream>
#include "BankAccount.h"
using namespace std;

//define each of the constructors made in the bank account header file
BankAccount::BankAccount()
{
    owner = "";
    balance = 0.0;
}

BankAccount::BankAccount(string _owner)
{
    owner = _owner;
    balance = 0.0;
}

BankAccount::BankAccount(string _owner, double _balance)
{
    owner = _owner;
    balance = _balance;
}

//create the get methods. simply return the required variable
string BankAccount::getOwner()
{
    return owner;
}

double BankAccount::getBalance()
{
    return balance;
}

//create the deposit method which simply adds a amount to a balance
bool BankAccount::deposit(double amount)
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

//defualt withdraw. this one is not really used since it is overridden later
bool BankAccount::withdraw(double amount)
{
    return true;
}

//the transfer method just deposits money from one account to another
bool BankAccount::transfer(double amount, BankAccount &other)
{
    other.deposit(amount);
    withdraw(amount);
    return true;
}

#include <stdlib.h>
#include <iostream>

#include <BankAccount.h>

using namespace std;

BankAccount::BankAccount(string owner, double balance)
{
    owner_ = owner;
    if(balance > 0)
        balance_ = balance;
    else
        cerr<<"C'mon man! Enter a REAL Balance!!!"<<endl;
}

void BankAccount::setBalance(double bal)
{
    if(balance > 0)
        balance_ = balance;
    else
        cerr<<"C'mon man! Enter a REAL Balance!!!"<<endl;
}

double BankAccount::getBalance() const
{
    return balance_;
}

bool BankAccount::deposit(double amount)
{
    if(amount>0)
        balance_ = balance_+amount;
        return true;
    else
        return false;
}

bool BankAccount::withdraw(double amount)
{
    if(amount > 0 && amount < balance_)
        balance_ = balance_ - amount;
        return true;
    else
        return false;
}

double BankAccount::transfer(char* whichAccount, double amount)
{
    whichAccount->balance_ = whichAccount->balance - amount;
    this->balance_ = this->balance_ + amount;
    return balance_;
}




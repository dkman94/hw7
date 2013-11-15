#ifndef BankAccount.h
#define BankAccount_h

#include <iostream>
using namespace std;

class BankAccount
{
public:
    string getName()
    {
        return owner;
    }
    double getBalance()
    {
       return balance;
    }
    bool deposit(double amount)
    {
        balance=balance+amount;
    }
    virtual bool withdraw(double amount) = 0;

protected:
    double balance_;
    string owner_;

};

#endif // BankAccount

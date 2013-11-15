//define the cd account header file info
#ifndef CDAccount_h
#define CDAccount_h
#include "BankAccount.h"
#include <iostream>
using namespace std;

//create the class for the cd account. import bank account too
class CDAccount : public BankAccount
{
    public:
//create the constructor(was too lazy to make the default ones for this)
    CDAccount(string name, double balance, double rate);
//create the deposit, withdraw(to be overridden), and transfer methods
    bool deposit(double amount);
    bool withdraw(double amount);
    bool transfer(double amount, BankAccount &other);

//create private varibales for interest rate
    private:
    double interestRate_;
};

#endif

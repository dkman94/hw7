#ifndef BankAccount.h
#define BankAccount_h

#include <iostream>
using namespace std;

class BankAccount
{
public:
    BankAccount(string owner, double balance);
    bool deposit(double amount);
    virtual bool withdraw(double amount) = 0;
    virtual double transfer(char whichAccount, double amount) = 0;

protected:
    double balance_;
    string owner_;

    void setBalance(double bal);
    void setOwner(string name);

    double getBalance() const;
    string getOwner() const;

};

#endif // BankAccount

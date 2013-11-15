//define the header file and stuff
#ifndef BankAccount_h
#define BankAccount_h
#include <iostream>
#include <string>

using namespace std;

//create the bank account class
class BankAccount
{
public:
//craete owner, balance variables
    string owner;
    double balance;
//define the constructors. 1 is defualt, one is owner only, the other is both the owner and the balance
    BankAccount();
    BankAccount(string _owner);
    BankAccount(string _owner, double _balance);
//make the get methods
    string getOwner();
    double getBalance();
//create deposit as defined in assignment
    bool deposit(double amount);
//withdraw is overridden in each of the other files so make it a virtual function
    virtual bool withdraw(double amount)=0;
//create the transfer function
    bool transfer(double amount, BankAccount &other);
};
#endif

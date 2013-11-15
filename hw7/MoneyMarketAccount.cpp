#include "MoneyMarketAccount.h"
#include <iostream>

BankAccount::MoneyMarketAccount MoneyMarketAccount(string owner, int balance)
{
    owner_ = owner;
    balance_ = balance;
}

bool withdraw(double amount)
{
    if(amount>balance)
        return false;
    else if(numWithdraws <= 2)
        balance = balance-amount;
        return true;
    else if(numWithdraws > 2)
        balance = balance-amount-1.5;
}


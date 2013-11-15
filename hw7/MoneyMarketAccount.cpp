#include "MoneyMarketAccount.h"
#include <iostream>

BankAccount::MoneyMarketAccount(string owner, double balance)
{
    MoneyMarketAccount::setOwner(owner);
    MoneyMarketAccount::setBalance(balance);
}
bool MoneyMarketAccount::withdraw(double amount)
{
    if(amount>MoneyMarketAccount::getBalance())
    {
        return false;
    }
    if(numWithdraws <= 2)
    {
        MoneyMarketAccount::setBalance(MoneyMarketAccount::getBalance()-amount);
        numWithdraws++;
        return true;
    }
    if(numWithdraws > 2)
    {
        MoneyMarketAccount::setBalance(MoneyMarketAccount::getBalance()-amount-1.5);
        numWithdraws++;
        return true;
    }

}


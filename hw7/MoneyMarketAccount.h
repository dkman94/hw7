#ifndef MoneyMarketAccount.h
#define MoneyMarketAccount_h

#include "BankAccount.h"

class MoneyMarketAccount
{
public:
    MoneyMarketAccount(string owner, int balance);
    int numWithdraws;
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

};

#endif // MoneyMarketAccount

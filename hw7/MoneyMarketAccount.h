#ifndef MoneyMarketAccount.h
#define MoneyMarketAccount_h

#include "BankAccount.h"

class MoneyMarketAccount : public BankAccount
{
public:
    MoneyMarketAccount(string owner, double balance);
    int numWithdraws;
    bool withdraw(double amount);

};

#endif // MoneyMarketAccount

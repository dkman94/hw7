#include "BankAccount.h"

class CDAccount
{
public:
    double interestrate;
     bool withdraw(double amount)
    {
        if(amount>balance)
            return false;
        else
            int a_interest = interestrate*balance;
            balance = balance - amount - .25*a_interest;
            return true;
    }


};

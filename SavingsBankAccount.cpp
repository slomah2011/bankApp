#include "SavingsBankAccount.h"
SavingsBankAccount::SavingsBankAccount()
{
    minimumBalance=0;
    Initial_balance=0;
}
void SavingsBankAccount::setMinBalance(double amount)
{
    minimumBalance=amount;
}
double SavingsBankAccount::getMinBalance() const
{
    return minimumBalance;
}
void SavingsBankAccount::minWithdraw(double amount)
{
    if (amount>=100)
    {
        Initial_balance=Initial_balance+amount;
    }
}


#ifndef UNTITLED14_SAVINGSBANKACCOUNT_H
#define UNTITLED14_SAVINGSBANKACCOUNT_H
#include <iostream>
using namespace std;
#include "BankAccount.h"
class SavingsBankAccount
{
private:
    double minimumBalance=1000;
public:
    double Initial_balance;
    SavingsBankAccount();
    void setMinBalance(double amount);
    double getMinBalance() const;
    void minWithdraw(double amount);
};
#endif //UNTITLED14_SAVINGSBANKACCOUNT_H

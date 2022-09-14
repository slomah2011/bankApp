#ifndef UNTITLED14_BANKACCOUNT_H
#define UNTITLED14_BANKACCOUNT_H
#include <iostream>
using namespace std;
class BankAccount
{
private:
    string accountId;
    double balance;
public:
    BankAccount(double balance);
    BankAccount();

    void setAccountId(string accountId);
    string getAccountId() const;
    void setBalance(double balance);
    double getBalance() const;

    void withdraw(double amount);
    void deposit(double amount);
};
#endif //UNTITLED14_BANKACCOUNT_H

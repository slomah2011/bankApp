#include "BankAccount.h"
BankAccount::BankAccount(double balance)
{
    this->balance=balance;
}
BankAccount::BankAccount()
{
    balance=0;
}
void BankAccount::setAccountId(string accountId)
{
    this->accountId=accountId;
}
string BankAccount::getAccountId() const
{
    return accountId;
}
void BankAccount::setBalance(double balance)
{
    this->balance=balance;
}
double BankAccount::getBalance() const
{
    return balance;
}
void BankAccount::withdraw(double amount)
{
    if (amount<=balance)
    {
        balance=balance-amount;
        cout<<balance;
    }
    else{
        cout<<"The balance is not sufficient."<<endl;
    }
}
void BankAccount::deposit(double amount)
{
    balance=balance+amount;
}

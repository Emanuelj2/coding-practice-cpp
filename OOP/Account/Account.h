#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <cstddef> // <-- This is the fix for the size_t errors

class Account{
public:
    //no arg constructor
    Account();
    Account(size_t newID, double newBalance, double newAnnualInterestRate);

    //accessors 
    size_t getID()const;
    double getBalance()const;
    double getAnnualInterestRate()const;

    //mutators
    void setID(size_t);
    void setBalance(double);
    void setAnnualInterestRate(double);

    double getMonthlyInterestRate()const;

    void withdraw(double);
    void deposit(double);

private:
    size_t id;
    double balance;
    double annualInterestRate;
};

#endif
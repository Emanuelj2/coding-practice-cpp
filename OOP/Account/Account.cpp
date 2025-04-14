#include "Account.h"
#include <iostream>
using namespace std;

    //no arg constructor
    Account::Account(){
        id = 0;
        balance = 0;
        annualInterestRate = 0;
    }
    Account::Account(size_t newID, double newBalance, double newAnnualInterestRate){
        id = newID;
        balance = newBalance;
        annualInterestRate = newAnnualInterestRate;
    }

    //accessors 
    size_t Account::getID()const{
        return id;
    }
    double Account::getBalance()const{
        return balance;
    }
    double Account::getAnnualInterestRate()const{
        return annualInterestRate;
    }

    //mutators
    void Account::setID(size_t newID){
        id += newID; //the next number from the previous
    }
    void Account::setBalance(double newBalance){
        balance = newBalance;
    }
    void Account::setAnnualInterestRate(double newAnnualInterestRate){
        annualInterestRate = newAnnualInterestRate;
    }

    double Account::getMonthlyInterestRate()const{
        double MonthlyInterestRate = (annualInterestRate/100.0)/12.0; 
        return MonthlyInterestRate;
    }

    void Account::withdraw(double amount){
        if(amount > balance){
            cout << "Insufficient funds." << endl;
            return;
        }
        balance -= amount;

    }
    void Account::deposit(double amount){
        balance += amount;
    }

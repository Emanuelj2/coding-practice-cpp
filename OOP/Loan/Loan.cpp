#include "Loan.h"
#include <cmath>
 //default consructor
 Loan::Loan(){
    anualIntrestRate = .5;
    numberOfYears = 30;
    loanAmount = 10000;
 }
 //constuctor
 Loan::Loan(double rate, int years, double amount){
    anualIntrestRate = rate;
    numberOfYears = years;
    loanAmount = amount;
 }

 //getters
 double Loan::getAnualIntrestRate(){
    return anualIntrestRate;
 }
 int Loan::getNumberOfYears(){
    return numberOfYears;
 }
 double Loan::getLoanAmmount(){
    return loanAmount;
 }
 //setters
 void Loan::setAnualIntrestRate(double rate){
    anualIntrestRate = rate;
 }
 void Loan::setNumberOfYears(int years){
    numberOfYears = years;
 }
 void Loan::setLoanAmmount(double amount){
    loanAmount = amount;
 }

 //extra getters
 double Loan::getMonthlyPayment(){
    double monthlIntrestRate = anualIntrestRate / 1200;
    return loanAmount * monthlIntrestRate / (1- (pow(1 / (1 + monthlIntrestRate), numberOfYears * 12)));
 }
 double Loan::getTotalPayment(){
    return getMonthlyPayment() * numberOfYears * 12;
 }
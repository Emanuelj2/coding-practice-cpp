#ifndef LOAN_H
#define LOAN_H

class Loan{
private:
    double anualIntrestRate;
    int numberOfYears;
    double loanAmount;
public:
    //default consructor
    Loan();
    //constuctor
    Loan(double rate, int years, double amount);

    //getters
    double getAnualIntrestRate();
    int getNumberOfYears();
    double getLoanAmmount();
    //setters
    void setAnualIntrestRate(double);
    void setNumberOfYears(int);
    void setLoanAmmount(double);

    //extra getters
    double getMonthlyPayment();
    double getTotalPayment();
};

#endif
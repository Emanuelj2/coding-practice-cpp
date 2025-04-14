#include "Loan.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double anualIntrestRate;
    cout << "Enter yearly interest rate, for example 8.25: ";
    cin>> anualIntrestRate;

    int numberOfYears;
    cout << "Enter number of years as an integer, for example 5: ";
    cin >> numberOfYears;

    int loanAmount;
    cout << "Enter loan amount, or example 120000.95: ";
    cin >> loanAmount;

    //create the Loan object
    Loan loan1(anualIntrestRate, numberOfYears, loanAmount);

    cout << fixed << setprecision(2);
    cout << "the monthly payment is " << loan1.getMonthlyPayment() << endl;
    cout << "your total payment is " << loan1.getTotalPayment() << endl;

    return 0;
}
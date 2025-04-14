#include <iostream>
#include "Account.h"
using namespace std;

int main() {
    Account myAccount(1122, 20000, 4.5);

    myAccount.withdraw(2500);
    myAccount.deposit(3000);

    cout << "Account ID: " << myAccount.getID() << endl;
    cout << "Balance: $" << myAccount.getBalance() << endl;
    cout << "Monthly Interest Rate: " << myAccount.getMonthlyInterestRate() * 100 << "%" << endl;
    cout << "Monthly Interest: $" << myAccount.getBalance() * myAccount.getMonthlyInterestRate() << endl;

    return 0;
}
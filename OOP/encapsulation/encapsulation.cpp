/*Encapsulation is the bundling of data (properties) and methods (functions) 
that operate on the data into a single unit (class). It also involves restricting 
access to certain data members using access specifiers (private, protected, public).*/

#include <iostream>
using namespace std;

class BankAccount {

    private:
        double balance;

    public :
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
            } else {
                cout << "The amount must be positive.";
            }
        }
        void withdraw(double amount) {
            if (amount < balance) {
                balance -= amount;
            } else {
                cout << "The withdraw amount can't be biggger than the balance.";
            }
        };

        double getBalance() {
            return balance;
        }

};

int main () {
    BankAccount accountA;
    accountA.deposit(1000);
    accountA.withdraw(200);
    cout<< "Balance :\t"<<accountA.getBalance();
    return 0;
};
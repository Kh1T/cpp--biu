#include <iostream>
using namespace std;

class BankAccount {
    private:
        double balance;
    public:
        BankAccount() {
            balance = 0;
        }
        void deposit(double amount) {
            balance += amount;
        }
        void withdraw(double amount) {
            if (amount <= balance) {
                balance -= amount;
            } else {
                cout << "Insufficient balance." << endl;
            }
        }
        double getBalance() {
            return balance;
        }
        bool login() {
            string username, password;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            return username == "admin" && password == "admin";
        }
};

int main() {
    int opt; 
    long inputNum;
    bool running = true;

    BankAccount account;

    if (!account.login()) {
        cout << "Invalid credentials.\n" << endl;
        account.login();
    }
    do
    {
        cout << "\nEnter 1 to deposit, 2 to withdraw, 3 to check balance 4 to exit: \n Choose an option: \t";
        cin >> opt;
        switch (opt)
        {
            case 1:
            cout << "Enter amount to deposit: ";
            cin >> inputNum;
            account.deposit(inputNum);
            break;
    
            case 2:
            cout << "Enter amount to withdraw: ";
            cin >> inputNum;
            account.withdraw(inputNum);
            break;
    
            case 3:
            cout << "Your balance is: " << account.getBalance() << endl;
            break;
    
            case 4:
            cout << "Exiting..." << endl;
            break;
        
        default:
            cout << "Invalid input." << endl;
            break;
        }
    } while (running);
    

    return 0;
}
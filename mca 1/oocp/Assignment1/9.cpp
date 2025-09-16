#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string name;       
    int accNumber;     
    string accType;    
    double balance;    

public:
    // Assign  values
    void assignValues(string depositorName, int accountNo, string type, double initialBalance) {
        name = depositorName;
        accNumber = accountNo;
        accType = type;
        balance = initialBalance;
    }

    // Deposit amount
    void deposit(double amount) {
        balance += amount;
        cout << "Amount Deposited: " << amount << "\n";
        cout << "Updated Balance: " << balance << "\n";
    }

    //  Withdraw amount checking balance
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance! Withdrawal not possible.\n";
        } else {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << "\n";
            cout << "Remaining Balance: " << balance << "\n";
        }
    }

    // Display 
    void display() {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Account Type: " << accType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank account1;

    // Assign initial values
    account1.assignValues("Vivek Jadav", 12345, "Savings", 5000);

    // Deposit
    account1.deposit(2000);

    // Withdraw
    account1.withdraw(3000);

    // Display
    account1.display();

    return 0;
}


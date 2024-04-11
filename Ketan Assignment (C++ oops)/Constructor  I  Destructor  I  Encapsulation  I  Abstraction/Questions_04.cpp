//Q-4. Write a C++ program to implement a class called Bank Account that has 
//private member variables for account number and balance. Include 
//member functions to deposit and withdraw money from the account.

#include <iostream>

using namespace std;

// Define the BankAccount class
class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor to initialize the BankAccount object
    BankAccount(const string& accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successful." << endl;
        } else {
            cout << "Invalid amount for deposit." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Invalid amount for withdrawal or insufficient balance." << endl;
        }
    }

    // Function to display the account information
    void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    string accountNumber;
    double initialBalance;

    // Get initial account information from the user
    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter initial balance: $";
    cin >> initialBalance;

    // Create an instance of BankAccount
    BankAccount myAccount(accountNumber, initialBalance);

    // Display initial account information
    cout << "\nInitial Account Information:" << endl;
    myAccount.display();
    cout << endl;

    double depositAmount, withdrawAmount;

    // Perform deposit operation
    cout << "Enter amount to deposit: $";
    cin >> depositAmount;
    myAccount.deposit(depositAmount);
    myAccount.display();
    cout << endl;

    // Perform withdrawal operation
    cout << "Enter amount to withdraw: $";
    cin >> withdrawAmount;
    myAccount.withdraw(withdrawAmount);
    myAccount.display();
    cout << endl;

}


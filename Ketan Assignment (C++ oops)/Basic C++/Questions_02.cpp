//2. Define a class to represent a bank account. Include the following members:

//3. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account

//Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance



#include <iostream>
using namespace std;

class BankAccount {
private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize data members
    BankAccount(const string name, long accNumber, const string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        balance += amount;
    }

    // Function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance." <<endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Name: " << depositorName <<endl;
        cout<< "Account Number :"<<accountNumber<<endl;
        cout<< "Account Type : "<<accountType<<endl;
        cout << "Balance: " << balance <<endl;
    }
};

int main() {
    // Create an instance of BankAccount
    BankAccount account("John Doe", 123456789, "Savings", 1000.0);

    // Deposit some money
    account.deposit(500);

    // Withdraw some money
    account.withdraw(200);

    // Display the account details
    account.display();

}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    
    BankAccount() {
        balance = 0.0;
    }

    // Deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << endl;
            saveTransaction("Deposit", amount);
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    // make purchase
    void makePurchase(const string& item, double cost) {
        if (cost <= 0) {
            cout << "Invalid purchase amount." << endl;
        }
        else if (cost > balance) {
            cout << "Insufficient funds for " << item << endl;
        }
        else {
            balance -= cost;
            cout << "Purchased: " << item << " for $" << cost << endl;
            saveTransaction("Purchase - " + item, cost);
        }
    }

    // Print the current balance
    void displayBalance() const {
        cout << "Current Balance: $" << balance << endl;
    }

    // Save transaction to the file
    void saveTransaction(const string& type, double amount) {
        ofstream file("transactions.txt", ios::app);
        if (file.is_open()) {
            file << type << ": $" << amount << endl;
            file.close();
        }
    }
};

int main() {
    BankAccount myAccount;

    myAccount.deposit(100);                   
    myAccount.makePurchase("Coffee", 3.50);      
    myAccount.makePurchase("Book", 25.60);       
    myAccount.displayBalance();                 

    cout << "Transactions saved to transactions.txt" << endl;

    return 0;
}

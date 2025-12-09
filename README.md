# CIS25 Week 8 Bank

# Bank.cpp
This program simulates a simple bank account system. It allows the user to deposit money, make purchases, and track transactions through a text file for long-term storage. The goal of this assignment is to demonstrate the use of classes, file I/O, and basic control structures in C++.

# Features

1. Deposit Money

Adds money to the account balance.

Rejects negative or zero deposit amounts.

Saves the deposit transaction to transactions.txt.

2. Make Purchases

Allows the user to purchase an item with a cost.

Rejects invalid purchase amounts (zero or negative).

Checks if the balance is sufficient before completing the purchase.

Saves each purchase, including the item description, to the transaction.txt file.

3. Display Balance

Prints the current balance to the console.

4. Transaction History (File I/O)

Every transaction is saved to a file named transactions.txt.

Uses file append mode (ios::app) so data is kept permanently.


# How the Program Work

BankAccount Class: 

The program uses an object-oriented design with one class:

Private Data: 

double balance: stores the current amount of money.


Public Methods: 

deposit(double amount)

makePurchase(string item, double cost)

displayBalance()

saveTransaction(string type, double amount)


Main Function: 

The main() function demonstrates:

Depositing money

Making 3 purchases

Displaying the final balance

Informing the user that the transaction file has been updated

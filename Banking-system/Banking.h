#include <iostream>
#include <memory>
#include <vector>
#include <string>

class BankAccount {
    protected:
    std::string accountHolder;
    int accountNumber;
    double balance;

    public:
    std::vector<BankAccount> accounts;
    /*Setters*/
    std::string setAccountHolder(std::string name) {
        accountHolder = name;
        return name;
    }

    int setAccountNumber(int accNumber) {
        accountNumber = accNumber;
        return accNumber;
    }

    double setAccountBalance(double initialBalance) {
        balance = initialBalance;
        return initialBalance;
    }

    /*Getters*/
    std::string getAccountName() {
        return accountHolder;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getAccountBalance() {
        return balance;
    }


    int createAccount();
    int depositMoney();
    int deposit(double amount);
    int withdrawMoney();
    int withdraw(double amount);
    void displayAccountDetails();
    void displayAccount();
    void displayAllAccounts();
};

class BankAccountManager : public BankAccount {
    public:

    // std::vector<BankAccount> accounts;

    // int createAccount();
    // int depositMoney();
    // int deposit(double amount);
    // int withdrawMoney();
    // int withdraw(double amount);
    // void displayAccountDetails();
    // void displayAccount();
    // void displayAllAccounts();
};
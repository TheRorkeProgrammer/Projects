#ifndef TAXI_H
#define TAXI_H

// C libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// C++ libraries
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <random>
#include <memory>
#include <iomanip>
#include <vector>
#include <map>

class Person {
    protected:
    std::string name;
    std::string surname;
    std::string dateOfBirth;

    public:

    // Setters
    std::string setName(std::string n) {
        name = n;
        return n;
    }

    std::string setSurname(std::string sn) {
        surname = sn;
        return sn;
    }

    std::string setDateOfBirth(std::string dob) {
        dateOfBirth = dob;
        return dob;
    }

    // Getters
    std::string getName() {
        return name;
    }

    std::string getSurname() {
        return surname;
    }

    std::string getDateOfBirth() {
        return dateOfBirth;
    }

    // ~Person() {};
};

class Account : public Person {
    protected:
    std::string accountName;
    int accountNumber;
    int securityCode;
    int accountPIN;
    double balance;

    public:
    /*Setters*/
    std::string setAccountName(std::string nameOfAccount) {
        accountName = nameOfAccount;
        return nameOfAccount;
    }

    int setAccountNumber(int numberOfAccount) {
        accountNumber = numberOfAccount;
        return numberOfAccount;
    }

    int setSecurityCode(int secCodeOfAccount) {
        securityCode = secCodeOfAccount;
        return secCodeOfAccount;
    }

    int setAccountPIN(int accPin) {
        accountPIN = accPin;
        return accPin;
    }

    double setAccountBalance(double accountBalance) {
        balance = accountBalance;
        return accountBalance;
    }

    /*Getters*/
    std::string getAccountName() {
        return accountName;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    int getSecurityCode() {
        return securityCode;
    };

    int getAccountPIN() {
        return accountPIN;
    }

    double getAccountBalance() {
        return balance;
    }

    // ~Account() {}
};

class AccountManager : public Account {
    public:
    std::vector<Account> accounts;

    void displayAccountDetails();
    bool createBankAccount();
    bool depositMoney();
    bool payTaxiFare();

    /*Helper Functions*/
    bool deposit(double amount);

    // ~AccountManager() {}
};

class IOFileManager : public AccountManager {
    public:

};
#endif // !TAXI_H


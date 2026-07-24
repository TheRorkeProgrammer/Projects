#include "Banking.h"

/*UI Menu*/
void UIMenu() {
    std::cout << "===== Bank Management System =====" << std::endl;
    std::cout << "1. Create Account" << std::endl;
    std::cout << "2. Deposit Money" << std::endl;
    std::cout << "3. Withdraw Money" << std::endl;
    std::cout << "4. Display Account Details" << std::endl;
    std::cout << "5. Display All Accounts" << std::endl;
    std::cout << "0. Exit" << std::endl;

}

/*Creatin account*/
int BankAccount::createAccount() {
    std::string name;
    int accNum;
    double initialBalance;
    std::cout << "Enter Account Holder Name: " << std::endl;
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Enter Account Number: " << std::endl;
    std::cin >> accNum;
    std::cout << "Enter initial Balance: " << std::endl;
    std::cin >> initialBalance;

    BankAccount newBankAccount;
    newBankAccount.setAccountHolder(name);
    newBankAccount.setAccountNumber(accNum);
    newBankAccount.setAccountBalance(initialBalance);

    std::cout << "Account Created" << std::endl;
    accounts.push_back(newBankAccount);

    return 0;
};

/**/

/*depositing money*/

int BankAccount::depositMoney() {
    int accNum;
    double amount;
    std::cout << "Enter Account Number: " << std::endl;
    std::cin >> accNum;
    bool found = false;

    /*finding account number*/
    for (auto& acc : accounts) {
        if (acc.getAccountNumber() == accNum) {
            std::cout << "Enter Deposit Amount: " << std::endl;
            std::cin >> amount;
            acc.deposit(amount);
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Account not found" << std::endl;
    }

    return 0;
}

int BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "R" << amount << " deposited successfully" << std::endl;
    }
    else {
        std::cout << "Invalid deposit amount!" << std::endl;
    }

    return 0;
}

/*Withdrawing money*/
int BankAccount::withdrawMoney() {
    int accNum;
    double amount;
    std::cout << "Enter Account Number: " << std::endl;
    std::cin >> accNum;
    bool found = false;

    /*finding account number*/
    for (auto& acc : accounts) {
        if (acc.getAccountNumber() == accNum) {
            std::cout << "Enter Deposit Amount: " << std::endl;
            std::cin >> amount;
            acc.deposit(amount);
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Account not found" << std::endl;
    }

    return 0;
}

int BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "R" << amount << " withdrawn successfully" << std::endl;
    }
    else {
        std::cout << "Insufficient balance or invalid amount" << std::endl;
    }

    return 0;
}

/*displaying accout details*/
void BankAccount::displayAccountDetails() {
    int accNum;
    std::cout << "Enter Account Number: " << std::endl;
    std::cin >> accNum;
    bool found = false;

    for (auto& acc : accounts) {
        if (acc.getAccountNumber() == accNum) {
            acc.displayAccountDetails();
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Account not found! " << std::endl;
    }
}

void BankAccount::displayAccount() {
    std::cout << "Account Holder: " << accountHolder << std::endl;
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Balance: R" << balance << std::endl;
}

/*Displaying all accounts*/
void BankAccount::displayAllAccounts() {
    if (accounts.empty()) {
        std::cout << "No Accounts found" << std::endl;
    }
    else {
        for (auto& acc : accounts) {
            std::cout << acc.getAccountName() << std::endl;
            std::cout << acc.getAccountNumber() << std::endl;
            std::cout << acc.getAccountBalance() << std::endl;
        }
    }
}
#include "Taxi.h"

void AccountManager::displayAccountDetails() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;
    std::cout << "Date of Birth" << dateOfBirth << std::endl;
    std::cout << "Account Name: " << accountName << std::endl;
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Account Security Code: " << securityCode << std::endl;
    std::cout << "R" << balance << std::endl;
}

// Function: Create new bank account

bool AccountManager::createBankAccount() {
    /*Enter Name Input*/
    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;
    std::cout << std::endl;

    /*Enter Surname Input*/
    std::cout << "Enter your surname: " << std::endl;
    std::cin >> surname;
    std::cout << std::endl;

    /*Enter Date Of Birth Input*/
    std::cout << "Enter your date of birth: " << std::endl;
    std::cin >> dateOfBirth;
    std::cout << std::endl;

    /*Enter Account Name*/
    std::cout << "Enter Your Initials" << std::endl;
    std::cin >> accountName;
    std::cout << std::endl;

    /*Generate account number*/
    std::cout << "Generating account number...." << std::endl;
    for (accountNumber = 0; accountNumber < 1; accountNumber++) {
        srand(time(0));
        accountNumber = rand() + 1234567890;
        std::cout << accountNumber << std::endl;;
    }

    /*Generate account security code*/
    std::cout << "Generating accoutn security code...." << std::endl;
    for (securityCode = 0; securityCode < 1; securityCode++) {
        srand(time(0));
        securityCode = rand() + 1234567890;
        std::cout << securityCode << std::endl;;
    };

    /*Set Pin for account*/
    std::cout << "Enter PIN For Account Access" << std::endl;
    std::cin >> accountPIN;
    std::cout << std::endl;

    /*Set Account balance*/
    std::cout << "Enter amount to deposit: " << std::endl;
    std::cin >> balance;
    std::cout << std::endl;

    /*Create New Account*/
    Account newAccount;
    newAccount.setName(name);
    newAccount.setSurname(surname);
    newAccount.setDateOfBirth(dateOfBirth);
    newAccount.setAccountName(accountName);
    newAccount.setAccountNumber(accountNumber);
    newAccount.setSecurityCode(securityCode);
    newAccount.setAccountPIN(accountPIN);
    newAccount.setAccountBalance(balance);

    std::cout << "Account Creation Successful" << std::endl;
    accounts.push_back(newAccount);

    /*display account details*/
    displayAccountDetails();

    return 0;
}

/*Deposit Money Into Account*/
bool AccountManager::depositMoney() {
    int accPIN;
    double amount;

    // Enter account number
    std::cout << "Enter your account PIN:" << std::endl;
    std::cin >> accPIN;
    bool found = false;

    /*Find Account Based on Account PIN*/
    for (auto& account : accounts) {
        if (account.getAccountPIN() == accPIN) {
            std::cout << "==================== Account Found ===================" << std::endl;
            displayAccountDetails();
            std::cout << "Enter new deposit amound: " << std::endl;
            std::cin >> amount;
            deposit(amount);
            std::cout << "Current Balance: " << "R: " << getAccountBalance() << std::endl;
            std::cout << "=====================================" << std::endl;
        }
        found = true;
        break;
    }
    if (!found) {
        std::cout << "Account not found!" << std::endl;
    }

    return 0;
}



/*========== Helper Functions ===========*/
// deposit money
bool AccountManager::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "R" << amount << " deposited successfully" << std::endl;
        // std::cout << "Current Balance: " << "R: " << getAccountBalance() << std::endl;
    }
    else {
        std::cout << "Invalid deposit amount!" << std::endl;
    }

    return 0;
}
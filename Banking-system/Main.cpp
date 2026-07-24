#include "BankingMain.cpp"

int main() {
    int choice;
    BankAccountManager account;

    do {
        UIMenu();
        std::cin >> choice;
        switch (choice) {

            /*Adding new account*/
        case 1: {
            account.createAccount();
            break;
        }

              /*Depositing money*/
        case 2: {
            account.depositMoney();
            break;
        }

              /*Withdrawing money*/
        case 3: {
            account.withdrawMoney();
            break;
        }

              /*displaying account details*/
        case 4: {
            account.displayAccountDetails();
            break;
        }

        case 5: {
            account.displayAllAccounts();
            break;
        }

        case 0: {
            std::cout << "Exiting the system Thank you!" << std::endl;
            break;
        }

        default: {
            std::cout << "Invalid choice! please try again" << std::endl;
            break;
        }
        }
    } while (choice != 0);



    return 0;
}
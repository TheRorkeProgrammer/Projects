#include <bits/stdc++.h>
#include "EmpMain.cpp"

int main() {

    std::cout << "Program booting up" << std::endl;
    EmployeeManager empmanager;
    FileIO fileoperations;
    UI Menu;
    std::cout << "Manager created" << std::endl;

    int choice;
    do {
        Menu.UIMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            empmanager.addEmployee();
            fileoperations.saveToFile();
            break;
        }

        case 2: {
            empmanager.deleteEmployee();
            break;
        }

        case 3: {
            empmanager.searchEmployee();
            break;
        }

        case 4: {
            empmanager.editEmployee();
            empmanager.displayEmployeeDetails();
            break;
        }

        case 5: {
            empmanager.displayAllEmployees();
            break;
        }

        case 0: {
            std::cout << "Exiting app...." << std::endl;
            exit(EXIT_SUCCESS);
            break;
        }
        default: {
            std::cout << "Invalid choice" << std::endl;
            break;
        }
        }
    } while (choice != 0);

    return 0;
}
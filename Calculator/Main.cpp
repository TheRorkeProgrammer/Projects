#include "Calculator-main.cpp"

int main() {
    int choice;
    Calculator calc;

    do
    {
        menu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            calc.addition();
            break;
        }
        case 2: {
            calc.subtraction();
            break;
        }
        case 3: {
            calc.multiplication();
            break;
        }
        case 4: {
            calc.division();
            break;
        }
        case 0: {
            std::cout << "Closing app...." << std::endl;
            exit(EXIT_SUCCESS);
            break;
        }
        default: {
            std::cout << "Invalid Input/Choice" << std::endl;
            break;
        }
        }
    } while (choice != 0);
    return 0;
}
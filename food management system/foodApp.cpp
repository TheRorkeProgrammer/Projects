#include "foodMain.cpp"

int main() {
    FoodManager foodmanager;
    int choice;

    do {
        foodmanager.uiMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            foodmanager.addFoodItem();
            break;
        }

        case 2: {
            foodmanager.deleteFoodItem();
            break;
        }

        case 3: {
            foodmanager.editFoodItem();
            break;
        }

        case 4: {
            foodmanager.displayFoodInventory();
            break;
        }

        case 5: {
            foodmanager.deleteAllFoodItems();
            break;
        }

        case 0: {
            std::cout << "Closing food manager system" << std::endl;
            exit(EXIT_SUCCESS);
            break;
        }

        default: {
            std::cout << "Invalid input, please enter a valid input" << std::endl;
            break;
        }
        }
    } while (choice != 0);


    return 0;
}
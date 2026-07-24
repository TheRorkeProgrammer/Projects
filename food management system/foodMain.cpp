#include "food-type.h"

/*(helper function) - display food item details*/
void FoodManager::displayFoodItemDetails() {
    std::cout << "Name: " << name_of_food << std::endl;
    std::cout << "Type: " << type_of_food << std::endl;
    std::cout << "Place Of Origin: " << place_of_origin << std::endl;
    std::cout << "Ingredients: " << ingredients << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
}

void FoodManager::uiMenu() {
    std::cout << "===== Food Mananger =====" << std::endl;
    std::cout << "1.Add Food Item" << std::endl;
    std::cout << "2.Delete Food Item" << std::endl;
    std::cout << "3.Edit Food Item" << std::endl;
    std::cout << "4.Display Food Items In Inventory" << std::endl;
    std::cout << "5.Delete All Food Items From Inventorys" << std::endl;
    std::cout << "0.Exit" << std::endl;
    std::cout << "Choice: " << std::endl;
}

/*Add new food item to inventory*/
bool FoodManager::addFoodItem() {

    // Ask user name of food item
    std::cout << "Enter name of food item: ";
    std::cin >> name_of_food;
    std::cout << std::endl;

    // Ask user what type of food 
    std::cout << "What type of food is the item: ";
    std::cin >> type_of_food;
    std::cout << std::endl;

    // Ask user origin of country
    std::cout << "What is the place of origin: ";
    std::cin >> place_of_origin;
    std::cout << std::endl;

    // Ask user the main ingredients if the food item has any
    std::cout << "What are the main ingridients: ";
    std::cin >> ingredients;
    std::cout << std::endl;

    // Ask user the quantity of food item
    std::cout << "What is the quantity of the food item: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> quantity;
    std::cout << std::endl;

    // Ask user the food id for idenfication of food item
    std::cout << "What is the id for food item: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> id;
    std::cout << std::endl;

    // Add new food item to inventory
    Food newFoodItem;
    newFoodItem.setFoodName(name_of_food);
    newFoodItem.setFoodType(type_of_food);
    newFoodItem.setPlaceOfOrigin(place_of_origin);
    newFoodItem.setFoodIngredients(ingredients);
    newFoodItem.setFoodQuantity(quantity);
    newFoodItem.setFoodId(id);

    std::cout << "Food item added" << std::endl;
    food.push_back(newFoodItem);
    std::cout << "Food items in inventory: " << food.size() << std::endl;

    return 0;
}

/*Dispay all food items in inventory*/
bool FoodManager::displayFoodInventory() {
    // Display food items in inventory
    if (food.empty()) {
        std::cout << "No food items found" << std::endl;
        return 1;
    }
    else {
        std::cout << "====== Food Inventory ======" << std::endl;
        std::cout << "Found " << food.size() << " in food inventory" << std::endl;
        std::cout << "   Name            Type         Origin      Ingredients    Quantity         ID" << std::endl;
        std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "             |             |             |             |             |             |" << std::endl;
        for (auto foodItem : food) {
            std::cout << std::left << std::setw(16) << foodItem.getFoodName()
                << std::left << std::setw(19) << foodItem.getFoodType()
                << std::left << std::setw(10) << foodItem.getPlaceOfOrigin()
                << std::left << std::setw(10) << foodItem.getFoodIngredients()
                << std::left << std::setw(10) << foodItem.getFoodQuantity()
                << std::left << std::setw(10) << foodItem.getFoodId()
                << std::endl;
        }
    }

    return 0;
}

/*Update specific food item in inventory*/
bool FoodManager::editFoodItem() {
    double itemToEdit;
    std::cout << "Enter food item id to edit: " << std::endl;
    std::cin >> itemToEdit;
    Food foodItem;

    for (auto& foodItem : food) {
        if (itemToEdit != foodItem.getFoodId()) {
            std::cout << "Food item not found!" << std::endl;
            break;
        }
        else {
            std::cout << "Select field to edit: " << std::endl;
            std::cout << "1. Name" << std::endl;
            std::cout << "2. Type" << std::endl;
            std::cout << "3. Place Of Origin" << std::endl;
            std::cout << "4. Ingredients" << std::endl;
            std::cout << "5. Quantity " << std::endl;
            std::cout << "Choice: " << std::endl;
            int choice;
            std::cin >> choice;

            switch (choice) {
                /*Edit name of food item*/
            case 1: {
                std::string newFoodName;
                std::cout << "Enter the new name of the food item: ";
                std::cin >> newFoodName;
                foodItem.setFoodName(newFoodName);
                std::cout << "Food name updated" << std::endl;
                break;
            }
                  /*Edit type of food*/
            case 2: {
                std::string newFoodType;
                std::cout << "Enter new type of the food item: ";
                std::cin >> newFoodType;
                foodItem.setFoodType(newFoodType);
                std::cout << "Food type updated" << std::endl;
                break;
            }

                  /*Edit place of origin*/
            case 3: {
                std::string newPlaceOfOrigin;
                std::cout << "Enter the new place of origin: ";
                std::cin >> newPlaceOfOrigin;
                std::cin.ignore();
                foodItem.setPlaceOfOrigin(newPlaceOfOrigin);
                std::cout << "Food origin updated" << std::endl;
                break;
            }

                  /*Edit food ingredients*/
            case 4: {
                std::string newFoodIngredients;
                std::cout << "Enter the new ingredients of the food item: ";
                std::cin >> newFoodIngredients;
                foodItem.setFoodIngredients(newFoodIngredients);
                std::cout << "Food ingredients updated" << std::endl;
                break;
            }
                  /*Edit food quantity*/
            case 5: {
                double newFoodQuantity;
                std::cout << "Enter the new quantity of the food item: ";
                std::cin >> newFoodQuantity;
                foodItem.setFoodQuantity(newFoodQuantity);
                std::cout << "Food quantity updated" << std::endl;
                break;
            }

            default: {
                std::cout << "Invalid choice, please enter a field to edit" << std::endl;
                break;
            }
            }
        }
    }
    return 0;
}

/*Delete food item from inventory*/
bool FoodManager::deleteFoodItem() {
    // Ask user for food item to delete from inventory
    std::cout << "Enter name of food item to delete" << std::endl;
    std::cin >> name_of_food;

    // Search for food item name
    auto it = food.begin();
    bool found = false;
    while (it != food.end()) {
        if (it->getFoodName() == name_of_food) {
            it = food.erase(it);
            found = true;
            std::cout << "Food item deleted from inventory" << std::endl;
            break;
        }
        else {
            it++;
        }

    }
    if (!found) {
        std::cout << "Food item not found!" << std::endl;
    }

    return 0;

}

bool FoodManager::deleteAllFoodItems() {
    if (food.empty()) {
        std::cout << "No food items found" << std::endl;
    }
    else {
        food.clear();
        std::cout << "All items deleted from inventory" << std::endl;
    }

    return 0;
}
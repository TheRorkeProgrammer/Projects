#ifndef FOODTYPE_H
#define FOODTYPE_H

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <memory>
#include <iomanip>
#include <vector>
#include <map>

class Food {
    protected:
    // int id_of_food;
    std::string name_of_food;
    std::string type_of_food;
    std::string place_of_origin;
    std::string ingredients;
    double quantity;
    double id;

    public:

    /*Setters*/
    // int setFoodId(int foodId) {
    //     id_of_food = foodId;
    //     return foodId;
    // }

    std::string setFoodName(std::string foodName) {
        name_of_food = foodName;
        return foodName;
    }

    std::string setFoodType(std::string foodType) {
        type_of_food = foodType;
        return foodType;
    }

    std::string setPlaceOfOrigin(std::string foodOrigin) {
        place_of_origin = foodOrigin;
        return foodOrigin;
    }

    std::string setFoodIngredients(std::string foodIngredients) {
        ingredients = foodIngredients;
        return foodIngredients;
    }

    double setFoodQuantity(double foodQuantity) {
        quantity = foodQuantity;
        return foodQuantity;
    }

    double setFoodId(double foodId) {
        id = foodId;
        return foodId;
    }

    /*Getters*/
    // int getFoodId() {
    //     return id_of_food;
    // }

    std::string getFoodName() {
        return name_of_food;
    }

    std::string getFoodType() {
        return type_of_food;
    }

    std::string getPlaceOfOrigin() {
        return place_of_origin;
    }

    std::string getFoodIngredients() {
        return ingredients;
    }

    double getFoodQuantity() {
        return quantity;
    }

    double getFoodId() {
        return id;
    }

    // ~Food() {}
};

class FoodManager : public Food {
    public:

    std::vector<Food> food;

    void uiMenu();
    bool addFoodItem();
    bool displayFoodInventory();
    bool editFoodItem();
    bool deleteFoodItem();
    bool deleteAllFoodItems();
    void displayFoodItemDetails();

};

// class FileIOManager : public FoodManager {
//     public:
// };

#endif
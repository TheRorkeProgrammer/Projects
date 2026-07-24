#include "Calculator-class.h"

double Calculator::addition() {
    int choice;
    double sum;
    std::cout << "How many numbers would you like to add:" << std::endl;
    std::cout << "1. Two numbers" << std::endl;
    std::cout << "2. Three numbers" << std::endl;
    std::cout << "3. Four numbers" << std::endl;
    std::cin >> choice;

    // Adding two numbers
    if (choice == 1) {
        std::cout << "enter two numbers to add: " << std::endl;
        std::cin >> a;
        std::cout << "+ " << std::endl;
        std::cin >> b;
        sum = a + b;
        std::cout << "= " << sum << std::endl;

        std::ofstream fptr("Addition-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "+" << b << "=" << sum << std::endl;
        }

        // adding three numbers
    }
    else if (choice == 2) {
        std::cout << "enter three numbers to add: " << std::endl;
        std::cin >> a;
        std::cout << "+ " << std::endl;
        std::cin >> b;
        std::cout << "+ " << std::endl;
        std::cin >> c;
        sum = a + b + c;
        std::cout << "= " << sum << std::endl;

        std::ofstream fptr("Addition-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "+" << b << "+" << c << "=" << sum << std::endl;
        }

        // Adding four numbers
    }
    else if (choice == 3) {
        std::cout << "enter four numbers to add: " << std::endl;
        std::cin >> a;
        std::cout << "+";
        std::cin >> b;
        std::cout << "+";
        std::cin >> c;
        std::cout << "+";
        std::cin >> d;
        sum = a + b + c + d;
        std::cout << "=" << sum << std::endl;

        std::ofstream fptr("Addition-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "+" << b << "+" << c << "+" << d << "=" << sum << std::endl;
        }

    }
    else {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;
}

double Calculator::subtraction() {
    int choice;
    double sum;
    std::cout << "How many numbers would you like to subtract" << std::endl;
    std::cout << "1. 2 Numbers" << std::endl;
    std::cout << "2. 3 Numbers" << std::endl;
    std::cout << "3. 4 Numbers" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter two numbers:" << std::endl;
        std::cin >> a;
        std::cout << "-";
        std::cin >> b;
        sum = a - b;
        std::cout << "=" << sum << std::endl;

        std::ofstream fptr("Subtraction-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "-" << b << "=" << sum << std::endl;
        }
    }
    else if (choice == 2) {
        std::cout << "Enter three numbers:" << std::endl;
        std::cin >> a;
        std::cout << "-";
        std::cin >> b;
        std::cout << "-";
        std::cin >> c;
        sum = a - b - c;
        std::cout << "=" << sum << std::endl;

        std::ofstream fptr("Subtraction-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "-" << b << "-" << c << "=" << sum << std::endl;
        }
    }
    else if (choice == 3) {
        std::cout << "Enter four numbers:" << std::endl;
        std::cin >> a;
        std::cout << "-";
        std::cin >> b;
        std::cout << "-";
        std::cin >> c;
        std::cout << "-";
        std::cin >> d;
        sum = a - b - c - d;
        std::cout << "=" << sum << std::endl;

        std::ofstream fptr("Subtraction-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "-" << b << "-" << c << "-" << d << "=" << sum << std::endl;
        }
    }
    else {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;
}

double Calculator::multiplication() {
    int choice;
    double sum;

    std::cout << "How many numbers would you like to multiply" << std::endl;
    std::cout << "1. Two Numbers" << std::endl;
    std::cout << "2. Three Numbers" << std::endl;
    std::cout << "3. Four Numbers" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter two numbers" << std::endl;
        std::cin >> a;
        std::cout << "*";
        std::cin >> b;
        sum = a * b;
        std::cout << "=" << sum << std::endl;

        std::ofstream fptr("Multiplication-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "*" << b << "=" << sum << std::endl;
        }
    }
    else if (choice == 2) {
        std::cout << "Enter three numbers" << std::endl;
        std::cin >> a;
        std::cout << "*";
        std::cin >> b;
        std::cout << "*";
        std::cin >> c;
        sum = a * b * c;
        std::cout << "=" << sum << std::endl;

        std::ofstream fptr("Multiplication-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "*" << b << "*" << c << "=" << sum << std::endl;
        }
    }
    else if (choice == 3) {
        std::cout << "Enter four numbers" << std::endl;
        std::cin >> a;
        std::cout << "*";
        std::cin >> b;
        std::cout << "*";
        std::cin >> c;
        std::cout << "*";
        std::cin >> d;
        sum = a * b * c * d;
        std::cout << "=" << sum << std::endl;

        std::ofstream fptr("Multiplication-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "-" << b << "*" << c << "*" << d << "=" << sum << std::endl;
        }
    }
    else {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;
}

double Calculator::division() {
    int choice;
    double sum;

    std::cout << "How many numbers would you like to divide" << std::endl;
    std::cout << "1. Two Numbers" << std::endl;
    std::cout << "2. Three Numbers" << std::endl;
    std::cout << "3. Four Numbers" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter two numbers: " << std::endl;
        std::cin >> a;
        std::cout << "/";
        std::cin >> b;
        sum = a / b;
        std::cout << "=" << sum << std::endl;

        std::ofstream fptr("Division-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "/" << b << "=" << sum << std::endl;
        }
    }
    else if (choice == 2) {
        std::cout << "Enter three numbers: " << std::endl;
        std::cin >> a;
        std::cout << "/";
        std::cin >> b;
        std::cout << "/";
        std::cin >> c;
        sum = a / b / c;
        std::cout << "=" << std::endl;

        std::ofstream fptr("Division-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "/" << b << "/" << c << "=" << sum << std::endl;
        }
    }
    else if (choice == 3) {
        std::cout << "Enter four numbers: " << std::endl;
        std::cin >> a;
        std::cout << "/";
        std::cin >> b;
        std::cout << "/";
        std::cin >> c;
        std::cout << "/";
        std::cin >> d;
        sum = a / b / c / d;
        std::cout << "=" << sum << std::endl;

        std::ofstream fptr("Division-Calculations.log");
        if (fptr.is_open()) {
            fptr << a << "/" << b << "/" << c << "/" << d << "=" << sum << std::endl;
        }
    }
    return 0;
}

void menu() {
    std::cout << "====== Calculator ======" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Choice: " << std::endl;
}

// void Calculator::saveToFile() {
//     std::ofstream fptr("Addition-Calculations.log");
//     if (fptr.is_open()) {
//         std::cout << "File opened" << std::endl;
//         fptr << addition() << std::endl;
//         fptr << subtraction() << std::endl;
//         fptr << multiplication() << std::endl;
//         fptr << division() << std::endl;
//     }
//     else if (!fptr.is_open()) {
//         std::cout << "failed to open file" << std::endl;
//     }
//     else {
//         std::cerr << "file does not exist" << std::endl;
//     }

//     fptr.close();
// }
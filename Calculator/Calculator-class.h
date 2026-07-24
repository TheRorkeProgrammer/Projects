#include <iostream>
#include <memory>
#include <fstream>
#include <ostream>

// Calculator class
class Calculator {
    protected:
    double a;
    double b;
    double c;
    double d;

    public:
    double addition();
    double subtraction();
    double multiplication();
    double division();
    // void saveToFile();

};
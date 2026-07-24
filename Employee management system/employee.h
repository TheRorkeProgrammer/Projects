#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <memory>
#include <iomanip>
#include <vector>
#include <map>

#define MAX_EMPLOYEES 20
#define FILENAME "ERMS.dat"

/*employee class*/
class Employee {
    protected:
    static std::string name;
    int id;
    std::string position;
    double salary;
    std::string department;

    public:
    // Employee(std::string n, int Id, std::string p, double s, std::string d) :
    //     name(n), id(Id), position(p), salary(s), department(d) {
    // }

    /*==============================================*/
    /*Getters*/
    std::string getEmployeeName() {
        return name;
    }

    int getEmployeeId() {
        return id;
    }

    std::string getEmployeePosition() {
        return position;
    }

    double getEmployeeSalary() {
        return salary;
    }

    std::string getEmployeeDepartment() {
        return department;
    }

    /*==============================================*/
    /*Setters*/
    std::string setEmployeeName(std::string n) {
        name = n;
        return n;
    }

    int setEmployeeId(int ID) {
        id = ID;
        return ID;
    }

    std::string setEmployeePosition(std::string p) {
        position = p;
        return p;
    }

    double setEmployeeSalary(double s) {
        salary = s;
        return s;
    }

    std::string setEmployeeDepartment(std::string d) {
        department = d;
        return d;
    }

    void displayEmployeeDetails();

    ~Employee() {};
};

class EmployeeManager : public Employee {
    public:

    std::vector<Employee> employees;

    bool addEmployee();
    bool deleteEmployee();
    bool searchEmployee();
    bool editEmployee();
    bool displayAllEmployees();
};

class FileIO : public EmployeeManager {
    public:
    int saveToFile();
    int loadFromFile();
};

class UI {
    public:
    void UIMenu();
};

#endif

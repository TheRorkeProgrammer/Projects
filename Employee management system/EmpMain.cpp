#include "employee.h"

void UI::UIMenu() {
    std::cout << "===== Employee management system =====" << std::endl;
    std::cout << "1.Add Employee" << std::endl;
    std::cout << "2.Delete Employee" << std::endl;
    std::cout << "3.Search Employee" << std::endl;
    std::cout << "4.Edit Employee" << std::endl;
    std::cout << "5.Display All Employees" << std::endl;
    std::cout << "0.Exit" << std::endl;
    std::cout << "Choice: " << std::endl;
}

/*displaying employee details*/
void Employee::displayEmployeeDetails() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Position: " << position << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Department: " << department << std::endl;
}

/*Adding new employee*/
bool EmployeeManager::addEmployee() {
    // std::string name;
    // int id;
    // std::string position;
    // double salary;
    // std::string department;

    /*Entering name*/
    std::cin.ignore();
    std::cout << "Enter name: " << std::endl;
    std::getline(std::cin, name);
    std::cout << std::endl;

    /*Entering id*/
    std::cout << "Enter id: " << std::endl;
    std::cin >> id;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << std::endl;

    /*Entering position*/
    // std::cout << "DEBUG: reading position from user input" << std::endl;
    std::cout << "Enter position: " << std::endl;
    // std::cin >> position;
    std::getline(std::cin, position);
    // std::cout << "DEBUG: position entered" << std::endl;
    std::cout << std::endl;

    /*Entering salary*/
    if (salary > 200) {
        std::cout << "Enter salary: " << std::endl;
        std::cin >> salary;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << std::endl;
    }

    /*Entering department*/
    std::cout << "Enter department: " << std::endl;
    // std::cin >> department; 
    std::getline(std::cin, department);
    std::cout << std::endl;

    /*Creating new employee and adding it to the vector*/
    Employee newEmployee;
    newEmployee.setEmployeeName(name);
    newEmployee.setEmployeeId(id);
    newEmployee.setEmployeePosition(position);
    newEmployee.setEmployeeSalary(salary);
    newEmployee.setEmployeeDepartment(department);

    std::cout << "Successfully added new employee" << std::endl;

    employees.push_back(newEmployee);
    std::cout << "Employees in the record book: " << employees.size() << std::endl;

    return 0;
}

/*deleting an employee*/
bool EmployeeManager::deleteEmployee() {
    /*asking user to input employee id for deletion*/
    std::cout << "Enter Employee ID to delete" << std::endl;
    std::cin >> id;

    /*searching for employee id*/
    auto it = employees.begin();
    bool found = false;
    while (it != employees.end()) {
        if (it->getEmployeeId() == id) {
            it = employees.erase(it);
            found = true;
            std::cout << "Employee deletion successful" << std::endl;
            break;
        }
        else {
            it++;
        }
    }
    if (!found) {
        std::cout << "Employee not found!" << std::endl;
    }

    return 0;
}

/*Searching for an employee by id*/
bool EmployeeManager::searchEmployee() {
    /*searching by id*/
    int searchTerm;
    std::cout << "Search by ID: " << std::endl;
    std::cin >> searchTerm;
    std::cout << std::endl;
    std::cout << "Searching for employee....." << std::endl;
    std::cout << std::endl;

    bool found;
    for (auto& emp : employees) {
        /*checking if user search matches id*/
        if (emp.getEmployeeId() == searchTerm) {
            emp.displayEmployeeDetails();
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Employee not found!" << std::endl;
        std::cout << "Please add employee before searching!" << std::endl;
    }
    return 0;
}

/*Editing employee*/
bool EmployeeManager::editEmployee() {
    int idToEdit;
    std::cout << "Enter employee id to edit" << std::endl;
    std::cin >> idToEdit;
    Employee emp;

    for (auto& emp : employees) {
        if (idToEdit != emp.getEmployeeId()) {
            std::cout << "Employee not found!" << std::endl;
            break;
        }
        else {
            std::cout << "Select field to edit: " << std::endl;
            std::cout << "1. Name" << std::endl;
            std::cout << "2. ID" << std::endl;
            std::cout << "3. Position" << std::endl;
            std::cout << "4. Salary" << std::endl;
            std::cout << "5. Department " << std::endl;
            std::cout << "Choice: " << std::endl;
            int choice;
            std::cin >> choice;

            switch (choice) {
                /*Editing name*/
            case 1: {
                std::string newName;
                std::cout << "Enter new name: " << std::endl;
                std::cin >> newName;
                emp.setEmployeeName(newName);
                break;
            }

                  /*Editing id*/
            case 2: {
                int newID;
                std::cout << "Enter new ID: " << std::endl;
                std::cin >> newID;
                emp.setEmployeeId(newID);
                break;
            }

                  /*Editing position*/
            case 3: {
                std::string newPosition;
                std::cout << "Enter new position: " << std::endl;
                std::cin >> newPosition;
                emp.setEmployeePosition(newPosition);
                break;
            }

                  /*Editing salary*/
            case 4: {
                double newSalary;
                std::cout << "Enter new salary: " << std::endl;
                std::cin >> newSalary;
                emp.setEmployeeSalary(newSalary);
                std::cout << "Invalid salary! try again" << std::endl;
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                break;
            }

            case 5: {
                std::string newDepartment;
                std::cout << "Enter new department" << std::endl;
                std::cin >> newDepartment;
                emp.setEmployeeDepartment(newDepartment);
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

/*displaying all employees*/
bool EmployeeManager::displayAllEmployees() {
    if (employees.empty()) {
        std::cout << "No employess found!" << std::endl;
    }
    else {
        std::cout << "Showing all employees: " << std::endl;
        std::cout << "Name        ID        Position          Salary        Department" << std::endl;
        std::cout << "------------------------------------------------------------------------------" << std::endl;
        for (auto& emp : employees) {
            std::cout << std::left << std::setw(15) << emp.getEmployeeName()
                << std::setw(15) << emp.getEmployeeId() << std::setw(15) << emp.getEmployeePosition()
                << std::setw(15) << emp.getEmployeeSalary() << std::setw(15) << emp.getEmployeeDepartment()
                << std::endl;
        }
        std::cout << "Employees in record book: " << employees.size() << std::endl;
    }
    return 0;
}

/*saving employees to file*/
int FileIO::saveToFile() {
    addEmployee();
    Employee emp;
    std::ofstream fptr(FILENAME);
    if (fptr) {
        std::cout << "File opened successfully" << std::endl;
        fptr << emp.getEmployeeName() << " "
            << emp.getEmployeeId() << " "
            << emp.getEmployeePosition() << " "
            << emp.getEmployeeSalary() << " "
            << emp.getEmployeeDepartment() << " " << std::endl;
    }
    else if (!fptr.is_open()) {
        std::cerr << "File not opened!" << std::endl;
    }
    else {
        std::cerr << "File not found or doesn't exist" << std::endl;
    }

    fptr.close();

    return 0;
}

/*loading employees from file*/
int FileIO::loadFromFile() {
    std::ifstream fptr(FILENAME);
    if (!fptr.is_open()) {
        std::cerr << "No data found" << std::endl;
        return 1;
    }
    else {
        std::string line;
        while (std::getline(fptr, line)) {
            std::stringstream ss(line);
            std::string token;
            std::vector<std::string> tokens;

            // Split line by commas
            while (std::getline(ss, token, ',')) {
                tokens.push_back(token);
            }

            // Create an Employee object from tokens
            if (tokens.size() == 4) {
                Employee emp;
                emp.setEmployeeId(std::stoi(tokens[0])); // Convert string to int
                emp.setEmployeeName(tokens[1]);
                emp.setEmployeePosition(tokens[1]); // Convert string to double
                emp.setEmployeeSalary(std::stod(tokens[2]));
                emp.setEmployeeDepartment(tokens[1]);
                employees.push_back(emp);
            }
        }
    }
    return 0;
}
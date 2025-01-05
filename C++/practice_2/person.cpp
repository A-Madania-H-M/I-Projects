#include "person.h" // Include the header file
#include <iostream>

// Constructor implementation
Person::Person(std::string n, int a) {
    name = n;
    age = a;
}

// Method implementation
void Person::introduce() {
    std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
}

#ifndef PERSON_H // Include guard to prevent multiple inclusions
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a);

    // Method to introduce the person
    void introduce();
};

#endif // PERSON_H
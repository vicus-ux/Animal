#pragma once
#include "Mammal.h"

class Dog : public Mammal {
public:
    Dog(int color, int age, const std::string& name)
        : Mammal(color, age, name) {}

    void bark() const {
        std::cout << name << " says: Woof!" << std::endl;
    }

    void eat() {
        std::cout << name << " is eating " << std::endl;
    }

    void completeCommands() {
        std::cout << "I complete command" << std::endl;
    }
};
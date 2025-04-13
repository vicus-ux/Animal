#pragma once
#include "Animal.h"

class Mammal : public Animal {
public:
    Mammal(int color, int age, const std::string& name)
        : Animal(color, age, name) {}

    void run() const {
        std::cout << name << " is running!" << std::endl;
    }

    void eat() {
        std::cout << name << " is eating" << std::endl;
    }
};
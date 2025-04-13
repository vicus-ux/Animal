#pragma once
#include "Animal.h"

class Fish : public Animal {
public:
    Fish(int color, int age, const std::string& name)
        : Animal(color, age, name) {}

    void swim() const {
        std::cout << name << " is swimming!" << std::endl;
    }

    void eat() {
        std::cout << name << "is eating " << std::endl;
    }
};
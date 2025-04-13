#pragma once
#include "Animal.h"

class Bird : public Animal {
public:
    Bird(int color, int age, const std::string& name)
        : Animal(color, age, name) {}

    void fly() const {
        std::cout << name << " is flying!" << std::endl;
    }

    void eat() {
        std::cout << name << " is eating" << std::endl;
    }
};
#pragma once
#include "Mammal.h"

class Cat : public Mammal {
public:
    Cat(int color, int age, const std::string& name)
        : Mammal(color, age, name) {}

    void meow() {
        std::cout << name << " says: Meow!" << std::endl;
    }

    void eat() {
        std::cout << name << " is eating " << std::endl;
    }

    void catchMouse() {
        std::cout << "I catch mouse" << std::endl;
    }
};
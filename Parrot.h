#pragma once
#include "Bird.h"

class Parrot : public Bird {
public:
    Parrot(int color, int age, const std::string& name)
        : Bird(color, age, name) {}

    void speak()  {
        std::cout << name << " say: Karaul " << std::endl;
    }

    void Peat() {
        std::cout << name << "is eating " << std::endl;
    }
};
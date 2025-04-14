#include "Animal.h"

Animal::Animal(int color, int age, const std::string& name)
    : color(color), age(age), name(name) {}

int Animal::getColor() const {
    return color;
}

void Animal::setColor(int color) {
    this->color = color;
}

int Animal::getAge() const {
    return age;
}

void Animal::setAge(int age) {
    this->age = age;
}

const std::string& Animal::getName() const {
    return name;
}

void Animal::setName(const std::string& name) {
    this->name = name;
}

void Animal::grow() {
    age++;
    std::cout << name << " is growing. That is do " << age << " years old" << std::endl;
}

void Animal::eat() {
    std::cout << name << " is eating." << std::endl;
}
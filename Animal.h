#pragma once
#include <string>
#include <iostream>

class Animal {
protected:
    int color;
    int age;
    std::string name;

public:
    Animal(int color, int age, const std::string& name);
   
    int getColor() const;
    void setColor(int color);

    int getAge() const;
    void setAge(int age);

    const std::string& getName() const;
    void setName(const std::string& name);

    void grow();
    void eat();
};
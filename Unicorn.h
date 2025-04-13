#pragma once
#include "Animal.h"

class Unicorn :public Animal {
public:
	Unicorn(int color,int age,const std::string& name)
		:Animal(color,age,name){}

	void runOnTheRainbow() {
		std::cout << "I run on the rainbow" << std::endl;
	}

	void eat() {
		std::cout<<name << "  is eating" << std::endl;
	}
};
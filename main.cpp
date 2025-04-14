#include <iostream>
#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"
#include "Parrot.h"
#include "Cat.h"
#include "Dog.h"
#include "Unicorn.h"

int main() {
    Fish fish(00000, 2, "Nemo");
    Bird bird(00000, 1, "Tvik");
    Mammal mammal(0000, 3, "Mammoth");
    Parrot parrot(0000, 5, "Gosha");
    Cat cat(0000, 4, "Mila");
    Dog dog(00000, 6, "Dobbi");
    Unicorn unicorn(0000, 5, "Unicornik");

    
    fish.swim();
    fish.eat();
    fish.grow();

    bird.fly();
    bird.eat();
    bird.grow();

    mammal.run();
    mammal.eat();
    mammal.grow();

    parrot.fly();
    parrot.speak();
    parrot.eat();
    parrot.grow();

    cat.run();
    cat.meow();
    cat.eat();
    cat.grow();
    cat.catchMouse();

    dog.run();
    dog.bark();
    dog.eat();
    dog.grow();
    dog.completeCommands();

    unicorn.eat();
    unicorn.runOnTheRainbow();  
    unicorn.grow();

    return 0;
}
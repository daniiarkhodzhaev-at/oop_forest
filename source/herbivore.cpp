#include <iostream>
#include <herbivore.h>

Herbivore::Herbivore() {}

Herbivore::~Herbivore() {}

void Herbivore::say_type()
{
    std::cout << "I'm a herbivore!\n";
}

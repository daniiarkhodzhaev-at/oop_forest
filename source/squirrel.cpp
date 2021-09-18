#include <iostream>
#include <squirrel.h>

Squirrel::Squirrel() {}

Squirrel::~Squirrel() {}

void Squirrel::say()
{
    std::cout << "I'm a rabbit!\n";
}

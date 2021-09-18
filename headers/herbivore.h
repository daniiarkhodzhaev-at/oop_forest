#include <animal.h>

#ifndef HERBIVORE_H
#define HERBIVORE_H

class Herbivore : public Animal
{
public:
    Herbivore();
    virtual ~Herbivore() = 0;
    void say_type();
    virtual void say() = 0;
};

#endif

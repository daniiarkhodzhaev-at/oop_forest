#include <animal.h>

#ifndef PREDATOR_H
#define PREDATOR_H

class Predator : public Animal
{
public:
    Predator();
    virtual ~Predator() = 0;
    void say_type();
    virtual void say() = 0;
};

#endif

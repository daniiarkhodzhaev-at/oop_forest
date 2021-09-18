#include <herbivore.h>

#ifndef RABBIT_H
#define RABBIT_H

class Rabbit : public Herbivore
{
public:
    Rabbit();
    ~Rabbit();
    void say();
};

#endif

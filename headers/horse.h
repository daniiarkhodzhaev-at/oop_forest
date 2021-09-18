#include <herbivore.h>

#ifndef HORSE_H
#define HORSE_H

class Horse : public Herbivore
{
public:
    Horse();
    ~Horse();
    void say();
};

#endif

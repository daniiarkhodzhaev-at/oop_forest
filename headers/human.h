#include <predator.h>

#ifndef HUMAN_H
#define HUMAN_H

class Human : public Predator
{
public:
    Human();
    ~Human();
    void say();
};

#endif

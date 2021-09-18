#include <predator.h>

#ifndef WOLF_H
#define WOLF_H

class Wolf : public Predator
{
public:
    Wolf();
    ~Wolf();
    void say();
};

#endif

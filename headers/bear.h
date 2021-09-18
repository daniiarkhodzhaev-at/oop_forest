#include <predator.h>

#ifndef BEAR_H
#define BEAR_H

class Bear : public Predator
{
public:
    Bear();
    ~Bear();
    void say();
};

#endif

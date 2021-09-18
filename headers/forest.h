#ifndef FOREST_H
#define FOREST_H

#include <animal.h>

class Forest {
private:
    Animal *arr;

public:
    Forest();

    Forest(unsigned);

    ~Forest();

    operator()();
};

#endif

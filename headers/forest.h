#ifndef FOREST_H
#define FOREST_H

#include <animal.h>

class Forest {
private:
    Animal **arr;
    unsigned len;

public:
    Forest();

    Forest(unsigned);

    ~Forest();

    void operator()();
};

#endif

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
    Animal();
    virtual ~Animal() = 0;
    virtual void say_type() = 0;
    virtual void say() = 0;
};

#endif

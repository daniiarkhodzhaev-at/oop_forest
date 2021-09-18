#include <iostream>

#include <forest.h>
#include <animals_lib.h>

Forest::Forest() : Forest(0) {}

Forest::Forest(unsigned n) {
    unsigned i;
    len = n;
    arr = new Animal*[n];
    for (i = 0; i < n; ++i) {
        switch (i % 8) {
            case 0:
                arr[i] = new Wolf();
                break;
            case 1:
                arr[i] = new Fox();
                break;
            case 2:
                arr[i] = new Bear();
                break;
            case 3:
                arr[i] = new Human();
                break;
            case 4:
                arr[i] = new Rabbit();
                break;
            case 5:
                arr[i] = new Horse();
                break;
            case 6:
                arr[i] = new Beaver();
                break;
            case 7:
                arr[i] = new Squirrel();
                break;
            default:
                break;
        }
    }
}

void Forest::operator()() {
    unsigned i;
    for (i = 0; i < len; ++i) {
        arr[i]->say_type();
        arr[i]->say();
        std::cout << "\n";
    }
}

Forest::~Forest() {
    unsigned i;
    for (i = 0; i < len; ++i) {
        delete arr[i];
    }
    delete[] arr;
    arr = nullptr;
    len = 0;
}

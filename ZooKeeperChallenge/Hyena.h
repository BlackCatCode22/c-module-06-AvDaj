//
// Created by yourm on 4/2/2025.
//

#ifndef HYENA_H
#define HYENA_H

#include <iostream>
using namespace std;
#include "Animals.h"

class Hyena: public Animals {
public:
    int numsOfHyenas = 0;
    Hyena(string name, string species, int age) : Animals(name, species, age) {}

};



#endif //HYENA_H

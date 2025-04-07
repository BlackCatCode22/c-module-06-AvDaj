//
// Created by yourm on 4/2/2025.
//

#ifndef ANIMALS_H
#define ANIMALS_H

#include <iostream>
using namespace std;

class Animals {
private:
    string name;
    string species;
    int age;
public:
    Animals() {
        string name;
        string species;
        int age;
    }

    Animals(string name, string species, int age) {
        this->name = name;
        this->species = species;
        this->age = age;
    }

    int getAge() {
        return age;
    }
    void setAge() {
        age = age;
    }

    string getName() {
        return name;
    }
    void setName() {
        name = name;
    }

    string getSpecies() {
        return species;
    }
    void setSpecies() {
        species = species;
    }
};



#endif //ANIMALS_H

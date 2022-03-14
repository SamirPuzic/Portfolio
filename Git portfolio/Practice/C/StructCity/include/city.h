#ifndef CITY_H
#define CITY_H

#include "mystring.h"
struct City
{
    struct MyString name;
    int population;
    float radius;
};

void ConstructMyCity(struct City*, struct MyString, int, float);
void PrintMyCity(struct City);
#endif
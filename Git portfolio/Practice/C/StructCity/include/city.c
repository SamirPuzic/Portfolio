#include <stdio.h>
#include "city.h"
#include "mystring.h"

void ConstructMyCity(struct City* city, struct MyString mystring, int population, float radius){
    city->name = mystring;
    city->population = population;
    city->radius = radius;
}

void PrintMyCity(struct City city){
    printf("Name: %s, Population: %d, Radius: %f \n", GetMyStringValue(city.name), city.population, city.radius);
}

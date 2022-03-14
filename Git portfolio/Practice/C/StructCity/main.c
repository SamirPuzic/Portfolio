#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "include/city.h"
#include "include/mystring.h"
#include "include/dynamic_array.h"

void ReadDataFromFile(struct DynamicArray *arr){;
    int i = 0;
    char *line = NULL;
    size_t len = 0;
    int read;
    FILE *fptr;
    fptr = fopen("input.txt", "rw");

    while ((read = getline(&line, &len, fptr)) != -1)
    {
        struct City newCity;
        printf("Line: %s \n", line);

        // Create a string using name
        char *pch = strtok(line, ",");
        struct MyString cityName;
        ConstructMyString(&cityName, pch);

        pch = strtok(NULL,",");
        int population = atoi(pch) + 100;

        pch = strtok(NULL,",");
        float radius = atof(pch);

        ConstructMyCity(&newCity, cityName, population, radius);

        PushBack(arr, newCity);
    } 
}

int main()
{
    struct DynamicArray vector;
    ConstructDynamicArray(&vector);

    ReadDataFromFile(&vector);
    PrintDynamicArray(vector);
}

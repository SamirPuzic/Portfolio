#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include "city.h"

struct DynamicArray {
    struct City* arr;
    int i;
    int n;
};

void ConstructDynamicArray(struct DynamicArray*);
void PushBack(struct DynamicArray*, struct City);
void PushFront(struct DynamicArray*, struct City);
void AddToIndex(struct DynamicArray*, struct City, int);
void RemoveFromIndex(struct DynamicArray*, int);
void RemoveFromBack(struct DynamicArray*);

void PrintDynamicArray(struct DynamicArray);

#endif
#include "city.h"
#include "dynamic_array.h"
#include <stdlib.h>

void ConstructDynamicArray(struct DynamicArray *arr)
{
    arr->i = 0;
    arr->n = 2;
    arr->arr = (struct City *)malloc(sizeof(struct City) * arr->n);
}

void memory(struct DynamicArray *DynamicArrayay)
{
    int n = DynamicArrayay->n * 2;
    struct City *arr = (struct City *)malloc(sizeof(struct City) * n);

    for (int i = 0; i < DynamicArrayay->i; i++)
    {
        arr[i] = DynamicArrayay->arr[i];
    }
    free(DynamicArrayay->arr);
    DynamicArrayay->arr = arr;
    DynamicArrayay->n = n;
}

void PushBack(struct DynamicArray *arr, struct City value)
{

    if (arr->i >= arr->n)
        memory(arr);
    arr->arr[arr->i] = value;
    arr->i++;
}

void PushFront(struct DynamicArray *arr, struct City value)
{

    if (arr->i >= arr->n)
        memory(arr);

    for (int j = arr->i; j > 0; j--)
    {
        arr->arr[j] = arr->arr[j - 1];
    }
    arr->arr[0] = value;
    arr->i++;
}

void AddToIndex(struct DynamicArray *arr, struct City value, int index)
{

    if (arr->i >= arr->n)
        memory(arr);
    for (int j = arr->i; j > index; j--)
    {
        arr->arr[j] = arr->arr[j - 1];
    }
    arr->arr[index] = value;
    arr->i++;
}

void RemoveFromBack(struct DynamicArray *arr)
{
    arr->i--;
}

void RemoveFromIndex(struct DynamicArray *arr, int index)
{
    for (int j = index + 1; j < arr->i; j++)
    {
        arr->arr[j - 1] = arr->arr[j];
    }
    arr->i--;
}

void PrintDynamicArray(struct DynamicArray arr)
{
    for (int i = 0; i < arr.i; i++)
    {
        PrintMyCity(arr.arr[i]);
    }
}

// int sortLtoH(int a, int b)
// {
//     return a > b;
// }

// int sortHtoL(int a, int b)
// {
//     return a < b;
// }

// void sortFunc(struct DynamicArray *arr, int (*func)(int, int))
// {

//     for (int j = 0; j < arr->i; j++)
//     {
//         for (int k = 0; k < arr->i; k++)
//         {
//             if (func(arr->arr[k], arr->arr[j]))
//             {
//                 int temp = arr->arr[j];
//                 arr->arr[j] = arr->arr[k];
//                 arr->arr[k] = temp;
//             }
//         }
//     }
// }

// struct DynamicArray DeepCopyDynamicArray(struct DynamicArray a)
// {

//     struct DynamicArray b;
//     b.i = a.i;
//     b.n = a.n;
//     b.arr = (int *)malloc(b.n * 4);
//     for (int i = 0; i < b.i; i++)
//     {
//         b.arr[i] = a.arr[i];
//     }

//     return b;
// }

// struct DynamicArray ShallowCopyDynamicArray(struct DynamicArray b)
// {

//     struct DynamicArray c;
//     c.i = b.i;
//     c.n = b.n;
//     c.arr = b.arr;
//     return c;
// }


#include "mystring.h"
#include <stdlib.h>
#include <string.h>

void memorys(struct MyString *mystring)
{
        int n = mystring->n * 2;
        char *arr = (char *)malloc(sizeof(char) * n);

        for (int j = 0; j < mystring->i; j++)
        {
            arr[j] = mystring->arr[j];
        }
        free(mystring->arr);
        mystring->arr = arr;
        mystring->n = n;
}

void addToBack(struct MyString *mystring, char x)
{
    if (mystring->i >= mystring->n)
    {
        memorys(mystring);
    }
    mystring->arr[mystring->i] = x;
    mystring->i++;
}

void ConstructMyString(struct MyString *mystring, char *value)
{
    mystring->i = 0;
    mystring->n = 2;
    mystring->arr = (char *)malloc(sizeof(char) * mystring->n);

    for(int i = 0; i < strlen(value); i++){
        addToBack(mystring, value[i]);
    }
}

void ReplaceMyString(struct MyString *mystring, char *value)
{
    free(mystring->arr);
    ConstructMyString(mystring,value);
}

char* GetMyStringValue(struct MyString mystring){
    return mystring.arr;
}
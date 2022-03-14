#ifndef MYSTRING_H
#define MYSTRING_H

struct MyString
{
    char *arr;
    int n;
    int i;
};

void ConstructMyString(struct MyString*, char*);
void ReplaceMyString(struct MyString*, char*);
char* GetMyStringValue(struct MyString);
// void RemoveMyString(struct MyString*);

#endif
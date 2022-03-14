//Comparison of two numbers

#include <stdio.h>

//Find largest number
int max_fun(int a, int b){

    if (a>b)
        printf("%d", a);
    
    else if (b>a)
        printf("%d", b);
    
    else 
        printf("The numbers are the same"); 

    return 0;
}

//Find smallest number
int min_fun(int x, int y){

    if (x<y)
        printf("%d", x);

    else if (y<x)
        printf("%d", y);

    else 
        printf("The numbers are the same");

    return 0;
}

int main(){

int max=max_fun(10,30);
int min=min_fun(20,-20);

return 0;
}
//Summing elements of an array

#include <stdio.h>
#include <string.h>

float sum_fun(float arr[], int n){

    float suma = 0;
    int i; 
 
    for (i = 0; i < n; i++)
    suma += arr[i];
 
    return suma;

}

int main(){


float arr[] = {23, 5, 14, 3};
int n = 4;
float sum = sum_fun(arr, n); // n is the number of elements in the array
printf("Sum of given array is %f", sum);
return 0;

}
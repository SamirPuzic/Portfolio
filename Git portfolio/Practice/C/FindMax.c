//Finding largest number in array

#include <stdio.h>

int max_arr(int arr[], int n){

    int i;
    
    int max1 = arr[0];
 
    for (i = 1; i < n; i++)
        if (arr[i] > max1)
            max1 = arr[i];
 
    return max1;

}

int main(){

    int arr[] = {30, 524, 45, 90, 2908};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int max = max_arr(arr, n); // n is number of elements in the array

    printf("Largest in given array is %d", max);
    return 0;

}
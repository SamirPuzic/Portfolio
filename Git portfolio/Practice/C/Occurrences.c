//Find number of occurrences 

#include <stdio.h>

int find_freq(int *arr, int n, int number){
    int i, countNum=0;

    for(i=0; i<n; i++){
        if(arr[i]==number)
            countNum++;
    }
    return countNum;
}

int main(){

	int arr[] = {1, 2, 3, 4, 4, 4, 5, 2, 1};
	int n=9, number = 4;
	int frequency = find_freq(arr, n, number);
    // n is the number of elements in the array, and returned value, in this case, should be 3.
    printf("%d", frequency);
}
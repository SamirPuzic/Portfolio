//Splitting array on odd and even numbers

#include <stdio.h>
int arr1[5];
int arr2[5];
int n1=0, n2=0;

void splitArray(int *arr, int n){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]%2==0){
            arr1[n1]=arr[i];
            n1++;
        }
        else if(arr[i]%2!=0){
            arr2[n2]=arr[i];
            n2++;
        }
    }        
}

int main(){

int arr[]={1, 2, 3, 4, 5, 6, 7, 8 ,9 ,10};
int n=10;

splitArray(arr, n);
printf("Even numbers : \n");
for (int i=0; i<5; i++){
printf("%d\n", arr1[i]);}
printf("Odd numbers: \n");
for(int i=0;i<5;i++){
printf("%d\n", arr2[i]);
}
return 0;
}
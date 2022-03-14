//Finding a specific letter in array

#include <stdio.h>
#include <string.h>

int search(char array[], int n, char character){
    int i;

    for(i=0; i<n; i++){
        if (array[i]==character){
        break;
        }
    }
    return i+1;

}

int main(){

    char array[]="Police";
    char character='c';
    int n=strlen(array);
    

    int index = search(array, n, character);
    
    printf("%d\n", index);

    return 0;
}
//Allocating memory

#include <stdio.h>
#include <stdlib.h>

struct foo {
    int *arr;
    int i;
    int n;
};

void initialization(struct foo* first){
    first->i=0;
    first->n=4;
    first->arr=(int *)malloc(sizeof(int)*first->n);
}

void write(struct foo* first){
    for(int i=0; i<first->n;i++){
        scanf("%d", &first->arr[i]);
    }
}

void print(struct foo* first){
    for(int i=0; i<first->n;i++){
        printf("\n%d\n", first->arr[i]);
    }
}


int main(){
    struct foo first;
    initialization(&first);
    write(&first);
    print(&first); 
    return 0;  
}
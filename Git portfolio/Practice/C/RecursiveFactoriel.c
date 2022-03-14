//Find factoriel - recursive 

#include <stdio.h>

int fact_fun(int n){
    printf("%d \n",n);
    if (n==0){
        return 1;
    }
    return n*fact_fun(n-1);

}


int main(){

int factorial = fact_fun(10);
printf("Factorial of 10 is %d\n", factorial);

return 0;
}
//Fat calculator

#include <stdio.h>

int main () {

char gender;
int age;
float height;
int weight;

printf("Enter gender m/f? ");
scanf("%c", &gender);


printf("How old are you? ");
scanf("%d", &age);

printf("Enter your height in cm: ");
scanf("%f", &height);
height/=100;
printf("Enter your weight in kg: ");
scanf("%d", &weight);

float bmi;
bmi=weight/(height*height);

if (gender=='m') {

//BFP = 1.20 × BMI + 0.23 × Age - 16.2
float bfp;
bfp=1.2*bmi+0.23*age-16.2;

printf("Your body fat percentage is %.2f %% \n", bfp);

}

else if (gender=='f') {

float bfp;
bfp=1.2*bmi+0.23*age-5.4;

printf("VYour body fat percentage is %.2f %% \n", bfp);

}


} 
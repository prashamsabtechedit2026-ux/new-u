#include<stdio.h>
int main(){
float principal,time,rate,si;
printf("Enter principal amount:");
scanf("%f",&principal);
printf("Enter time(in years):");
scanf("%f",&time);
printf("Enter annual interest rate:");
scanf("%f",&rate);
si=(principal*time*rate)/100;
printf("The simple Interest is:%.2f\n",si);
return 0;
}

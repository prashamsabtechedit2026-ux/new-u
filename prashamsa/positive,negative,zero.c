#include<stdio.h>
int main(){
double num;
printf("Enter a number:");
scanf("%f",&num);
if(num>0){
printf("%2lf is positive.\n",num);}
else if(num<0){
printf("%2lf is negative.\n",num);}
else
printf("The number is zero.\n");
return 0;
}

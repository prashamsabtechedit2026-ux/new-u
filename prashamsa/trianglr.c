#include<stdio.h>
void main(){
int a,b,c;
printf("Enter three sides of triangle");
scanf ("%d %d %d",&a,&b,&c);
if(a==b&& b==c &&c==a){
printf("triangle is equilateral");
}
else if(a==b|| b==c||a==c){
printf("triangle is isoceles");
}
else{
printf("triangle is scalene");
}
}

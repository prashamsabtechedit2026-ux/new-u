#include<stdio.h>
int main(){
int a,b,c;
printf("Emter three numbers");
scanf("%d %d %d",&a,&b,&c);
if(b<a && a>c){
printf("a is largest number");
}
else if(b>a && b>c){
printf("b is largest number");
}
else{
printf("c is lagrest number");
}
}


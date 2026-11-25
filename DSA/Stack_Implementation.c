#include <stdio.h>
#define SIZE
int stack [SIZE];
int top =-1;

int isFull()
{
if(top==SIZE-1)
return 1;
else
return 0;
}

int isEmpty()
{
if (top==-1)
return 1;
else
return 0;
}

void push(int item)
{
if (!isFull())
{
top ++;
stack [top]=item;
printf("%d pushed to stack. \n", item);
}
else{
printf("Stack overflow", item);
}
}


void pop()
{
if (!isEmpty())
{
int item=stack [top];
top --;

printf("%d popped to stack. \n", item);
}
else{
printf("Stack underflow", item);
}
}

void display()
{
if(isEmpty())
{
printf("Stack is empty");
}
else{
printf("Stack is full");
for(int i=0; i<=top;i++)
{
printf("%d",stack[i]);
}
printf("\n");
}
}

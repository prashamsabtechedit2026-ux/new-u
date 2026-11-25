#include <stdio.h>
#define SIZE 5
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
printf("Stack overflow\n", item);
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
printf("Stack underflow\n");
}
         }

void display()
{
if(isEmpty())
{
printf("Stack is empty\n");
}
else{
printf("Stack elements\n");
for(int i=0; i<=top;i++)
{
printf("%d\n",stack[i]);
}
printf("\n");
}
}
int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();
    push(40);
    push(50);
    display();

    return 0;
}

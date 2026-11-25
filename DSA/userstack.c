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

int main(){
int choice, item;

    while(1) {

        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter item to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program...\n");
              break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
        printf("\n");
    }

    return 0;
}

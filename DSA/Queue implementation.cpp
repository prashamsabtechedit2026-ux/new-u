#include <stdio.h>
#define SIZE 6
int queue[SIZE],i;
int front = -1, rear = -1;
void enqueue(int item) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow. Cannot insert %d\n", item);
        return;
    }
    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = item;
    printf("%d inserted into queue.\n", item);
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow. Cannot delete.\n");
        return;
    }
    printf("%d deleted from queue.\n", queue[front]);
    front++;
}
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        printf("front = %d, rear = %d\n", front, rear);
        return;
    }
    printf("Queue elements: ");
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\nfront = %d, rear = %d\n", front, rear);
}
int main (){
enqueue (10);
enqueue (20);
enqueue (30);
display();
dequeue();
display();
enqueue(40);
enqueue(50);
enqueue(60);
display();
enqueue(70);
display();
return 0;
}

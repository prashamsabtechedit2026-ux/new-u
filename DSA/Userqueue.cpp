#include <stdio.h>
#define SIZE 4
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
int main(){
int choice, item;

    while(1) {

        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter item to queue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
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

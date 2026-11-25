#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int list[MAX];
int size = 0;

void createList() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX) {
        printf("Invalid size!\n");
        return;
    }

    size = n;

    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &list[i]);
    }

    printf("List created successfully!\n");
}

void insertEnd(int item) {
    if (size == MAX) {
        printf("List is full!\n");
        return;
    }

    list[size++] = item;
    printf("Element inserted successfully!\n");
}

void insertBeginning(int item) {
    int i;

    if (size == MAX) {
        printf("List is full!\n");
        return;
    }

    for (i = size - 1; i >= 0; i--) {
        list[i + 1] = list[i];
    }

    list[0] = item;
    size++;

    printf("Element inserted successfully!\n");
}

void insertAt(int item, int pos) {
    int i;

    if (size == MAX) {
        printf("List is full!\n");
        return;
    }

    if (pos < 0 || pos > size) {
        printf("Invalid position!\n");
        return;
    }

    for (i = size - 1; i >= pos; i--) {
        list[i + 1] = list[i];
    }

    list[pos] = item;
    size++;

    printf("Element inserted successfully!\n");
}

void deleteEnd() {
    if (size == 0) {
        printf("List is empty!\n");
        return;
    }

    size--;
    printf("Last element deleted successfully!\n");
}

void deleteBeginning() {
    int i;

    if (size == 0) {
        printf("List is empty!\n");
        return;
    }

    for (i = 0; i < size - 1; i++) {
        list[i] = list[i + 1];
    }

    size--;
    printf("First element deleted successfully!\n");
}

void deleteAt(int pos) {
    int i;

    if (size == 0) {
        printf("List is empty!\n");
        return;
    }

    if (pos < 0 || pos >= size) {
        printf("Invalid position!\n");
        return;
    }

    for (i = pos; i < size - 1; i++) {
        list[i] = list[i + 1];
    }

    size--;
    printf("Element deleted successfully!\n");
}

void traverse() {
    int i;

    if (size == 0) {
        printf("List is empty!\n");
        return;
    }

    printf("List elements: ");

    for (i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }

    printf("\n");
}

int main() {
    int choice, item, pos;

    while (1) {
        printf("\n--- List Implementation ---\n");
        printf("1. Create List\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Insert at Position\n");
        printf("5. Delete from Beginning\n");
        printf("6. Delete from End\n");
        printf("7. Delete from Position\n");
        printf("8. Display List\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createList();
                break;

            case 2:
                printf("Enter element: ");
                scanf("%d", &item);
                insertBeginning(item);
                break;

            case 3:
                printf("Enter element: ");
                scanf("%d", &item);
                insertEnd(item);
                break;

            case 4:
                printf("Enter element: ");
                scanf("%d", &item);
                printf("Enter position (0 to %d): ", size);
                scanf("%d", &pos);
                insertAt(item, pos);
                break;

            case 5:
                deleteBeginning();
                break;

            case 6:
                deleteEnd();
                break;

            case 7:
                printf("Enter position (0 to %d): ", size - 1);
                scanf("%d", &pos);
                deleteAt(pos);
                break;

            case 8:
                traverse();
                break;

            case 9:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}

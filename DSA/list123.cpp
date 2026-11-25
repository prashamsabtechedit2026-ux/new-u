#include <stdio.h>
#define MAX 50

int list [MAX];
int size=0;
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

int main(){

insertEnd(10);
 insertEnd(20);
 insertEnd(30);
 traverse();
insertBeginning(5);
traverse();
insertAt(15, 2);
 traverse();
deleteEnd();
 traverse();
 deleteBeginning();
 traverse();
 deleteAt(1);
 traverse();
 return 0;
}


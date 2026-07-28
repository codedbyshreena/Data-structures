#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtFirst(int x) {
    struct node *newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = first;

    first = newNode;
}

void display() {
    struct node *save = first;

    if(save == NULL) {
        printf("The list is empty.");
    }

    while(save != NULL) {
        printf("%d -> ",save->info);
        save = save->link;
    }
}

void reverse() {
    struct node *prev = NULL;
    struct node *save = first;
    struct node *next = NULL;

    while(save != NULL) {
        next = save->link;
        save->link = prev;

        prev = save;
        save = next;
    }

    first = prev;
}

void main() {
    insertAtFirst(9);
    insertAtFirst(8);
    insertAtFirst(7);
    insertAtFirst(6);

    display();
    printf("Reversed List\n");
    
    reverse();

    display();
}
#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtFirst(int x) {
    struct node *newNode=(struct node*)malloc(sizeof(struct node*));

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

void delDuplicate() {
    
}
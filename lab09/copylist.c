#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *first1 = NULL;
struct node *first2 = NULL;

void insertAtFirst1(int x) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = first1;
    
    first1 = newNode;
}

void insertAtLast(int x) {
    struct node *save = first2;
    struct node *newNode = NULL;

    while(save->link != NULL) {
        save = save->link;
    }

    save->link = newNode;
    newNode->link = NULL;
}

void copyList() {
    struct node *save1 = first1;
    struct node *save2 = first2;

    while(save1 != NULL) {
        insertAtLast(save1->info);
        save1 = save1->link;
    }
}

void display(struct node *first) {
    struct node *save = first;

    if(save == NULL) {
        printf("The list is empty.");
        return;
    }

    while(save != NULL) {
        printf("%d -> ",save->info);
        save = save->link;
    }
    printf("NULL");
}

void main() {
    insertAtFirst1(1);
    insertAtFirst1(2);
    insertAtFirst1(3);
    
    display(first1);

    copyList();
}
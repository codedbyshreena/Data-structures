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
    if(first == NULL) {
        printf("List is Empty");
        return;
    }

    struct node *save = first;

    while(save != NULL && save->link != NULL) {
        
        if(save->info == save->link->info) {

            struct node *temp = save->link;
            save->link = save->link->link;
            free(temp);
        }
        else {
            save = save->link;
        }
    }
}

void main()
{
    insertAtFirst(9);
    insertAtFirst(8);
    insertAtFirst(8);
    insertAtFirst(8);
    insertAtFirst(8);
    insertAtFirst(7);
    insertAtFirst(6);
    insertAtFirst(6);

    delDuplicate();

    display();
}
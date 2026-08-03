#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node * F = NULL;
struct node * R = NULL;

// works like insert at last in a singly linked list
void ENQUEUE(int x) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    if(newNode == NULL){
        printf("Memory Allocation Failed!");
        return;
    }

    newNode->info = x;
    newNode->link = NULL;

    if(R == NULL){
        F = R = newNode;
    }
    else{
        R->link = newNode;
        R = newNode;
    }
}

// works like delete at first in a singly linked list
void DEQUEUE() {
    if(F == NULL){
        printf("Queue underflow");
        return;
    }

    struct node *temp = F;
    printf("%d\n",F);

    F = F->link;

    if(F == NULL){
        R == NULL;
    }
    free(temp);
}

void DISPLAY() {
    if(F == NULL){
        printf("Queue underflow");
        return;
    }

    struct node *save = F;

    while(save != NULL){
        printf("%d -> ",save->info);
        save = save->link;
    }
    printf("NULL\n");
}

void main() {
    int choice = 0, x, pos,i;

    while (1) {
        printf("Queue Operation Menu\n");
        printf("1-Enqueue an element.\n");
        printf("2-Dequeue an element.\n");
        printf("3-Display queue.\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value:");
                scanf("%d",&x);
                ENQUEUE(x);
                break;
            case 2:
                DEQUEUE();
                break;
            case 3:
                DISPLAY();
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
}
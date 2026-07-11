#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *FIRST1 = NULL;
struct node *FIRST2 = NULL;

void insertAtFirst1(int x) {
    struct node *newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = FIRST1;

    FIRST1 = newNode;
}

void insertAtFirst2(int x) {
    struct node *newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = FIRST2;

    FIRST2 = newNode;
}

void compare() {
    struct node *save1 = FIRST1;
    struct node *save2 = FIRST2;
    int issame = 0;

    while(save1 != NULL && save2 != NULL) {

        if(save1->info != save2->info) {
            issame = 1;
            break;
        }
        save1 = save1->link;
        save2 = save2->link;
    }

    if(save1 == NULL && save2 == NULL && issame == 0) {
        printf("The linked list is same.");
    }
    else {
        printf("The linked list is not same.");
    }

}

void display(struct node *first) {
    struct node * save = first;

    if(save == NULL) {
        printf("The list is empty.");
        return;
    }

    while(save != NULL){
        printf("%d -> ",save->info);
        save = save->link;
    }
}

void main() {
    insertAtFirst1(9);
    insertAtFirst1(8);
    insertAtFirst1(7);
    insertAtFirst1(6);
    
    insertAtFirst2(9);
    insertAtFirst2(8);
    insertAtFirst2(7);
    insertAtFirst2(6);

    display(FIRST1);
    display(FIRST2);

    compare();
}



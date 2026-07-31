#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int info;
    struct node *link;
};

struct node *FIRST = NULL;
struct node *LAST = NULL;

void insertAtFirst(int n)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = n;

    if (FIRST == NULL)
    {
        FIRST = LAST = newNode;
        LAST->link = FIRST;
    }

    else
    {
        newNode->link = FIRST;
        FIRST = newNode;
        LAST->link = FIRST;
    }
}

void display()
{

    struct node *save = FIRST;

    if (save == NULL)
    {
        printf("List Is Empty\n");
        return;
    }

    while(save->link != FIRST){
        printf("%d -> " , save->info);
        save = save->link;
    }

    printf("%d\n" , save->info);

    
}

struct node* split() {

    if (FIRST == NULL || FIRST->link == FIRST) {
        printf("Not enough elements to split.\n");
        return NULL;
    }

    struct node* slow = FIRST;
    struct node* fast = FIRST;

    while (fast->link != FIRST && fast->link->link != FIRST) {
        slow = slow->link;
        fast = fast->link->link;
    }

    struct node* FIRST2 = slow->link; 

    slow->link = FIRST;
    LAST->link = FIRST2;

    display(FIRST);
}

void main()
{

    insertAtFirst(12);
    insertAtFirst(6);
    insertAtFirst(9);
    insertAtFirst(18);
    display();
    split();
}
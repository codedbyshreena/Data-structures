#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *FIRST = NULL;

void insertAtFirst(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->info = x;
    newNode->link = FIRST;

    FIRST = newNode;
}

void insertAtLast(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->info = x;
    newNode->link = NULL;

    if (FIRST == NULL)
    {
        FIRST = newNode;
        return;
    }

    struct Node *save = FIRST;

    while (save->link != NULL)
    {
        save = save->link;
    }

    save->link = newNode;
}

void display()
{
    struct Node *save = FIRST;

    if (save == NULL)
    {
        printf("List Is Empty\n");
        return;
    }

    while (save != NULL)
    {
        printf("%d -> ", save->info);
        save = save->link;
    }

    printf("NULL\n");
}

void swapPairs(){
    
    if (FIRST == NULL || FIRST->link == NULL)
        return;

    struct Node *prev = NULL;
    struct Node *pelo = FIRST;  // save

    FIRST = FIRST->link;

    while (pelo != NULL && pelo->link != NULL)
    {
        struct Node *bijo = pelo->link;
        struct Node *trijo = bijo->link;

        pelo->link = trijo;
        bijo->link = pelo;

        if (prev != NULL)
            prev->link = bijo;

        prev = pelo;
        pelo = trijo;
    }
}

void main()
{
    insertAtFirst(6);
    insertAtFirst(5);
    insertAtFirst(4);
    insertAtFirst(3);
    insertAtFirst(2);
    insertAtFirst(1);

    display();

    swapPairs();

    display();

}
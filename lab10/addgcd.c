#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtFirst(int x)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = first;

    first = newNode;
}

void display()
{
    struct node *save = first;

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

int min(int a, int b)
{
    if (a < b)
        return a;

    return b;
}

int find_gcd(int a, int b)
{
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }

    return 1;
}

void gcd()
{
    if (first == NULL || first->link == NULL)
    {
        return;
    }

    struct node *save = first;

    while (save->link != NULL)
    {
        int g = find_gcd(save->info, save->link->info);

        struct node *newNode = (struct node *)malloc(sizeof(struct node));

        newNode->info = g;
        newNode->link = save->link;
        save->link = newNode;
        save = save->link->link;
    }
}

void main()
{
    insertAtFirst(18);
    insertAtFirst(6);
    insertAtFirst(10);
    insertAtFirst(3);

    display();

    gcd();

    display();
}
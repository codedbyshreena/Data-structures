#include <stdio.h>
#include <stdlib.h>

struct node
{
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

void display()
{
    struct node *save = first;

    while (save != NULL)
    {
        printf("%d -> ", save->info);
        save = save->link;
    }

    printf("NULL\n");
}

int count()
{
    int cnt = 0;

    struct node *save = first;

    while (save != NULL)
    {
        cnt++;
        save = save->link;
    }

    return cnt;
}

void kthSwap(int k)
{
    int n = count();

    if (k <= 0 || k > n)
    {
        printf("Invalid k\n");
        return;
    }

    if (2 * k - 1 == n)
    {
        printf("No Need To Swap\n");
        return;
    }

    struct node *save1 = first;
    for (int i = 1; i < k; i++)
    {
        save1 = save1->link;
    }

    struct node *save2 = first;
    for (int i = 1; i < n - k + 1; i++)
    {
        save2 = save2->link;
    }

    int temp = save1->info;
    save1->info = save2->info;
    save2->info = temp;   

}

void main()
{
    insertAtFirst(11);
    insertAtFirst(9);
    insertAtFirst(7);
    insertAtFirst(5);
    insertAtFirst(3);
    insertAtFirst(1);

    display();

    kthSwap(1);

    display();

}
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

void sort()
{
    struct node *save = first;
    struct node *save2;

    for (save = first; save->link != NULL; save = save->link)
    {
        for (save2 = save->link; save2 != NULL; save2 = save2->link)
        {
            if (save->info > save2->info)
            {
                int temp = save->info;
                save->info = save2->info;
                save2->info = temp;
            }
        }
    }
}

void main()
{
    insertAtFirst(4);
    insertAtFirst(2);
    insertAtFirst(3);
    insertAtFirst(2);
    insertAtFirst(5);
    insertAtFirst(3);
    insertAtFirst(1);
    insertAtFirst(4);

    display();

    sort();

    printf("Sorted List:\n");
    display();

}
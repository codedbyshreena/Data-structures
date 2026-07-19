#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int info;
    struct Node *link;
};
void main()
{
    struct Node *first;

    first = (struct Node *) malloc(sizeof(struct Node));

    printf("Enter Data : ");
    scanf("%d", &first->info);

    first->link = NULL;

    printf("Node Data : %d\n", first->info);

    free(first);

}
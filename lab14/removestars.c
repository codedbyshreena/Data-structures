#include <stdio.h>
#include <string.h>

char stack[100];
int size = 100;
int top = -1;

void push(char ch)
{
    if (top >= size - 1)
    {
        printf("Stack Overflow.\n");
        return;
    }
    stack[++top] = ch;
    // printf("Pushed %c\n", ch);
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow.\n");
        return 0;
    }

    return stack[top--];
    // printf("Popped element is: %c\n", stack[top--]);
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Ans :\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%c", stack[i]);
    }
}

void removeStars(char str[]){

    int count = 0;

    for(int i=0 ; str[i] != '\0' ; i++){

        if(str[i] == '*'){

            pop();            

        }
        else{

            push(str[i]);

        }
    }
    display();
}

void main(){

    char str[100];

    printf("Enter String.\n");
    scanf("%s", str);

    removeStars(str);
}
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

char peep(int idx)
{
    if (idx <= 0 || idx > top + 1)
    {
        printf("Invalid index. Stack Underflow.\n");
        return -1;
    }

    // printf("Peep %dth Element from Top is: %d\n", stack[top - idx + 1]);

    return stack[top - idx + 1];
}

void reverse(){

    for(int i=0 ; i<=top/2 ; i++){
        char temp = stack[i];
        stack[i] = stack[top-i]; 
        stack[top-i] = temp;
    }

}

void VowelAnxiety(char str[]){   

    int i=0;

    push(str[i++]);   // for 0th index

        while(str[i] != '\0'){            

            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
            || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
             
                // Vowel Aave Tyare Reverse 
                
                reverse();                         
            }
            
            push(str[i]);
            
            i++;
        }

    display();
}

void main(){

    char str[100];

    printf("Enter String.\n");
    scanf("%s", str);

    VowelAnxiety(str);
}
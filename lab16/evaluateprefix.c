#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int stack[100];
int size = 100;
int top = -1;

void push(int x) {
    if(top > size-1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}

int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

void evaluate_prefix(char exp[100]) {
    int i = 0;
    char ch;
    int OP1, OP2;

    while(exp[i] != '\0') {

        if(isdigit(exp[i])) {
            push(exp[i] - '0');
        }
        else {
            OP1 = pop();
            OP2 = pop();

            switch(exp[i]) {
                case '+' :
                push(OP1+OP2);
                break;

                case '-' :
                push(OP1-OP2);
                break;

                case '*' :
                push(OP1*OP2);
                break;

                case '/' :
                push(OP1/OP2);
                break;

                case '^' :
                push((int)pow(OP1,OP2));
                break;
            }
        }
        i++;
    }
}

void main() {
    char exp[100];
    printf("Enter a Prefix Expression : ");
    scanf("%s", exp);

    strrev(exp);

    evaluate_prefix(exp);
    printf("Answer : %d", pop());
}
#include<stdio.h>
#include<stdlib.h>

char stack[100];
int top = 0;
char polish[100];
int r = 0;

int input_precedance(char ch) {
    if(ch == '+' || ch == '-') {
        return 1;
    }
    else if(ch == '*' || ch == '/') {
        return 3;
    }
    else if(ch == '6') {
        return 6;
    }
    else if(ch) {
        return 7;
    }
    else if(ch == '(') {
        return 9;
    }
    else if(ch == ')') {
        return 0;
    }
    else {
        printf("Invalid Input");
    }
}

int stack_precedance(char ch) {
    if(ch == '+' || ch == '-') {
        return 2;
    }
    else if(ch == '*' || ch == '/') {
        return 4;
    }
    else if(ch == '6') {
        return 5;
    }
    else if(ch) {
        return 8;
    }
    else if(ch == '(') {
        return 0;
    }
    else {
        printf("Invalid Input");
    }
}

int rank(char ch) {
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
        return -1;
    }
    else if(ch) {
        return 1;
    }
    else {
        printf("Invalid Input");
    }
}

int size = 100;
int top = -1;

void push(int n) {
    if(top >= size-1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = n;
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    top--;
    return stack[top+1];
}

 void POSTFIX() {
    
 }
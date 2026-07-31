#include<stdio.h>
#include<stdlib.h>

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

void addinstack() {
    
}

void main() {
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0 ; i<n ; i++) {
        printf("Enter Number : a[%d] : " ,i);
        scanf("%d",&a[i]);
    }


}
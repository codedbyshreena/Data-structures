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

int peek() {
    return stack[top];
}

int isSorted(int b[], int n) {
    for (int i = 1; i < n; i++) {
        if (b[i - 1] > b[i]) {
            return 0;
        }
    }   
    return 1;
}

int solve(int arr[], int n) {
    int b[n];
    int k = 0;
    push(arr[0]);
    for(int i = 1; i < n; i++) {
        while(top != -1 && arr[i] > stack[top]){
            b[k++] = pop();
        }
        push(arr[i]);
    }
    while(top != -1) {
        b[k++] = pop();
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d " , b[i]);
    }
    return isSorted(b, n);
}

void main() {
    int n, t;
    printf("Enter Number Of tescase : ");
    scanf("%d", &t);
    while (t != 0) {
        printf("Enter size n : ");
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            printf("Enter Elemet %d :", (i + 1));
            scanf("%d", &a[i]);
        }
        if (solve(a, n)) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
        t--;
    }
}
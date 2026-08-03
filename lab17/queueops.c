#include<stdio.h>
#include<stdlib.h>

int queue[10];
int size = 10;
int F = -1, R = -1;

void ENQUEUE(int x) {
    if(R >= size-1) {
        printf("Queue Overflow");
        return;
    }
    else {
        queue[++R] = x;
        if(F == -1) {
            F = 0;
        }
    }
    printf("%d is enqueued\n", x);
}

void DEQUEUE() {
    if(F == -1) {
        printf("Queue Underflow");
        return;
    }
    int y = queue[F];
    if(F == R) {
        F = R = -1;
    }
    else {
        F++;
    }
    printf("%d is dequeued\n",y);
}

void display() {
    if(F == -1) {
        printf("Queue Underflow");
        return;
    }
    for(int i = F ; i <= R ; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void main() {
    ENQUEUE(1);
    ENQUEUE(2);
    ENQUEUE(3);
    ENQUEUE(4);
    ENQUEUE(5);

    display();
}
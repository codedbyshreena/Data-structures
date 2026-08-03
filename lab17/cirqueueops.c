#include<stdio.h>
#include<stdlib.h>

int cqueue[10];
int N = 10;
int F = -1, R = -1;

void CQINSERT(int x) {
    if(((R+1)%N) == F) {
        printf("Queue Overflow");
        return;
    }
    if(F == -1) {
        F = R = 0;
    }
    else {
        R = (R+1) % N;
    }
    cqueue[R] = x;
    printf("%d is enqueued in cqueue\n", x);
}

void CQDELETE() {
    if(F == -1) {
        printf("Queue Underflow");
        return;
    }
    int y = cqueue[F];
    if(F == R) {
        F = R = -1;
    }
    else {
        F = (F+1) % N;
    }
    cqueue[F] = y;
    printf("%d is dequeued in cqueue\n", y);
}

void display() {
    if(F == -1) {
        printf("Queue Overflowed");
    }
    int i = F;
    while(i != R) {
        printf("%d ",cqueue[i]);
        if(i == R){
            break;
        }
        i = (i+1) % N;
    }
    printf("\n");
}

void main() {
    CQINSERT(1);
    CQINSERT(2);
    CQINSERT(3);
    CQINSERT(4);
    CQINSERT(5);

    display();
}
#include<stdio.h>
#include<stdlib.h>

int queue[10];
int N = 10;
int F = -1, R = -1;

void DQINSERT_FRONT(int x) {
    if(F == 0) {
        printf("Deque is full at front\n");
        return;
    }
    if(F == -1) {
        F = R = 0;
    }
    else {
        F--;
    }
    queue[F] = x;
    printf("%d is enqueued\n", x);
}

void DQINSERT_REAR(int x) {
    if(R == N - 1) {
        printf("Deque Overflow");
        return;
    }
    if(F == -1) {
        F = R = 0;
    }
    else {
        R++;
    }
    queue[R] = x;
    printf("%d is enqueued\n", x);
}

void DQDELETE_FRONT() {
    if(F == -1) {
        printf("Deque Overflow");
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

void DQDELETE_REAR() {
    if(R == -1) {
        printf("Deque Underflow");
        return;
    }
    int y = queue[R];
    if(F == R) {
        F = R = -1;
    }
    else {
        R--;
    }
    printf("%d is dequeued\n",y);
}

void display() {
    if(F == -1) {
        printf("Dequq Underflow");
        return;
    }
    for(int i = F ; i <= R ; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void main() {
    DQINSERT_FRONT(1);
    DQINSERT_FRONT(2);
    DQINSERT_FRONT(3);

    DQINSERT_REAR(4);
    DQINSERT_REAR(5);
    DQINSERT_REAR(6);

    display();
}

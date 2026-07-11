#include<stdio.h>
void main(){
    int n,sum;
    printf("Enter a Number : ");
    scanf("%d",&n);
    sum=((n+2)*(n+1)*n)/6;
    printf("Answer : %d",sum);
}
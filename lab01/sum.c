#include<stdio.h>
void main(){
    int n, i, sum;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=n%10;
        sum++;
    }
    printf("Sum of Digits : %d",sum);
}
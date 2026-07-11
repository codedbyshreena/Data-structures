#include<stdio.h>
void main(){
    int n,rem,ans,rev=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    printf("Reverse : %d",rev);
}
#include<stdio.h>
void main(){
    int n;
    printf("Enter a Year : ");
    scanf("%d",&n);
    if(n%400==0 || (n%4==0 && n%100 !=0)){
        printf("%d is a Leap Year",n);
    }
    else{
        printf("%d is NOT a Leap Year",n);
    }
}
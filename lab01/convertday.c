#include<stdio.h>
void main(){
    int n;
    printf("Enter Days : ");
    scanf("%d",&n);
    int year=n/365;
    int weeks=(n%365)/7;        
    int days=n%7;
    printf("%d year, %d weeks, %d days",year,weeks,days);
}
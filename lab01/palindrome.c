#include<stdio.h>
void main(){
    int n,temp,rev=0,a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    temp=a;
    while(a!=0){
        n=a%10;
        rev=rev*10+n;
        a=a/10; 
    }
    a=temp;
    if(rev==a){
        printf("Given no is palindrome");
    }
    else{
        printf("Given no is not palindrome");
    }
}
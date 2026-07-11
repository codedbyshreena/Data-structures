#include<stdio.h>
void main(){
    int n,flag=0,i;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n<=1){
        printf("Number is Not Prime");
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d is a Prime Number",n);
    }
    else{
        printf("%d is Not a Prime Number",n);
    }
}
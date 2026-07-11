#include<stdio.h>
void main(){
    int n,i,fact;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("Factor : %d\n",i);
        }
    }
}
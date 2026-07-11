#include<stdio.h>
void main(){
    int base,pow,i,ans=1;
    printf("Enter Base and Power : ");
    scanf("%d %d",&base,&pow);
    for(i=1;i<=pow;i++){
        ans*=base;
    }
    printf("Answer : %d",ans);
}
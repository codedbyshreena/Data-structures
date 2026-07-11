#include<stdio.h>
void main(){
    int s,e,i,n,flag=0;
    printf("Enter 2 Numbers (Start & End) : ");
    scanf("%d %d",&s,&e);
    for(n=s;n<=e;n++){
        if(n<2){
            continue;
        }
        flag=0;
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Prime Number : %d\n",n);
        }
    }
}
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a 3 Numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if(b<c){
            printf("%d is the Largest",c);
        }
        else{
            printf("%d is the Largest",b);
        }
    }
    else{
        if(a<c){
            printf("%d is the Largest",a);
        }
        else{
            printf("%d is Largest",c);
        }
    }
}
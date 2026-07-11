#include<stdio.h>
void main(){
    int m,n,i,sum=0;
    printf("Enter m & n : ");
    scanf("%d %d",&m,&n);
    int size=n-m+1;
    int arr[size];
    for(i=0;i<size;i++){
        arr[i]=m+i;
        sum+=arr[i];
    }
    printf("Answer : %d ",sum);
}
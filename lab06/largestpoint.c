#include<stdio.h>
#include<stdlib.h>

void main(){
    int n,i,max;
    printf("Enter n : ");
    scanf("%d",&n);
    int *ptr=(int *)malloc(sizeof(int)*n);
    if(ptr==NULL){
        printf("Malloc failed!");
    }
    printf("Enter Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    max=*ptr;
    for(i=0;i<n;i++){
        if((*(ptr+i)>max)){
            max=*(ptr+i);
        }
    }
    printf("Largest Element : %d",max);
}
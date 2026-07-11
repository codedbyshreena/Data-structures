#include<stdio.h>
#include<stdlib.h>
void  main(){
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    int *ptr=(int *)malloc(sizeof(int)*n);
    if(ptr==NULL){
        printf("Malloc failed!");
    }
    printf("Enter elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("Print elements : ");
    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
}
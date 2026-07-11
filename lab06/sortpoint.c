#include<stdio.h>
#include<stdlib.h>
void main(){
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
    int j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(*(ptr+j) > *(ptr+j+1)){
                temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }
    printf("Sorted array : ");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}
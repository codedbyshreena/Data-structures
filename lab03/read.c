#include<stdio.h>
void main(){
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Element : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered Elements are : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
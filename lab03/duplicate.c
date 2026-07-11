#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Element : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n+1;j++){
            if(arr[i]==arr[j]){
                printf("There is Duplicate Element");
            }
        }
    }
}
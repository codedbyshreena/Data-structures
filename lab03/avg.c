#include<stdio.h>
void main(){
    int n,i;
    float avg;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    printf("Answer : %.2f",avg);
}
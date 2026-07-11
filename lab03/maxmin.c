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
    int max=arr[0],inmax=0,min=arr[0],inmin=0;
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            inmax=i;
        }
    }
    printf("Maximum number's Index : %d\n",inmax);
    for(i=0;i<n;i++){
        if(min<arr[i]){
            min=arr[i];
            inmin=i;
        }
    }
    printf("Minimum number's Index : %d",inmin);
}
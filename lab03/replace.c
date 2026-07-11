#include<stdio.h>
void main(){
    int n,i,a,b,index;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Element : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a number which is already in the array and the number which you want to replace it : ");
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++){
        if(a==arr[i]){
            arr[i]=b;
            index=i;
        }
    }
    printf("The index at which element is replaced is : %d\n",index);
    printf("The new array : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
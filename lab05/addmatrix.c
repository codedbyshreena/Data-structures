#include<stdio.h>
void main(){
    int a[10][10],b[10][10],c[10][10];
    int n,i,j;
    printf("Enter size of Matrix : ");
    scanf("%d",&n);
    printf("Enter Elements for Matrix A : ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Elements for Matrix B : ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of Matrix A & B : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
}
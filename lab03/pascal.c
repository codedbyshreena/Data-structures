#include<stdio.h>
void main() {
    int n ;
    printf("Enter Rows : ");
    scanf("%d" ,&n);
    int a[n][n];
     for(int i=0 ; i<n ; i++){
        for(int k = n - i ; k > 0 ; k--){
            printf(" ");
        }
        for(int j=0 ; j<=i ;j++){
            if(j==0 || j==i){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
}
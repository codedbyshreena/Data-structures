#include<stdio.h>
#include<stdlib.h>
void main(){
    int *n=(int*)malloc(sizeof(int));
    char *c=(char*)malloc(sizeof(char));
    float *f=(float*)malloc(sizeof(float));

    if(n==NULL || c==NULL || f==NULL){
        printf("Malloc failed!");
    }

    *n=20;
    *c='s';
    *f=3.14;
    
    printf("Integer : %d\n",*n);
    printf("Character : %c\n",*c);
    printf("Float : %.2f\n",*f);

    free(n);
    free(c);
    free(f);
}
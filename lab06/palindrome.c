#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char *str=(char*)malloc(sizeof(char)*100);
    char *revstr=(char*)malloc(sizeof(char)*100);
    printf("Enter a word : ");
    scanf("%s",str);
    if(str==NULL || revstr==NULL){
        printf("Not palindrome!");
    }
    else{
        strcpy(revstr,str);
        strrev(revstr);
        if(strcmp(revstr,str)==0){
            printf("Palindrome");
        }
        else{
            printf("Not palindrome");
        }
    }
}
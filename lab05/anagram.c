#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main(){
    int n,i,j;

    printf("Enter no. of words : ");
    scanf("%d",&n);

    char words[n][50];
    printf("Enter different words : ");
    for(i=0;i<n;i++){
        scanf("%s",words[i]);
    }

    printf("The random word generated : ");
    srand(time(NULL));
    int random=rand()%n;
    printf("%s",words[random]);
    printf("\n");

    char user[50];
    printf("\nEnter anagram : ");
    scanf("%s",user);

    if(strlen(user)!=strlen(words[random])){
        printf("The entered word is NOT an anagram!");
    }
    
    int freq1[26]={0};
    int freq2[26]={0};

    for(j=0;j<strlen(words[random]);j++){
        char temp=words[random][j];
        int index=temp-'a';
        freq1[index]++;
    }

    for(j=0;j<strlen(user);j++){
        char temp=user[j];
        int index=temp-'a';
        freq2[index]++;
    }

    int isAnagram=1;
    for(j=0;j<26;j++){
        if(freq1[j]!=freq2[j]){
            isAnagram=0;
            break;
        }
    }

    if(isAnagram){
        printf("The entered word is an anagram!\n");
    } 
    else{
        printf("The entered word is NOT an anagram!\n");
    }
}
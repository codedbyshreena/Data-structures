#include<stdio.h>
void main(){
    char a;
    printf("Enter a Alphabet : ");
    scanf("%c",&a);
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("Alphabet is an Vowel");
    }
    else{
        printf("Alphabet is a Consonant");
    }
}
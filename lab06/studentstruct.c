#include<stdio.h>
struct Student{
    int roll_no;
    char name[50];
    char branch[50];
    int batch_no;
};
void main(){
    struct Student *stud1, s1;
    stud1=&s1;

    printf("Enter name : ");
    scanf("%s",stud1->name);
    printf("Enter roll no. : ");
    scanf("%d",&stud1->roll_no);
    printf("Enter branch : ");
    scanf("%s",stud1->branch);
    printf("Enter batch no. : ");
    scanf("%d",stud1->batch_no);
    
    printf("DETAILS :- \n");
    printf("Name : %s\n",stud1->name);
    printf("Roll no. : %d\n",stud1->roll_no);
    printf("Branch : %s\n",stud1->branch);
    printf("Batch no. : %d\n",stud1->batch_no);
}
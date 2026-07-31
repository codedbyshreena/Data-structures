#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* link;
};

struct node* FIRST = NULL;
struct node* LAST = NULL;

void insertAtFirst(int x){

    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->info = x;

    if(FIRST == NULL){ 

        FIRST = LAST = newNode;
        LAST->link = FIRST;
        
    }
    else{

        newNode->link = FIRST;
        FIRST = newNode;
        LAST->link = FIRST;

    }
}

void insertAtLast(int x) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->info = x;

    if(FIRST == NULL){ 

        FIRST = LAST = newNode;
        LAST->link = FIRST;
        
    }
    else{

        LAST->link = newNode;
        LAST = newNode;
        LAST->link = FIRST;

    }
}

void deleteAtFirst(){

    if(FIRST == NULL){
        printf("List Is Empty");
        return;
    }
    else if(FIRST == LAST){  
        struct node* temp = FIRST;
        FIRST = LAST = NULL;
        free(temp);
        return;
    }
    else{   
        struct node* temp = FIRST;
        FIRST = FIRST->link;
        LAST->link = FIRST;
        free(temp);
        return;

    }
}

void display(){

    if(FIRST == NULL){
        printf("Empty");
        return;
    }

    struct node* save = FIRST->link;
    printf("%d -> ",FIRST->info);

    while(save != FIRST){
        printf("%d -> " , save->info);
        save = save->link;
    }

    printf("%d\n" , save->info);
}

int count(){
    if(FIRST == NULL)
        return 0;

    struct node* save = FIRST->link;
    int count = 1;

    while(save != FIRST){
        save = save->link;
        count++;
    }

    return count;
}

void deleteAtKthPosition(int k){
    int n = count();

    if(FIRST == NULL){
        return;
    }
    else if(k == 0){
        deleteAtFirst();
        return;
    }
    else if(k == n-1){
        return;
    }
    else if(k < 0 || k >= n){
        printf("Invalid Index\n");
        return;
    }
    else{
        struct node* save = FIRST;   

        for(int i = 1 ; i < k ; i++){
            save = save->link;
        }

        struct node* temp = save->link;
        save->link =  save->link->link;
        
        free(temp);
    }
}

void main(){

    // insertAtFirst(4);
    // insertAtFirst(3);
    // insertAtFirst(2);
    // insertAtFirst(1);

    insertAtLast(1);
    insertAtLast(2);
    insertAtLast(3);
    insertAtLast(4);

    display();

    deleteAtKthPosition(3);

    display();
}

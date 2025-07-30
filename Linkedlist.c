#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};



int main(){ 

struct node* head=NULL, *newnode= NULL, *temp=NULL;
int choice;
while(1){
newnode=(struct node*)malloc(sizeof(struct node));

printf("Enter data for the node : ");
scanf("%d",&newnode->data);
newnode->next=0;

if (head==0){
    head=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;

}
printf("Do you want to continue? if yes press 1 and 0 for no: ");
scanf("%d",&choice);
if (choice==0){
   break;
}

}
 
temp=head;
while(temp!=0){
    printf("%d",temp->data );
    if(temp->next != NULL){
        printf(" -> ");
    }
    temp=temp->next;
}


    return 0;
}
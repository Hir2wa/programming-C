#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*link;
}node;

struct node* add_beg(struct node*head, int data){
    struct node*new_node=(node*)malloc(sizeof(struct node));
    new_node->data;
    new_node->head;
    return new_node;
}

int main(){
    struct node*head=(node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *ptr=(node*)malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;

    int data=3;
    head = add_beg(head,data);
    ptr=head;
    while(ptr !=NULL){
      printf("%d",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}
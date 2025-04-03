// a way of reprenting data 
//each  node stores the data 
# include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*link;
}node;

int main(){
    node * head = NULL;
    head= (node*)malloc(sizeof(node));
    head->data=45;
    head->link=NULL;
    printf("%d",head->data);
    return 0;

}
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*link;
}node;
int main(){
    node*head=NULL;
    head=(node*)malloc(sizeof(node));
    head->data=100;
    head->link=NULL;

    node*current= (node*)malloc(sizeof(node));
    current->data=10;
    current->link=NULL;
    head->link=current;

    node*current2=(node*)malloc(sizeof(node));
    current2->data=20;
    current2->link=NULL;
    current->link=current2;

    node*current2=(node*)malloc(sizeof(node));
    current3->data=30;
    current3->link=NULL;
    current->link=current3;

    node*current2=(node*)malloc(sizeof(node));
    current4->data=40;
    current4->link=NULL;
    current->link=current4;


    printf("%d %d %d %d", head ->data, current->data, current2->data, current3->data, current4->data );
    return 0;



}
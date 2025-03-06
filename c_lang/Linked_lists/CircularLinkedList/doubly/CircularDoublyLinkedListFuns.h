#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* prev ;
    int data;
    struct node* next;
} Node;

node* circularDoubly(int data){
    node *temp = (node*)malloc(sizeof(node));
    temp->prev = temp;
    temp->data = data;
    temp->next = temp;
    return temp;
}


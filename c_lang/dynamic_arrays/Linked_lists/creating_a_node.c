#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
} node;

int main(){
    node *head = (node*)malloc(sizeof(node));
    head->data = 45;
    head->link = NULL;
    printf("%d\n",head->data);
    
    node *current = (node*) malloc(sizeof(node));
    current->data = 98;
    current->link = NULL;
    head-> link = current;

    current = (node*) malloc(sizeof(node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;
    return 0;
}

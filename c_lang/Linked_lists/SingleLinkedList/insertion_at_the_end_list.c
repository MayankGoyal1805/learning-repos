#include<stdio.h>

typedef struct node
{
    int data;
    struct node *link;
} node;

node* append(node *ptr,int data);

int main(){
    node *head = (node*)malloc(sizeof(node));
    head->link = 54;
    node *ptr = head;
    ptr = append(ptr,45);
    ptr = append(ptr,67);
    
}

node* append(node *ptr,int data) {
    node *temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
}

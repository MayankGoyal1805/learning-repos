#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} node;

void BegAdd(node **head_a,int data){
    node *ptr = (node*)malloc(sizeof(node));
    ptr->data = data;
    ptr->link = *head_a;
    *head_a = ptr;
}

node* append(node *ptr,int data) {
    node *temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
}

void printList(node *head){
    if(head == NULL) printf("Linked list is empty\n");
    node *ptr = head;
    while(ptr != NULL) {
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
}

int nodeCount(node *head) {
    if(head==NULL) printf("Linked list is empty");
    int count = 0;
    node *ptr = head;
    while(ptr!=NULL){
        count++;
        ptr = ptr->link;
    }
    return count;
}

void addPos(node **head_a, int pos, int data)
{
    node *ptr = *head_a;
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    if (pos == 1)
    {
        temp->link = *head_a;
        *head_a = temp;
        return;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        if (ptr == NULL)
        {
            printf("Position out of bound\n");
            return;
        }
        ptr = ptr->link;
    }
    temp->link = ptr->link;
    ptr->link = temp;
}

void delFirstNode(node** head_a) {
    if ( *head_a == NULL){
        printf("Link list is already empty");
        return;
    }
    node *temp = *head_a;
    *head_a = (*head_a)->link;
    free(temp);
    temp = NULL;
}

void delLastNode(node *head){
    if(head == NULL){
        printf("Linked list is already empty");
        return;
    }
    if(head->link == NULL){
        free(head);
        head->link == NULL;
        return;
    }
    node *ptr = head;
    while(ptr->link->link != NULL){
        ptr = ptr->link;
    }
    free(ptr->link);
    ptr->link = NULL;
}    

void delPos(node **head_a,int pos){
    if(pos == 1){
        node *temp1 = *head_a;
        *head_a = (*head_a)->link;
        return;
    }
    node *ptr = *head_a;
    for(int i=0;i<pos-2;i++){
        ptr = ptr->link;
    }
    node *temp = ptr->link;
    ptr->link = ptr->link->link;
    free(temp);
}

void appendT(node **head_a, int data){
    if( *head_a == NULL){
        node *temp = (node*)malloc(sizeof(node));
        temp->data = data;
        temp->link = NULL;
        *head_a = temp;
    }
    node *ptr = *head_a;
    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    node *temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
}

void revListD(node **head_a){
    node *ptr1 = *head_a;
    node *ptr2 = (*head_a)->link;
    ptr1->link = NULL;
    node *temp;
    while(ptr2->link != NULL){
        temp = ptr2->link;
        ptr2->link = ptr1;
        ptr1 = ptr2;
        ptr2 = temp;
    }
    ptr2->link = ptr1;
    (*head_a) = ptr2;
}

node* revList(node* head){
    node *ptr = head;
    node *temp1 = NULL ;

    while(ptr->link != NULL){
        node *temp2 = (node*)malloc(sizeof(node));
        temp2->data = ptr->data;
        temp2->link = temp1;
        temp1 = temp2;
        ptr = ptr->link;
    }
    node *new = (node*)malloc(sizeof(node));
    new->data = ptr->data;
    new->link = temp1;
    return new;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
} node;


node* circularSingly(int data){
    node *temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->link = temp;
    return temp;
}

void begAdd(node **tail,int data){
    if(*tail == NULL){
        *tail = circularSingly(data);
        return;
    }
    node *newNode = circularSingly(data);
    newNode->link = (*tail)->link;
    (*tail)->link - newNode;
}

void append(node **tail,int data){
    if(*tail==NULL){
        *tail = circularSingly(data);
        return;
    }
    node *newNode = circularSingly(data);
    newNode->link = (*tail)->link;
    (*tail)->link = newNode;
}

void addPos(node **tail,int data,int pos){
    if(pos==1){
        if(*tail==NULL){
            *tail = circularSingly(data);
            return;
        }
        node *newNode = circularSingly(data);
        newNode->link = (*tail)->link;
        (*tail)->link = newNode;
        return;
    }
    if(*tail==NULL) {
        printf("Linked list is empty");
        return;
    }
    node *ptr = (*tail)->link;
    for(int i=1;i<pos-1;i++){
        if(ptr!=NULL && ptr->link!=NULL){
            ptr = ptr->link;
        }
    }
    if(ptr==*tail){
        node *newNode = circularSingly(data);
        newNode->link = (*tail)->link;
        (*tail)->link = newNode;
    }
    else{
        node *newNode = circularSingly(data);
        newNode->link = ptr->link;
        ptr->link = newNode;
    }
}

void delBeg(node **tail){
    if (*tail==NULL) {
        printf("Linked list is empty");
        return;
    }
     
}









































































// void createList(node **head){
//     int n,data;
//     printf("Enter the number of nodes: ");
//     scanf("%d",&n);
//     if(n==0) return;
//     printf("Enter the element for the node 1: ");
//     scanf("%d",&data);
//     *head = createNode(data);
//     node *ptr = *head;
//     if(n==1) return;
//     for(int i=2;i<=n;i++){
//         printf("Enter the element for the node %d: ",i);
//         scanf("%d",&data);
//         node *temp = createNode(data);
//         ptr->link = temp;
//         ptr = ptr->link;
//     }
//     ptr->link = *head;
// }

// void printList(node *head){
//     node *ptr = head;
//     while(1){
//         printf("%d\n",ptr->data);
//         ptr = ptr->link;
//         if(ptr == head) break;
//     }
// }

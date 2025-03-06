#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    struct node *prev;
    int data;
    struct node *next;
} node;

node* init(int data){
    node *temp = (node*)malloc(sizeof(node));
    temp->prev = NULL;
    temp->next = NULL;
    temp->data = data;
    return temp;
}

void begAdd(node **head_a, int data){
    node *temp = init(data);
    temp->next = *head_a;
    (*head_a)->prev = temp;
    *head_a = temp;
}

void appendT(node **head_a, int data){
    if(*head_a == NULL) {
        node*head_a = init(data);
    }
    node *temp = init(data);
    node *ptr = *head_a;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
}

node* append(node *ptr, int data){
    node *temp = init(data);
    while(ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    return ptr->next;
}

void printList(node *head){
    if (head == NULL) printf("Linked list is empty");
    while(head != NULL){
        printf("%d\n",head->data);
        head = head->next;
    }
}

void addPos(node **head_a,int data, int pos){
    if (pos == 1) {
    node *temp = init(data);
    temp->next = *head_a;
    *head_a = temp;
    return;
    }
    if (*head_a == NULL) {printf("Linked list is empty"); return;}
    node *ptr = *head_a;
    for(int i=1; i<pos-1;i++){
        if(!ptr) {
            printf("Position out of range");
            return;
        }
        ptr = ptr->next;
    }
    node *temp = init(data);
    temp->next = ptr->next;
    ptr->next->prev = temp;
    ptr->next = temp;
    temp->prev = ptr;
}

void delFirstNode(node **head_a){
    node *temp = *head_a;
    *head_a = (*head_a)->next;
    (*head_a)->prev = NULL;
    free(temp);
    temp = NULL;
}

void delLastNode(node **head_a){
    if (*head_a == NULL) {printf("Linked list is empty"); return;}   
    if ((*head_a)->next == NULL){
        free(*head_a);
        *head_a = NULL;
        return;
    }
    node *ptr = *head_a;
    while(ptr->next->next!=NULL){
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}

void delPos(node **head_a,int pos){
    if (*head_a == NULL) {printf("Linked list is empty"); return;}   
    if (pos==1){
        node *temp = *head_a;
        *head_a = (*head_a)->next;
        free(temp);
        return;
    }
    node *ptr = *head_a;
    for(int i=1;i<pos-1;i++){
        if(!ptr || !ptr->next){
            printf("Position out of bounds");
            return;
        }
        ptr = ptr->next;
    }
    node *temp = ptr->next;
    ptr->next = ptr->next->next;
    ptr->next->prev = ptr;
    free(temp);
    temp = NULL;
}

void delList(node **head_a){
    node *ptr = *head_a;
    node *temp = NULL;
    while(!ptr){
        temp = ptr->next;
        free(ptr);
        ptr =temp;
    }
    *head_a = NULL;
}

void revListD(node **head_a){
    if(*head_a == NULL){
        printf("Linked list is empty");
        return;
    }
    if((*head_a)->next == NULL) return;
    node *ptr = *head_a;
    node *temp = NULL;
    while(ptr){
        temp = ptr->prev;
        ptr->prev = ptr->next;
        ptr->next = temp;
        ptr = ptr->prev;
    }
    *head_a = temp->prev;
}

node *revList(node *head){
    if(head == NULL){printf("Linked list is empty"); return head;}
    if(head->next == NULL) return head;
    node *prevN = NULL;
    node *temp = NULL;
    while(head){
        temp = init(head->data);
        temp->next = prevN;
        if(prevN) prevN->prev = temp;
        prevN = temp;
        head = head->next;
    }
    temp->prev = NULL;
    return temp;
}

void createList(node **head_a){
    int n,data;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    if(n==0) {
        *head_a = NULL;
        return;
    }
    printf("Enter the element for the node 1: ");
    scanf("%d",&data);
    *head_a = init(data);
    node *ptr = *head_a;
    for(int i=1;i<n;i++){
        printf("Enter the element for the node %d: ",i+1);
        scanf("%d",&data);
        ptr = append(ptr,data);
    }
}
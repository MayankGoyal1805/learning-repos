#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

typedef struct node{
    struct node* next;
    int data;
} node;

node* newNode(int data){
    node* temp = (node*)malloc(sizeof(node));
    if(temp == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    temp->data = data;
    temp->next = NULL;
    return temp;
}

typedef struct queue{
    node *front;
    node *rear;
    int size;
}queue;

queue* create_queue(){
    queue* temp = (queue*)malloc(sizeof(queue));
    if(temp == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    temp->front = temp->rear = NULL;
    temp->size = 0;
    return temp;
}

void push(queue* que, int data){
    node* temp = newNode(data);
    if(que->front == NULL){
        que->front = temp;
        que->rear = temp;
        que->size++;
        return;
    }
    que->rear->next = temp;
    que->rear = temp;
    que->size++;
}

int pop(queue* que){
    if(que==NULL||que->size==0){
        printf("Queue Underflow\n");
        return INT_MIN;
    }
    node* temp = que->front;
    int data = temp->data;
    que->front = que->front->next;
    if(que->front==NULL){
        que->rear=NULL;
    }
    que->size--;
    free(temp);
    return data;
}

int back(queue* que){
    if(que == NULL || que->size==0){
        printf("Queue Underflow\n");
        return INT_MIN;
    }
    return que->rear->data;
}

int front(queue* que){
    if(que == NULL || que->size==0){
        printf("Queue Underflow\n");
        return INT_MIN;
    }
    return que->front->data;
}

void delete_queue(queue* que){
    node* ptr = que->front;
    while(ptr){
        node* temp = ptr;
        free(temp);
        ptr=ptr->next;
    }
    free(que);
}
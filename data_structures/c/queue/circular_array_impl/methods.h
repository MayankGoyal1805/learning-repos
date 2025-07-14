#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

typedef struct queue{
    int* arr;
    int front,size,capacity;
}queue;

queue* create_queue(int capacity){
    queue* que = (queue*)malloc(sizeof(queue));
    que->arr = (int*)malloc(sizeof(int)*capacity);
    que->front = 0;
    que->size = 0;
    que->capacity = capacity;
    return que;
}

bool is_empty(queue* que){
    if(que == NULL) return true;
    return que->size == 0;
}

bool is_full(queue* que){
    if(que == NULL) return false;
    return que->size == que->capacity;
}

void push(queue* que, int data){
    if(is_full(que)){
        printf("Queue Overflow\n");
        return;
    }
    int rear = (que->front + (que->size++))%que->capacity ;
    que->arr[rear]=data;
}

int pop(queue* que){
    if(is_empty(que)){
        printf("Queue Underflow\n");
        return INT_MIN;
    }
    int data = que->arr[que->front];
    que->front = (que->front+1)%que->capacity;
    que->size--;
    return data;
}

int back(queue* que){
    if(is_empty(que)){
        printf("Queue Underflow\n");
        return INT_MIN;
    }
    int rear = (que->front + (que->size-1))%que->capacity ;
    return que->arr[rear];
}

int front(queue* que){
    if(is_empty(que)){
        printf("Queue Underflow\n");
        return INT_MIN;
    }
    return que->arr[que->front];
}

void delete_queue(queue* que){
    if(que==NULL) return;
    free(que->arr);
    free(que);
}
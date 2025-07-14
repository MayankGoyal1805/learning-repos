#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

typedef struct queue{
    int* arr;
    int capacity;
    int front,rear;
} queue;

queue* create_queue(int capacity){
    queue* temp = (queue*)malloc(sizeof(queue));
    temp->arr = (int*)malloc(sizeof(int)*capacity);
    temp->capacity = capacity;
    temp->rear = -1;
    temp->front = 0;
    return temp;
}

bool is_empty(queue* que){
    return que->rear<que->front;
}

bool is_full(queue *que){
    return que->rear == que->capacity-1;
}

void push(queue* que,int data){
    if(is_full(que)){
        printf("Queue Overflow\n");
        return;
    }
    que->arr[++que->rear] = data;
}

int pop(queue* que){
    if(is_empty(que)){
        printf("Queue Underflow\n");
        return INT_MIN;
    }
    int data =  que->arr[que->front];
    if(que->front==que->rear){
        que->front = 0;
        que->rear = -1;
    }
    else que->front++;
    return data;
}

int front(queue* que){
    if(is_empty(que)){
        printf("Queue Underflow\n");
        return INT_MIN;
    }
    return que->arr[que->front];
}

int back(queue* que){
    if(is_empty(que)){
        printf("Queue Underflow\n");
        return INT_MIN;
    }
    return que->arr[que->rear];
}

void delete_queue(queue* que){
    if(que==NULL) return;
    free(que->arr);
    free(que);
}
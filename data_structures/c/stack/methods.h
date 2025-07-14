#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

typedef struct stack{
    int* arr;
    int top;
    int capacity;
} stack;

stack* create_stack(int capacity){
    stack* new_s = (stack*)malloc(sizeof(stack));
    new_s->arr = (int*)malloc(sizeof(int)*capacity);
    new_s->capacity = capacity;
    new_s->top = -1;
    return new_s;
}

bool is_empty(stack* stc){
    if(stc->top == -1 || stc==NULL) return true;
}

bool is_full(stack* stc){
    if(stc == NULL) return false; 
    return stc->top == stc->capacity-1;
}

void push(stack* stc, int data){
    if(is_full(stc)){
        printf("Stack Overflow\n");
        return;
    }
    stc->arr[++stc->top] = data;
}

int pop(stack* stc){
    if(is_empty(stc)){
        printf("Stack Underflow\n");
        return INT_MIN;
    }
    int data = stc->arr[stc->top];
    stc->top--;
    return data;
}

int top(stack* stc){
    if(is_empty(stc)){
        printf("Stack Underflow\n");
        return INT_MIN;
    }
    return stc->arr[stc->top];
}

void delete_stack(stack* stc){
    if(stc==NULL) return;
    free(stc->arr);
    free(stc);
}
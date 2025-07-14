#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct stack{
    int capacity;
    int top;
    int *arr;
}stack;

stack* create_stack(int capacity){
    stack* temp = (stack*)malloc(sizeof(stack));
    temp->capacity = capacity;
    temp->top = -1;
    temp->arr = (int*)malloc(sizeof(int)*capacity);
}

void push( stack* stc,int value){
    if(stc->top==stc->capacity-1){
        printf("Stack Overflow\n");
        return;
    }
    stc->arr[++stc->top] = value;
}

int pop(stack* stc){
    if(stc->top==-1){
        printf("Stack Underflow\n");
        return 0;
    }
    return stc->arr[stc->top--];
}

int peek(stack* stc){
    if(stc->top==-1){
        printf("Stack Underflow\n");
        return 0;
    }
    return stc->arr[stc->top];
}

int delete_stack(stack* stc){
    free(stc->arr);
    free(stc);
}

bool is_full(stack *stc){
    if(stc->top==stc->capacity-1){
        return true;
    }
    return false;
}

bool is_empty(stack *stc){
    if(stc->top==-1){
        return true;
    }
    return false;
}
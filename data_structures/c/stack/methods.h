#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
    int capacity;
    int *arr;
    int top;
}stack;

stack* create_stack(int capacity){
    stack* temp = (stack*)malloc(sizeof(stack));
    temp->top = -1;
    temp->capacity = capacity;
    temp->arr = (int*)malloc(sizeof(int)*capacity);
    return temp;
}

int is_full(stack* stc){
    if(stc->top == stc->capacity-1){
        return 1;
    }
    return 0;
}

int is_empty(stack* stc){
    if(stc->top==-1){
        return 1;
    }
    return 0;
}

void push(stack *stc, int value){
   if (stc->top == stc->capacity-1){
    printf("Stack overflow\n");
    return;
   }
   stc->arr[++stc->top]=value;
}

int pop(stack *stc){
    if(stc->top == -1){
        printf("Stack underflow\n");
        return 0;
    }
    return stc->arr[stc->top--];
}

int peek(stack *stc){
    if(stc->top==-1){
        printf("Stack is empty\n");
        return 0;
    }
    return stc->arr[stc->top];
}

void deleteStack(stack* stc){
    free(stc->arr);
    free(stc);
}

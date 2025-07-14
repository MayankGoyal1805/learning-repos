#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

typedef struct node{
    struct node* next;
    int data;
}node;

node* newNode(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

typedef struct stack{
    node* top;
    int size;
}stack;

stack* create_stack(){
    stack* stc = (stack*)malloc(sizeof(stack));
    stc->top = NULL;
    stc->size = 0;
    return stc;
}

bool is_empty(stack* stc){
    if(stc==NULL||stc->top==NULL) return true;
    return false;
}

void push(stack* stc, int data){
    if(stc==NULL){
        printf("Stack not initialized\n");
        return;
    }
    node* temp = newNode(data);
    temp->next = stc->top;
    stc->top = temp;
    stc->size++;
}

int pop(stack* stc){
    if(is_empty(stc)){
        printf("Stack Underflow\n");
        return INT_MIN;
    }
    node* temp = stc->top;
    int data = temp->data;
    stc->top = stc->top->next;
    free(temp);
    stc->size--;
    return data;
}

int top(stack* stc){
    if(is_empty(stc)){
        printf("Stack Underflow\n");
        return INT_MIN;
    }
    return stc->top->data;
}

void delete_stack(stack* stc){
    if(stc==NULL) return;
    node* ptr = stc->top;
    while(ptr){
        node* temp = ptr; 
        ptr = ptr->next;
        free(temp);
    }
    free(stc);
}
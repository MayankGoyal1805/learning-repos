#include<stdio.h>
#include<stdlib.h>

int MAXSIZE = 8;
int top = -1;
int stack[8];

int isEmpty(){
    if(top==-1) return 1;
    else return 0;
}

int isFull(){
    if(top == MAXSIZE-1) return 1;
    else return 0;
}

void push(int data){
    if(!isFull()){
        top++;
        stack[top] = data;
    }
    else printf("Can't insert, stack is full");
}

void pop(){
    if(!isEmpty()) top--;
    else printf("Can't pop, as the stack is empty");
}

int peek(){
    return stack[top];
}



int main(){
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    push(7);
    push(34);

    printf("Stack full: %s\n",isFull()?"True":"False");
    printf("Stack empty: %s\n",isEmpty()?"True":"False");

    printf("Element at the top of the stack: %d\n",peek());

    printf("\nElements: \n");

    while(!isEmpty()){
        printf("%d\n",peek());
        pop();
    }

    printf("Stack full: %s\n",isFull()?"True":"False");
    printf("Stack empty: %s\n",isEmpty()?"True":"False");

    return 0;
}

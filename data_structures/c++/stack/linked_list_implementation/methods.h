#include<iostream>
#include<limits.h>
class node{
    public:
    node* next;
    int data;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class stack{
    public:
    node* top;
    int size_v;
    stack(){
        this->size_v = 0;
        this->top = NULL;
    }

    void push(int data){
        node* temp = new node(data);
        if(temp==NULL){
            std::cout<<"Stack Overflow";
            return;
        }
        temp->next = this->top;
        this->top = temp;
        this->size_v++;
    }

    int pop(){
        if(this->top==NULL){
            std::cout<<"Stack Underflow\n";
            return INT_MIN;
        }
        node* temp = this->top;
        this->top = this->top->next;
        int temp_data = temp->data;
        delete temp;
        this->size_v--;
        return temp_data;
    }

    int peek(){
        if(this->top==NULL){
            std::cout<<"Stack Underflow\n";
            return INT_MIN;
        }
        return this->top->data;
    }

    bool is_empty(){
        return this->size_v == 0;
    }

    int size(){
        return this->size_v;
    }
};
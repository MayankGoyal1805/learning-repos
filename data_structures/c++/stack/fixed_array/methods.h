#include<iostream>

using namespace std;

class stack{
    
    int capacity;
    int *arr;
    int top;
public:
    stack(int capacity){
        arr = new int[capacity];
        top = -1;
        this->capacity = capacity;
    }

    void push(int value){
        if(top==capacity-1){
            cout<<"Stack overflow";
            return;
        }
        arr[++top]=value;
    }

    int pop(){
        if(top==-1){
            cout<<"Stack underflow";
            return 0;
        }
        return arr[top--];
        
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty\n";
            return 0;
        }
        return arr[top];
    }

    bool is_empty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};
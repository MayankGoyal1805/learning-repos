package java_lang.stack;

public class stack {
    int top;
    int capacity;
    int arr[];

    stack(int capacity){
        this.capacity = capacity;
        this.top = -1;
        this.arr = new int[capacity];
    }

    void push(int val){
        if(top==capacity-1){
            System.out.println("Stack Overflow");
            return;
        }
        arr[++top]= val;
    }

    int pop(){
        if(top==-1){
            System.out.println("Stack Underflow");
            return 0;
        }
        return arr[top--];
    }
}

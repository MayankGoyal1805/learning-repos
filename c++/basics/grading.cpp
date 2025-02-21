#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the students marks between 0-100: ";
    cin>>marks;
    if(marks>=80 && marks<=100){
        cout<<"A\n";
    }
    else if(marks>=60){
        cout<<"B\n";
    }
    else if(marks>=50){
        cout<<"C\n";
    }
    else if(marks>=45){
        cout<<"D\n";
    }
    else if(marks>=25){
        cout<<"E\n";
    }
    else{
        cout<<"F\n";
    }
}
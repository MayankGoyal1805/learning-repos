#include "methods.h"
using namespace std;

int main() { 
    stack s(5); 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " popped from stack\n"; 

    cout << "Top element is: " << s.peek() << endl; 

    cout << "Elements present in stack: "; 
    while (!s.is_empty()) { 
        cout << s.peek() << " "; 
        s.pop(); 
    } 

    return 0; 
}
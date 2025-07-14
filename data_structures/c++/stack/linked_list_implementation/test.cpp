#include"methods.h"

int main() {
    stack s;

    // Test is_empty on an empty stack
    std::cout << "Is the stack empty? " << (s.is_empty() ? "Yes" : "No") << std::endl;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Check size
    std::cout << "Stack size after pushing 3 elements: " << s.size() << std::endl;

    // Peek at the top element
    std::cout << "Top element (peek): " << s.peek() << std::endl;

    // Pop elements and display them
    std::cout << "Popped element: " << s.pop() << std::endl;
    std::cout << "Popped element: " << s.pop() << std::endl;
    std::cout << "Stack size after popping 2 elements: " << s.size() << std::endl;

    // Peek at the top element again
    std::cout << "Top element (peek): " << s.peek() << std::endl;

    // Pop the last element
    std::cout << "Popped element: " << s.pop() << std::endl;

    // Try popping from an empty stack
    std::cout << "Popped element from an empty stack: " << s.pop() << std::endl;

    // Check if stack is empty
    std::cout << "Is the stack empty? " << (s.is_empty() ? "Yes" : "No") << std::endl;

    return 0;
}
#include "methods.h"

int main() {
    stack* s = create_stack(5);
    push(s, 10);
    push(s, 20);
    push(s, 30);
    printf("%d popped from stack\n", pop(s));

    printf("Top element is: %d\n", peek(s));

    printf("Elements present in stack: ");
    while (!is_empty(s)) {
        printf("%d ", peek(s));
        pop(s);
    }

    deleteStack(s);
    return 0;
}
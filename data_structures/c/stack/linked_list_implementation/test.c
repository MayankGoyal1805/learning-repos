#include"methods.h"

int main() {
    stack stc;
    initialize_stack(&stc);

    push(&stc, 10);
    push(&stc, 20);
    push(&stc, 30);

    printf("Top element is %d\n", peek(&stc));
    printf("Popped element is %d\n", pop(&stc));
    printf("Stack is %s\n", is_empty(&stc) ? "empty" : "not empty");

    destroy_stack(&stc);
    printf("Stack destroyed successfully.\n");

    return 0;
}
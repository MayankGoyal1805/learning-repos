#include"methods.h"

int main() {
    // Create a queue with a capacity of 5
    int capacity = 5;
    queue* que = create_queue(capacity);

    printf("Testing circular queue implementation\n");

    // Test pushing elements
    printf("Pushing elements:\n");
    for (int i = 1; i <= 6; i++) { // Attempt to push 6 elements into a queue of size 5
        printf("Pushing %d... ", i);
        push(que, i);
        printf("Front: %d, Back: %d, Size: %d\n", front(que), back(que), que->size);
    }

    // Test popping elements
    printf("\nPopping elements:\n");
    for (int i = 1; i <= 3; i++) { // Pop 3 elements
        printf("Popped: %d, New Front: %d, Size: %d\n", pop(que), front(que), que->size);
    }

    // Test circular behavior by pushing more elements
    printf("\nPushing more elements to test circular behavior:\n");
    for (int i = 7; i <= 9; i++) {
        printf("Pushing %d... ", i);
        push(que, i);
        printf("Front: %d, Back: %d, Size: %d\n", front(que), back(que), que->size);
    }

    // Test popping all elements
    printf("\nPopping all remaining elements:\n");
    while (!is_empty(que)) {
        printf("Popped: %d, New Front: %d, Size: %d\n", pop(que), front(que), que->size);
    }

    // Attempt to pop from an empty queue
    printf("\nAttempting to pop from an empty queue:\n");
    printf("Popped: %d\n", pop(que));

    // Clean up and delete the queue
    delete_queue(que);
    printf("\nQueue deleted successfully.\n");

    return 0;
}
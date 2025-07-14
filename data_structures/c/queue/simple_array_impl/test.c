#include"methods.h" 

// Test Driver
int main() {
    // Create a queue with capacity of 5
    queue* q = creat_queue(5);

    // Test push operation
    printf("Pushing elements into the queue...\n");
    push(q, 10);
    push(q, 20);
    push(q, 30);
    push(q, 40);
    push(q, 50);

    // Test overflow
    printf("Pushing into a full queue...\n");
    push(q, 60); // Should print "Queue overflow"

    // Test peek operation
    printf("Front element is: %d\n", front(q)); // Expected: 10

    // Test pop operation
    printf("Popping elements from the queue...\n");
    printf("Popped: %d\n", pop(q)); // Expected: 10
    printf("Popped: %d\n", pop(q)); // Expected: 20

    // Test again after pop
    printf("Front element after popping: %d\n", front(q)); // Expected: 30

    // Test pushing after popping
    printf("Pushing more elements...\n");
    push(q, 60); // Should succeed
    push(q, 70); // Should succeed

    // Print the remaining elements in the queue
    printf("Current elements in the queue:\n");
    while (!is_empty(q)) {
        printf("%d ", pop(q));
    }
    printf("\n");

    // Test underflow
    printf("Popping from an empty queue...\n");
    printf("Popped: %d\n", pop(q)); // Should print "Queue Underflow"

    // Clean up
    delete_queue(q);
    printf("Queue deleted successfully.\n");

    return 0;
}
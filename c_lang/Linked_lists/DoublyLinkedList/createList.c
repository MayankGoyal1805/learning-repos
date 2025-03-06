#include "doublyLinkedListsFuns.h"

int main(){
    node*head;
    createList(&head);
    printList(head);
    revListD(&head);
    printf("\n\n");
    printList(head);
}
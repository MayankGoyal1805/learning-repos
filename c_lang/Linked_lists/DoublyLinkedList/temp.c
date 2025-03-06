#include "doublyLinkedListsFuns.h"

int main(){
    node *head = init(8);
    begAdd(&head,89);
    appendT(&head,98);
    node*ptr = head;
    ptr = append(ptr,93);
    ptr = append(head,45);
    ptr = append(head,24);
    printList(head);
    
    addPos(&head,72,3);
    addPos(&head,97,1);
    appendT(&head,13);
    printf("\n\n");
    printList(head);

    delFirstNode(&head);
    delLastNode(&head);
    printf("\n\n");
    printList(head);
    delPos(&head,3);
    printf("\n\n");
    printList(head);
    delPos(&head,2);
    printf("\n\n");
    printList(head);
    head = revList(head);
    printf("\n\n");
    printList(head);
    
}
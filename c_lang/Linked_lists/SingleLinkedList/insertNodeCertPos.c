#include <stdio.h>
#include "LinkListsFuns.h"


int main()
{
    node *head = (node *)malloc(sizeof(node));
    head->data = 64;
    head->link = NULL;
    node *ptr = head;
    ptr = append(ptr, 79);
    ptr = append(ptr, 78);
    ptr = append(ptr, 56);
    addPos(&head, 4, 89);
    printList(head);
}
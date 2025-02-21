#include<stdio.h>
#include<stdlib.h>
#include "LinkListsFuns.h"

int main(){
    node *head = (node*)malloc(sizeof(node));
    head->data = 78;
    node *ptr = head;
    ptr = append(ptr,65);
    ptr = append(ptr,98);
    ptr = append(ptr,94);
    ptr = append(ptr,93);
    printList(head);
    delPos(&head,1);
    printf("\n\n");
    printList(head);
}   
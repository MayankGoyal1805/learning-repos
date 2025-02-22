#include<stdio.h>
#include<stdlib.h>
#include "LinkListsFuns.h"

int main(){
    node *head = (node*)malloc(sizeof(node));
    head->data = 98;
    head->link = NULL;
    appendT(&head,87);
    appendT(&head,65);
    appendT(&head,98);
    appendT(&head,94);
    appendT(&head,93);
    printList(head);
    
}   
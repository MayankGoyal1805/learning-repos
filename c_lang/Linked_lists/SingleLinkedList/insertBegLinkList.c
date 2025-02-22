#include<stdio.h>
#include<stdlib.h>
#include "LinkListsFuns.h"

int main(){
    node *head = (node*)malloc(sizeof(node));
    head->data = 45;
    head->link = NULL;
    BegAdd(&head,87);
    printList(head);
}
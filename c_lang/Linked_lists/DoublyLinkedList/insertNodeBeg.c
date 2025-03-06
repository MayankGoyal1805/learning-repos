#include "doublyLinkedListsFuns.h"

int main(){
    node *head;
    init(84);
    begAdd(&head,89);
    printf("%d\n%d\n",head->data,head->next->data);
}
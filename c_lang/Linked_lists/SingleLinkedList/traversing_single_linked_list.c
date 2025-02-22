#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} node;

void print_linkList(node *head);
void list_input(node *head, int count);
int count_of_nodes(node *head);
node* append(node *ptr,int data);
int main()
{
    node *head = (node *)malloc(sizeof(node));
    head->data = 45;
    node *ptr = head;
    ptr = append(ptr,33);
    ptr = append(ptr,45);
    ptr = append(ptr,67);
    ptr = head;

    printf("No. of items: %d\n", count_of_nodes(head));
    print_linkList(head);
}

int count_of_nodes(node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}

node* append(node *ptr,int data) {
    node *temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
}


void print_linkList(node *head) {
        if(head == NULL) {
            printf("Linked list is empty");
        }
        node *ptr = NULL;
        ptr = head;
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr = ptr->link;
        }
}


void list_input(node *head, int count)
{
    node *ptr = NULL;
    int lc = 2 ;
    // Input taking and temp list item creation
    node *current = NULL;
    ptr = head;
    printf("Enter the value of list item no. 1: ");
    scanf("%d",&head->data);
    while (1)
    {   
        // List creation 
        current = (node *)malloc(sizeof(node));
        printf("Enter the value of list item no. %d: ",lc);
        scanf("%d", &current->data);
        current->link = NULL;
        ptr->link = current;
        ptr = ptr->link;
        // To control the no. of list items
        if (lc == count) break;
        lc ++;
    }

}
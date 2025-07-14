#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

node* newNode(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->right = temp->left = NULL;
    temp->data = data;
    return temp;
}

node* insert(node* root, int data){
    if(root==NULL) return newNode(data);

    if(root->data<=data){
        root->right = insert(root->right,data);
    }
    else if(root->data>data){
        root->left = insert(root->left,data);
    }
    return root;
}


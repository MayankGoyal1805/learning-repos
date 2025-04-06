#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* left;
    int data;
    struct node* right;
}node;

node* newNode(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void printPreOrder(node* root){
    if(root==NULL) return;
    printf("%d ",root->data);
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printPostOrder(node* root){
    if(root==NULL) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    printf("%d ",root->data);
}

void printInOrder(node* root){
    if(root==NULL) return;
    printInOrder(root->left);
    printf("%d ",root->data);
    printInOrder(root->right);
}

int height(node* root){
    if(root==NULL) return -1;
    int lheight = height(root->left);
    int rheight = height(root->right);
    return lheight>rheight? lheight+1:rheight+1;
}
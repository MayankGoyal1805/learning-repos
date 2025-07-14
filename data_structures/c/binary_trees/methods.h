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
    if(root==NULL) return 0;
    int lheight = height(root->left);
    int rheight = height(root->right);
    return lheight>rheight? lheight+1:rheight+1;
}

void printLevel(node* root,int level){
    if(root==NULL) return;
    if(level==1) printf("%d ",root->data);
    if(level>1){
        printLevel(root->left,level-1);
        printLevel(root->right,level-1);
    }
}

void printLevelOrder(node* root){
    int levels = height(root);
    for(int i=1;i<=levels;i++){
        printLevel(root,i);
        printf("\n");
    }
}
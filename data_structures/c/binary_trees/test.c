#include"methods.h"

int main(){
    // Level 0
    node *root = newNode(12);
    // Level 1
    root->left = newNode(13);
    root->right = newNode(26);
    // Level 2
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(8);
    root->right->right = newNode(12);
    // Level 3
    root->left->left->left = newNode(11);
    root->left->left->right = newNode(14);
    root->left->right->left = newNode(21);
    root->left->right->right = newNode(19);
    root->right->left->left = newNode(16);
    root->right->left->right = newNode(24);
    root->right->right->left = newNode(27);
    root->right->right->right = newNode(31);

    printf("%d\n",height(root));
    printLevelOrder(root);
    printf("\n\n");
    printPreOrder(root);
    printf("\n\n");
    printInOrder(root);
    printf("\n\n");
    printPostOrder(root);
    printf("\n\n");

}


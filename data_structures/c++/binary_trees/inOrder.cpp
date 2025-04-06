#include"methods.h"
using namespace std;


int main(){
    // Level 0
    node *root = new node(12);
    // Level 1
    root->left = new node(13);
    root->right = new node(26);
    // Level 2
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(8);
    root->right->right = new node(12);
    // Level 3
    root->left->left->left = new node(11);
    root->left->left->right = new node(14);
    root->left->right->left = new node(21);
    root->left->right->right = new node(19);
    root->right->left->left = new node(16);
    root->right->left->right = new node(24);
    root->right->right->left = new node(27);
    root->right->right->right = new node(31);

    printInOrder(root);

}


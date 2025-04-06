#include<bits/stdc++.h>
using namespace std;

class node {
public:    
    node* left;
    node* right;
    int data;
    node(int data){
        this->data = data;
        left=right=NULL;
    }
};

void printPreOrder(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printInOrder(node* root){
    if(root==NULL) return;
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
    
}


void printPostOrder(node* root){
    if(root==NULL) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}

void printLevelOrder(node* root){
    if(root==NULL) return;
    vector<vector<int>> vecTree;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            node* temp = q.front();
            level.push_back(temp->data);
            q.pop();
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
        }
        vecTree.push_back(level);
    }

    for( auto level : vecTree){
        cout<<"[";
        for(int j=0;j<level.size()-1;j++){
            cout<<level[j]<<",";
        }
        cout<<level[level.size()-1]<<"] ";
    }
}

int height(node *root){
    if(root==NULL) return -1;
    int lheight = height(root->left);
    int rheight = height(root->right);
    return max(lheight,rheight)+1;
}

int heightLevel(node *root){
    if(root==NULL) return 0;
    queue<node*> q ;
    q.push(root);
    int height = -1;
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;i++){
            node *current = q.front();
            q.pop();
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        height ++;
    }
    return height;
}
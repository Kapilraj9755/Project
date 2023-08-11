// pre-Order-traversal { Root left right }

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

node* BuildTree(){

    int x;
    cin >> x;

    if (x == -1){
        return NULL;
    }

    node* root = new node(x);

    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}

void PreOrderTraversal(node* root)
{
   // base case

if (root == NULL){
    return ;
}

cout << root->data << " ";
 PreOrderTraversal(root->left);
 PreOrderTraversal(root->right);
 return;
}

int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    PreOrderTraversal(root);
    return 0;
}

//// Input   1 2 -1 -1 3 -1 -1
 //  Output  1 2 3 
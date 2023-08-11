// In-Order-traversal {  left Root right }

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

void InOrderTraversal(node* root)
{
   // base case

if (root == NULL){
    return ;
}


 InOrderTraversal(root->left);
 cout << root->data << " "; 
 InOrderTraversal(root->right);
 return;
}

int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    InOrderTraversal(root);
    return 0;
}

/*
   Input 3 2 4 -1 -1 5 -1 -1 1 6 7 -1 -1 8 -1 -1 -1
    Output      3 2 4 5 1 6 7 8 // preoder
                4 2 5 3 7 6 8 1 // inorder
*/
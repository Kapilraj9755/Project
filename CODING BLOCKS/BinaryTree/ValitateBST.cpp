/*
Given a binary tree, determine whether it is a BST.

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.

The right subtree of a node contains only nodes with keys greater than the node's key.

Both the left and right subtrees must also be binary search trees.*/


#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int val;
    node* left;
    node* right;
    node(int value){
        val = value;
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

    bool isValidBST(node* root , long left = -1e15 , long right = 1e15 ) {
        // base case
        if (root == NULL){
            return true;
        }

        if (root->val <= left or root->val >= right){
            return false;
        }

        bool L = isValidBST(root->left , left , root->val);
        bool R = isValidBST(root->right , root->val , right);

        if (L == false or R == false){
            return false;
        }

        return true;
    }


int main(){
    
    node* root = BuildTree();
   int ans = isValidBST(root);
   if(ans==true){
   cout<<"true";}
   else {
       cout<<"false";
   }
   
    return 0;
}













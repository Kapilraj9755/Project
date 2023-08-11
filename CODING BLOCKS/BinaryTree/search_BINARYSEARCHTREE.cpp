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
node* searchBst (node* root, int value)
{
    if(root==NULL or root->data == value){
        return 0;
    }
    if (root->data < value){
        return searchBst(root->right,value);
    }
     return searchBst(root->left,value);
}


int main(){
int value;
cin>>value;
    node* root = BuildTree();
    searchBst(root , value);
    return 0;
}
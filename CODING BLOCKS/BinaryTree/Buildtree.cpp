#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
  
    // constructor
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};
//function
node* BuildTree(){

    int x;
    cin >> x;
//base case
    if (x == -1){
        return NULL;
    }

    node* root = new node(x);

    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}



int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    return 0;
}
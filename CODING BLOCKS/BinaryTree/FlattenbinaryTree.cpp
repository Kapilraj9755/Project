
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

node*solve(node* root){

if (root == NULL){
    return root;
}
node*leftll = solve(root->left);
node*rightll = solve(root->right);


if(leftll){
 root->right=leftll;
 while(leftll->right){
    leftll=leftll->right;
 }
    leftll->right=rightll;
 

}
 //left present nhi he
else{
    root->right=rightll;}
    root->left=NULL;
    return root;
}
void flatten (node* root){
    root = solve(root);
}


int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    solve(root);
    flatten(root);
    return 0;
}

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


    node* func(node* root , int &sum){

        if (root == NULL)
        {
            return root;
        }

        func(root->right , sum);  // right gye

        root->val = root->val + sum;  // beech mei work kiya
        sum = root->val;

        func(root->left , sum);  // left gye
        return root;
    }

    node* bstToGst(node* root) {
        int sum = 0;
        return func(root , sum);
    }



int main(){
   
int sum;
    node* root = BuildTree();
      func(root,sum);
      bstToGst(root);
   
    return 0;
}







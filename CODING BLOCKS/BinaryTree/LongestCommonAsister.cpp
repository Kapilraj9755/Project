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


    node* LCA(node *root , int first , int second)
    {
        if (root == NULL){
            return root;
        }

        if (root->data == first or root->data == second){
            return root;
        }
        node* lh = LCA(root->left , first , second);
          node* rh = LCA(root->right , first , second);
       if (lh == NULL and rh == NULL){
           return NULL;
       }
       else if(lh != NULL and rh == NULL){
           return lh;
       }
        else if(rh != NULL and lh == NULL){
           return rh;
       }
       return root;
    }
      
int main() {

    node* root = BuildTree();
    node* ans = LCA ( root , 9 , 10);
    cout<<ans->data<<endl;
   
  
    return 0;
}
/*
2 3 9 10 -1 -1 11 -1 -1 -1 4 5 7 -1 -1 8 -1 -1 6 -1 -1


output 9
*/
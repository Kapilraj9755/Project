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


    node* func(node* root , int key)
    {
        if (root == NULL){
            return root;
        }

        if (root->data == key)
        {
            // work root->left ko apne right subtree ke extreme left par add kr dege
            node* par = root->right;
            node* R = root->right; // NULL
            node* L = root->left; // NULL
            if (R == NULL ){
                return L;
            }
            root->left = NULL ; root->right = NULL;
            while (R->left != NULL){
                R = R->left;
            }

            R->left = L;
            return par;
        }

        root->left = func(root->left , key);
        root->right = func(root->right , key);
        return root;
    }

    node* deletenode(node* root, int key) {
        return func(root , key);
    }

int main(){

    int key;
    cin>>key;

    node* root = BuildTree();
    func( root , key);
    deletenode(root , key );
    return 0;
}
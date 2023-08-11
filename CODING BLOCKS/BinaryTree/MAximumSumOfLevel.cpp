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

void sum(node* root){

queue <node*>q;
q.push(root);

while(q.size()>0){

int n= q.size();
int sum =0;

while (n--)
{
    node* curr = q.front();

sum+= curr->data;

if (curr->left!= NULL){ q.push(curr->left);}
if (curr->right!= NULL){ q.push(curr->right);}
q.pop();}
cout<<sum<<endl;

}

}

int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    sum(root);
    return 0;
}
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

void LeftViewbst(node* root){

queue <node*>q;
q.push(root);
int level =0;
while(q.size()>0){

int n= q.size();
int printed =0;

while (n--)
{
    node* curr = q.front();
        q.pop();

if (printed==0) {cout<<curr->data<<" "; 
printed=1;}
if (curr->left!= NULL){ q.push(curr->left);}
if (curr->right!= NULL){ q.push(curr->right);}
}

level++;
}

}

int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    LeftViewbst(root);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class node {

public:

int data;
node* left;
node* right;

node (int value){

data = value ;
left  = NULL;
right = NULL ;
}
};

node* Buildtree (){

int x;
cin >> x;

if (x==-1 ){
    return NULL;
}

node* root=  new node(x);
root->left=Buildtree();
root ->right = Buildtree();
return root;
}

void LevelOrderTransverse(node* root){

queue <node*> q;
q.push(root);

while(q.size()>0){

node* curr = q.front();
cout<< curr->data << " ";

if (curr-> left != NULL ){
    q.push(curr->left);
}

if (curr-> right != NULL ){
    q.push(curr->right);
}
  q.pop();
}

}


int main () {
node* root = Buildtree();
LevelOrderTransverse(root);
    return 0;
}

/*

2 3 9 -1 -1 -1 4 5 7 -1 -1 8 -1 -1 6 -1 -1
output
2 3 4 9 5 6 7 8 */
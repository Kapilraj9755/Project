/*
INPUT
3 1 -1 -1 4 -1 -1
3 4

OUTPUT 7
*/

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

int rangesum(node*root,int low ,int high){

if (root==NULL){
    return 0;
}
int sum = 0;
queue<node*>q;
q.push(root);

while (!q.empty()){

    node*temp=q.front();

    q.pop();
if (temp ->data >= low && temp->data <= high){
    sum += temp->data;

}

if(temp ->left!=NULL && temp -> data >low ){
    q.push(temp->left);
}
if(temp ->right!=NULL && temp -> data < high ){
    q.push(temp->right);
}
}
return  sum;

  
}


int main(){
  
    node* root = BuildTree();
 int low,high;
   cin >> low ;
   cin >> high ;
  int ans =  rangesum(root,low , high);
    cout<<ans;
  
    return 0;
}
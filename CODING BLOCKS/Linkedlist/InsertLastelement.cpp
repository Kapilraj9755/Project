#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
node* creat(int n){
    node*head=NULL;
    node*last=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        node*temp=new node(x);
        if(head==NULL and last==NULL){
            head=temp;
            last=temp;
        }
        else{
            last->next=temp;
            last=temp;
        }
    }
    return head;
}
void printlist(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
node* insertionatlast(node*head){
    int m;
    cin>>m;
    node*temp=new node(m);
    node*last=head;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=temp;
    return head;
}

int main(){
    int n;
    cin>>n;
    node*head=creat(n);
    head=insertionatlast(head);
    printlist(head);
    return 0;
}
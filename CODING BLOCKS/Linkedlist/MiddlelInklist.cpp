#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    // constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

node* Create(int n){

    node* head = NULL;
    node* last = NULL;

    for (int i = 1 ; i <= n ; i++){
        int x;
        cin >> x;
        node*temp = new node(x);
        if (head == NULL and last == NULL){
            head = temp;
            last = temp;
        }
        else {
            last->next = temp;
            last = temp;
        }
    }

//    last->next = head->next->next; (Cycle ke liye)

    return head;
}

void printLinkedList(node* head){

    node* temp = head;

    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

}


int Middle(node* head){

    node* slow = head;
    node* fast = head;

    // node* fast = head->next;

    while ( fast != NULL and fast->next != NULL  ){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main(){

    int n;
    cin >> n;

    node* head1 = Create(n);


  cout << "Middle of Linked list is " << Middle(head1);
}
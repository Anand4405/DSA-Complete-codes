#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
Node *sorted_insert(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    if(head->data >temp->data){
        temp->next = head;
       return temp;
    }
    Node *curr = head;
    while(curr->next->data<= temp->data && curr->next !=NULL){
        curr = curr->next;
    }
    
    temp->next = curr->next;
    curr->next = temp;
    
    return head;
}

void printList(Node *hea){
    Node *curr = hea;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main(){

Node *head = new Node(10);

head ->next = new Node(20);
head ->next ->next = new Node(30); // short and cleaner implementation
head = sorted_insert(head,15);
printList(head);
    return 0;
}
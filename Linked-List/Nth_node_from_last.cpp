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

void naive_Nth_node_from_last(Node *head,int n){
    int num=0;
    Node *curr = head;
    while(curr != NULL){
        num++;
        curr = curr->next;
    }
    if(n>num){
        cout<<"NULL";
        return ;
    }
    curr = head;
    for(int i=0;i<num-n;i++){
        curr = curr->next;
    }
    cout<<curr->data;
}
void optimized_Nth_Node_from_last(Node *head,int n){
    if(head==NULL){
        return ;
    }
    Node *first = head;
    for(int i=0;i<n;i++){
        if(first==NULL) return;
        first = first->next;
    }
    Node *second = head;
    while(first !=NULL){
        first = first->next;
        second = second->next;
    }
    cout<<second->data;
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
head->next->next->next = new Node(60);
naive_Nth_node_from_last(head,3);
cout<<endl;
optimized_Nth_Node_from_last(head,3);
    return 0;
}
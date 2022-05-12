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
void swap_pairwise(Node *head){
    Node *curr = head;
    while(curr != NULL && curr->next != NULL){
        swap(curr->data,curr->next->data);
        curr = curr->next->next;
    }
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
    return 0;
}
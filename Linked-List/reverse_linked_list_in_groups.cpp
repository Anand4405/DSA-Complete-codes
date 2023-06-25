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

Node *reversek(Node *head,int k){
    int count=0;
    Node *next = NULL,*prev=NULL;
    Node *curr = head;
    while(curr !=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(curr != NULL){
        Node *rest_head = reversek(curr,k);
        head->next = rest_head;
    }
    return prev;
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
head->next->next->next = new Node(37);
head = reversek(head,2);
printList(head);
    return 0;
}
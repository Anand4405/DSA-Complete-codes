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

Node *insertBegin(Node *head,int x){ // constant work so time complexicity is O(1)
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
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
head-> next = new Node(50);
head ->next->next = new Node(30);
head = insertBegin(head,65);
head = insertBegin(head,25);
printList(head);
    return 0;
}
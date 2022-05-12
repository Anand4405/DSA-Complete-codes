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

Node *delete_firstnode(Node *head){
  if(head==NULL){
      return NULL;
  }else{
      Node *temp = head->next;
      delete(head);
      return temp;

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
head-> next = new Node(50);
head ->next->next = new Node(30);
head = delete_firstnode(head);
printList(head);
    return 0;
}
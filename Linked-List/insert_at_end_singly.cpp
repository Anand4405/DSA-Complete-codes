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
Node *insertEnd(Node *head,int x){
    Node *temp = new Node(x);
    // head->next = temp;
    // return *head;
    if(head==NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next !=NULL){
        curr = curr->next;
    }
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
head-> next = new Node(50);
head ->next->next = new Node(30);
head = insertEnd(head,20);
head = insertEnd(head,100);
printList(head);

    return 0;
}
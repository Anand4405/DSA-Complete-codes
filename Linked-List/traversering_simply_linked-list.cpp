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
void printList(Node *hea){
    Node *curr = hea;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

void recursive_print(Node *head){
    if(head ==NULL){
        return;
    }
        cout<<head->data<<" ";
        head = head->next;
        recursive_print(head);
}

int main(){
Node *head = new Node(10);
head ->next = new Node(20);
head->next-> next = new Node(30);
head->next-> next->next = new Node(40);

printList(head); // value passes by copy not by reference

cout<<endl;
recursive_print(head);
    return 0;
}
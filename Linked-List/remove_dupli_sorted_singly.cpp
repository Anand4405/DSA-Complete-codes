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
void remove_duplica_sorted_singly(Node *head){
    Node *curr = head;
    while(curr != NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }
        else{
        curr = curr->next;}
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
head->next->next = new Node(20);
head ->next ->next->next = new Node(30); // short and cleaner implementation
remove_duplica_sorted_singly(head);
printList(head);
    return 0;
}
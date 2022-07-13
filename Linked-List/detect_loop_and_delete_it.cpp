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
bool isloop(Node *head){
    Node *temp = new Node(0);
    Node *curr = head;
    while(curr != NULL){
        if(curr->next==NULL){
            return false;
        }
        if(curr->next==temp){
            return true;
        }
        Node *curr_next = curr->next;
        curr->next = temp;
        curr = curr_next;
    }
}
bool hash_loop(Node *head){
    Node *curr = head;
    unordered_set<Node *> s;
    for(Node *curr = head;curr != NULL;curr=curr->next){
        if(s.find(curr) != s.end()){
            return true;
        }
        s.insert(curr);
    }
    return false;
}
void optimized_detect_loop(Node *head){
    Node *slow = head,*fast=head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            break;
        }
    }
    if(slow != fast){
        return;
    }else{
        slow = head;
    }
    while(slow ->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
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
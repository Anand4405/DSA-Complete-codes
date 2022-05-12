#include<bits/stdc++.h>
using namespace std; // when even number of elements are present print second element

struct Node{

    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void middle_ele(Node *head){
    if(head==NULL) return ;
    int n=0;
    Node *curr = head;
    for(curr = head;curr !=NULL;curr = curr->next){
        n++;
    }
    curr = head;
    for(int i=0;i<n/2;i++){
        curr = curr->next;
    }
    cout<<curr->data;
}
void optimized_middle_ele(Node *head){
    if(head==NULL) return ;
    int n=0;
    Node *curr = head;
    for(curr = head;curr !=NULL;curr = curr->next){
        n++;
    }
    curr = head;
    Node *slow = head,*fast=head;
    if(n%2==0){
    while(fast !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;
     }
     else{
         while(fast->next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;
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
middle_ele(head);
cout<<endl;
optimized_middle_ele(head);
    return 0;
}
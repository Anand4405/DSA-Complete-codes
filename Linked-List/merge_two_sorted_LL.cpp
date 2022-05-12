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

Node *merge_two_sorted(Node *head1,Node *head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    Node *head = NULL,*tail = NULL;
    Node *curr1 = head1;
    Node *curr2 = head2;
    
    if(curr1->data <= curr2->data){
        head = curr1;
        tail = head;
        curr1 = curr1->next;
    }
    else{
        head = curr2;
        tail = curr2;
        curr2 = curr2->next;
    }
    while(curr1 != NULL && curr2 != NULL){
        if(curr1->data <= curr2->data){
            tail->next = curr1;
            tail = curr1;
            curr1 = curr1->next;
        }else{
            tail->next = curr2;
            tail = curr2;
            curr2 =curr2->next;
        }
    }
    if(curr1==NULL) tail->next = curr2;
    else tail->next = curr1;
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

head ->next = new Node(20);
head ->next ->next = new Node(30); // short and cleaner implementation
    return 0;
}
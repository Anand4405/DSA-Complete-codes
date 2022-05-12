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

void genelised_traverse_circular_singly(Node *head){
    if(head==NULL){
        cout<<"NULL";
        return;
    }
    Node *p = head;
    
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p !=head);
}

Node *delete_head_circular_singly(Node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next== head){
        delete(head);
        return NULL;
    }

    // Node *curr = head;
    // while(curr->next !=head){
    //     curr = curr->next;
    // }
    // curr->next = head->next; //naive solution
    // delete(head);
    // return curr;
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete(temp);
    return head;

}

int main(){

struct Node *head = new Node(10);  // we can traverse entire list from any node
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = head;

head = delete_head_circular_singly(head);
genelised_traverse_circular_singly(head);

}




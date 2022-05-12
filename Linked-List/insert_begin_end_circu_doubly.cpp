#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next,*prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
Node *insert_at_begin(Node*head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
    return temp;
}
Node *insert_at_end(Node*head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
   
    return head;
}
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

int main(){
Node *head = new Node(10);
Node *temp1 = new Node(25);
Node *temp2 = new Node(41);
head->next = temp1;
temp1->prev = head;
temp1->next = temp2;
temp2->prev = temp1;
temp2->next = head;
head->prev = temp2;
head = insert_at_begin(head,29);

genelised_traverse_circular_singly(head);
head = insert_at_end(head,69);
cout<<endl;
genelised_traverse_circular_singly(head);
    return 0;
}
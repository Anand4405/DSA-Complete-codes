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

void naive_traverse_circular_singly(Node *head){
    if(head==NULL){
        cout<<"NULL";
        return ;
    }
    cout<<head->data<<" ";
    for(Node *p = head->next;p != head;p=p->next){
        cout<<p->data<<" ";
    }
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

Node *head = new Node(10);  // we can traverse entire list from any node
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = head;
naive_traverse_circular_singly(head);
cout<<endl;
genelised_traverse_circular_singly(head);
}
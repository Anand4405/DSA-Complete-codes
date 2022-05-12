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

Node *insert_at_end(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        Node *curr = head;
        temp->next = head->next;
        head->next = temp;
        int x = temp->data;
        temp->data = head->data;
        head->data = x;
        return temp;
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

struct Node *head = new Node(10);  // we can traverse entire list from any node
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = head;

head = insert_at_end(head,54);
genelised_traverse_circular_singly(head);

}







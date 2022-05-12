#include<iostream>
using namespace std;

struct Node{
int data;
Node *next;
Node *prev;
Node(int x){
    data = x;
    next = NULL;
    prev = NULL;
}
};

Node *reverse_doubly(Node*head){
    if(head==NULL || head->next ==NULL){
        return head;
    }
    Node *pre = NULL;
    Node *curr = head;
    while(curr->next !=NULL){
        pre = curr->prev;
        curr->prev = curr->next;
        curr->next = pre;
        curr = curr->next;
    }  
    return pre->prev;
}

void print(Node *head){
    while(head->next !=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
Node *head = new Node(10);
Node *temp1 = new Node(25);
Node *temp2 = new Node(41);
head->next = temp1;
temp1->prev = head;
temp1->next = temp2;
temp2->prev = temp1;

head = reverse_doubly(head);
print(head);

    return 0;
}
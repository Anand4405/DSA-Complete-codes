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

Node *delHead(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        Node *temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
}
void print(Node *head){
    while(head !=NULL){
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
head = delHead(head);
print(head);
    return 0;
}

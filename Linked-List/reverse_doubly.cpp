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
    Node *temp;
    while(curr !=NULL){
        temp = curr;
        pre = curr->prev;
        curr->prev = curr->next;
        curr->next = pre;
        curr = curr->prev;
    }  
    // return pre->prev; // this also works as pre will represent second last element then we need last element
    return temp;
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

head = reverse_doubly(head);
print(head);

    return 0;
}
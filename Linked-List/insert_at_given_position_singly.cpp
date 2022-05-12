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

Node *insertPosition(Node *head,int pos,int x){
    Node *temp = new Node(x);
    if(pos==1){
        temp ->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i=0;i<pos-2 &&(curr !=NULL);i++){
        curr = curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
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
head-> next = new Node(50);
head ->next->next = new Node(30);
head = insertPosition(head,3,22);
printList(head);
    return 0;
}
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

Node *seg_odd_even(Node *head){

    Node *EE = NULL,*ES = NULL,*OE =NULL,*OS = NULL;
    for(Node *curr = head;curr != NULL;curr = curr->next){
        if(curr->data %2 ==0){
            if(ES==NULL){
                ES = curr;
                EE = ES;
            }else{
                EE->next = curr;
                EE = EE->next;
            }
        }
        else{
            if(OS==NULL){
                OS = curr;
                OE = OS;
            }else{
                OE->next = curr;
                OE = OE->next;
            }
        }
    }
    if(OS ==NULL || ES ==NULL){
        return head;
    }
    EE->next = OS;
    OE->next = NULL;
    return ES;
}

void printList(Node *hea){
    Node *curr = hea;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main(){

Node *head = new Node(1);
head ->next = new Node(2);
head ->next ->next = new Node(3); // short and cleaner implementation
head = seg_odd_even(head);
printList(head);
    return 0;
}
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
Node *naive_insert_at_begin_circular_singly(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
    }
    else{
        Node *curr = head;
        while(curr->next !=head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next =head;
    }
    return temp;
}
Node *optimized_insert_at_begin(Node *head,int x){
    Node *temp = new Node(x);
    Node *kk = head;
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
    }
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

struct Node *head = new Node(10);  // we can traverse entire list from any node
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = head;
head = naive_insert_at_begin_circular_singly(head,87);
genelised_traverse_circular_singly(head);
cout<<endl;
Node* hea = optimized_insert_at_begin(head,52);
genelised_traverse_circular_singly(hea);

return 0;
}
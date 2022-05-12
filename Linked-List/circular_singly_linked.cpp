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
// Node *delete_kth_num(Node *head,int k){
//     Node *curr = head;
//     if(head==NULL){
//         return NULL;
//     }
//     if(k==1){

//     }
//     for(int i=0;i<k-1;i++){
//         curr = curr->next;
//     }
//    Node *temp = curr->next;
//     curr->next = curr->next->next;
//     delete(temp);
//     return head;
// }
int main(){

struct Node *head = new Node(10);  // we can traverse entire list from any node
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = head;
// head = delete_kth_num(head,2);
genelised_traverse_circular_singly(head);
}
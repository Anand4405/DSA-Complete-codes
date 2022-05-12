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

int search_linked_list(Node *head,int x){
    Node *curr = head;
    int res=0;
    while(curr !=NULL){
        if(curr->data==x){
            return res;
        }
        curr = curr->next;
        res++;
    }
    return -1;
}

int recursive_sol(Node *head,int x){
    if(head==NULL) return -1;
    if(head->data==x){
        return 1;
    }
    else{
        int res = recursive_sol(head->next,x);
        if(res==-1) return -1;
        else res+1;

    }
    
}

int main(){
Node *head = new Node(10);
head-> next = new Node(50);
head ->next->next = new Node(30);
cout<<search_linked_list(head,30)<<endl;
cout<<recursive_sol(head,30);

    return 0;
}
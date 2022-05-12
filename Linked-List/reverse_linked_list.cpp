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
Node *reverse_linked_list(Node *head){
    vector<int> arr;
    Node *curr;
    for(curr=head;curr !=NULL;curr = curr->next){
        arr.push_back(curr->data);
    }
    curr = head;
    for(int i =arr.size()-1;i>=0;i--){
        curr->data = arr[i];
        curr = curr->next;
    }
    return head;
}
Node *optimized_reverse(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    while(curr !=NULL){
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *recursive_reverse(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *rest_head = recursive_reverse(head->next);
    Node *rest_tail =  head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;

}
Node *recursive_reverse2(Node *head,Node*prev=NULL){
    if(head==NULL){
        return prev;
    }
    Node *next = head->next;
    head->next = prev;
    return(next,head);
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

head ->next = new Node(20);
head ->next ->next = new Node(30); // short and cleaner implementation
// Node *head1 = reverse_linked_list(head);
// printList(head1);
// cout<<endl;
// Node *head2 = optimized_reverse(head);
// printList(head2);
// cout<<endl;
// Node *head3 = recursive_reverse(head);

// printList(head3);
Node *head4 = recursive_reverse2(head);
printList(head4);
    return 0;
}
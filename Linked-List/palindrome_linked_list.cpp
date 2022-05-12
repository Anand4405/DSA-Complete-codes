#include<bits/stdc++.h>
using namespace std;

struct Node{

    char data;
    Node *next;
    Node(char x){
        data = x;
        next = NULL;
    }
};
bool isPalindrome(Node *head){
    stack<char> s;
    for(Node *curr = head;curr != NULL;curr = curr->next){
        s.push(curr->data);
    }
    for(Node *curr=head;curr != NULL;curr = curr->next){
        if(s.top() != curr->data){
            return false;
        }
        s.pop();
    }
    return true;
}
void printList(Node *hea){
    Node *curr = hea;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}


int main(){

Node *head = new Node('a');

head ->next = new Node('b');
head ->next ->next = new Node('a'); // short and cleaner implementation
cout<<isPalindrome(head);
    return 0;
}
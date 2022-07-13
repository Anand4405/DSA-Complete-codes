#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

int multiply_two_ll(Node *head1,Node *head2){

    int num1=0;
    int num2=0;
    while(head1 != NULL){
        num1 = num1*10 + (head1->data);
        head1 = head1->next;
}
while(head2 != NULL){
        num2 = num2*10 + (head2->data);
        head2 = head2->next;
}
return num1*num2;
}


int main(){
Node *head = new Node(5);
head->next = new Node(1);
head->next->next = new Node(2);

Node *head2 = new Node(1);
cout<<multiply_two_ll(head,head2);

    return 0;
}
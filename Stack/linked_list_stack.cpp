#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

struct MyStack{
Node *head;
int siz;
MyStack(){
    head = NULL;
    siz =0;
}
void push(int x){
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
    siz++;
}
int pop(){
    int res = head->data;
    Node *temp = head;
    head = head->next;
    delete(temp);
    return res;
}
int size(){
    return siz;
}

bool isEmpty(){
    return (head==NULL);
}
int peak(){
    if(head==NULL) return INT_MAX;
    return head->data;
}
};

int main(){

    return 0;
}
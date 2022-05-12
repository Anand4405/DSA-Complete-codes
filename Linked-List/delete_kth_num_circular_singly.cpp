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

int main(){

struct Node *head = new Node(10);  // we can traverse entire list from any node
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = head;

}
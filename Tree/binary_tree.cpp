#include<bits/stdc++.h>
using namespace std;
struct Node{

int key;
Node *left;
Node *right;
Node(int x){
    key = x;
    left = NULL;
    right = NULL;
}

};

int main(){
Node *root = new Node(20);
root->left = new Node(50);
root->right = new Node(40);
root->right->right = new Node(54);
    return 0;
}
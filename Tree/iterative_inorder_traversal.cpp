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


void iterative_inorder(Node *root){
    stack<Node*>s;
    Node *curr = root;
    while(curr != NULL || s.empty()==false){
    while(curr != NULL){
        s.push(curr);
        curr = curr->left;
    }
    curr = s.top();
    s.pop();
    cout<<curr->key<<" ";
    curr = curr->right;
    }
}

int main(){
Node *root = new Node(20);
root->left = new Node(50);
root->right = new Node(40);
root->right->right = new Node(54);

iterative_inorder(root);
cout<<endl;

    return 0;
}
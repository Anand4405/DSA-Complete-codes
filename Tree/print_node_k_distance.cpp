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

void print_node_k_dist(Node *root,int k){
    if(root==NULL) return;
 if(k==0){
     cout<<root->key<<" ";
     return;
 }
 else{
  print_node_k_dist(root->left,k-1);
  print_node_k_dist(root->right,k-1);
 }
}

int main(){
Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node(30);
root->left->right = new Node(40);
root->left->left = new Node(50);
print_node_k_dist(root,2);
    return 0;
}

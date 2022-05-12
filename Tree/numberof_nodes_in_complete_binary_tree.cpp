#include<bits/stdc++.h>
using namespace std;
struct Node{
                          // complete binary tree means nodes are filled upto previous level and then 
                          //nodes are filled left to right
int key;
Node *left;
Node *right;
Node(int x){
    key = x;
    left = NULL;
    right = NULL;
}

};

int number_of_nodes_complete_tree(Node *root){
  if(root==NULL) return 0;

  return 1+ number_of_nodes_complete_tree(root->left)+number_of_nodes_complete_tree(root->right);

}

int optimized_number_of_nodes(Node *root){
    int lh=0;
    int rh =0;
    Node *curr = root;
    while(curr != NULL){
        lh++;
        curr = curr->left;
    }
    curr = root;
    while(curr != NULL){
        rh++;
        curr = curr->right;
    }
    if(lh==rh) return pow(2,rh)-1;
    return 1+optimized_number_of_nodes(root->left)+optimized_number_of_nodes(root->right);
}

int main(){
Node *root = new Node(20);
root->left = new Node(50);
root->right = new Node(40);
root->right->right = new Node(54);

cout<<number_of_nodes_complete_tree(root)<<endl;
cout<<optimized_number_of_nodes(root);
    return 0;
}
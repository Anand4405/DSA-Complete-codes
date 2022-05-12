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

bool children_sum_property(Node *root){

    if(root ==NULL) return true;
    if(root->left ==NULL && root->right==NULL ) return true;
    int sum = 0;
    if(root->left != NULL) sum += root->left->key;
    if(root->right != NULL) sum += root->right->key;
    return (sum==root->key && children_sum_property(root->left)&& children_sum_property(root->right));
 
}

int main(){
Node *root = new Node(20);
root->left = new Node(12);
root->right = new Node(8);
root->right->right = new Node(8);
cout<<children_sum_property(root);
    return 0;
}
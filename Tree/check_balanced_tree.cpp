#include<bits/stdc++.h>
using namespace std; // balanced tree means for every subtree 
                    //difference between left subtree and right subtree sholud not exceed 1
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
int height(Node *root){
    if(root ==NULL) return 0;
    return 1+ max(height(root->left),height(root->right));
}

bool naive_isBalanced(Node *root){
  if(root ==NULL) return true;
  int h1 = height(root->left);
  int h2= height(root->right);
  return (abs(h1-h2)<=1 && naive_isBalanced(root->left) && naive_isBalanced(root->right));
}

int isBalanced(Node *root){
    if(root==NULL) return 0;
    int h1 = isBalanced(root->left);  // this returns -1 if tree is not balanced
    if(h1== -1){
        return -1;
    }
    int h2 = isBalanced(root->right);
    if(h2== -1) return -1;
    if(abs(h1-h2)>1) return -1;
    else return max(h1,h2)+1;
}

int main(){
Node *root = new Node(20);
root->left = new Node(50);
root->right = new Node(40);
root->right->right = new Node(54);
cout<<naive_isBalanced(root)<<endl;
cout<<isBalanced(root);
    return 0;
}
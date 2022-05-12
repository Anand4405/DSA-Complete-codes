#include<bits/stdc++.h>
using namespace std;

                   // left root right
struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key = x;
        left = NULL;
        right = NULL;
    }
};

void inorder_traversal(Node *root){
    if(root !=NULL){
        inorder_traversal(root->left);  // time complexicity O(n)
        cout<<root->key<<" ";           // space complexicity O(h) h= height of tree
        inorder_traversal(root->right);
    }
}
void preorder_traversal(Node *root){
    if(root != NULL){
        cout<<root->key<<" ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);  // time and space complexicity same as above
    }
}
void postorder_traversal(Node *root){
    if(root != NULL){
        postorder_traversal(root->left);
        postorder_traversal(root->right);  // time and space complexicity same as above
        cout<<root->key<<" ";
    }
}
int main(){
Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node(50);
root->left->left = new Node(40);
inorder_traversal(root);
cout<<endl;
preorder_traversal(root);
cout<<endl;
postorder_traversal(root);
    return 0;
}
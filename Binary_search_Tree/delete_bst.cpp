#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int key;
    Node *left,*right;
    Node(int x){
        key = x;
        left=right=NULL;
    }
};

Node *getsuccesor(Node *root){
    Node *curr = root->right; // closet higher node is at right leftmost node
    while(curr != NULL && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node *delete_node_bst(Node *root,int x){   //O(h) time and space complexicity same in search , insert.
    if(root==NULL) return root;
    else if(root->key>x){
        root->left = delete_node_bst(root->left,x);

    }else if(root->key<x){
        root->right = delete_node_bst(root->right,x);
    }else{
        if(root->left ==NULL){
            Node *curr = root->right;
            delete(root);
            return curr;
        }else if(root->right ==NULL){
            Node *curr = root->left;
            delete(root);
            return curr;
        }
        else{
            Node *succ = getsuccesor(root);
            root->key = succ->key;
            root->right = delete_node_bst(root->right,x);
        }
    }
    return root;
}

int main(){
Node *root = new Node(15);
root->left = new Node(10);
root->right = new Node(45);
root->right->right = new Node(78);
root->left->right = new Node(12);

    return 0;
}
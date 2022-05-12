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

Node *insert_in_bst(Node *root,int x){
    if(root==NULL){
        Node *curr = new Node(x);
        return curr;
    }
    Node *temp = new Node(x);
    Node *curr2 = root,*parent=NULL;
    while(curr2 != NULL){
        parent = curr2; // we need to maintain parent to attach at last
    if(curr2->key == x){
        return root;
    }
    else if(curr2->key>x){
        curr2 = curr2->left;
    }else{
        curr2 = curr2->right;
    }}

    if(parent==NULL){
        return temp;
    }else if(parent->key<x){
        parent->right = temp;
    }
    else{
        parent->left = temp;
    }
    return root;
    
    

}

Node *recursive_insert_bst(Node *root,int x){
    if(root==NULL) return new Node(x);  
    else if(root->key>x) {
        root->right = recursive_insert_bst(root->right,x);
    }else if(root->key<x){
        root->left = recursive_insert_bst(root->left,x);  // we need to attach new Node to previous of this node but our base case only returns 
                                                        //node so we here attached to previous node
    }
    return root;
}

void inorder_traversal(Node *root){
    
    if(root != NULL){
        inorder_traversal(root->left);
        cout<<root->key<<" ";
        inorder_traversal(root->right);
    }
}

int main(){
Node *root = new Node(15);
root->left = new Node(10);
root->right = new Node(45);
root->right->right = new Node(78);
root->left->right = new Node(12);

root = insert_in_bst(root,23);
// root = recursive_insert_bst(root,23);

inorder_traversal(root);

    return 0;
}
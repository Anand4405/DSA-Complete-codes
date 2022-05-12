#include<bits/stdc++.h>
using namespace std;

class Node{
public:

int key;
Node *right,*left;
Node(int data){
key = data;
right = left = NULL;
}

};


Node *floor(Node *root,int x){
    if(root ==NULL ) return NULL;
    Node *res = NULL;
    while(root != NULL){
        if(root->key ==x) return root;
        if(root->key < x){ 
            res = root;
            root = root->right;
        }
        else root = root->left ;
    }
    return res;
}



int main(){
Node *root = new Node(15);
root->left = new Node(10);
root->right = new Node(45);
root->right->right = new Node(78);
root->left->right = new Node(12);
Node *res = floor(root,11);
cout<<res->key<<endl;

    return 0;
}
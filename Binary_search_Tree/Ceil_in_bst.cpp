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

Node *ceil_in_bst(Node *root,int x){
    if(root == NULL ) return NULL;
    Node *res = NULL;
    while(root != NULL){
        if(root->key == x) return root;
        if(root->key > x){
            res = root;
            root = root->left;
        }else{
            root = root->right;
        }
    }

    return res;

}

int main(){

    return 0;
}
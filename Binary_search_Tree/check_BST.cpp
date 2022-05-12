#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left=right = NULL;
    }
};

void inorder_traversal(Node *root,vector<int> &res){
    if(root != NULL){
        inorder_traversal(root->left,res);
        res.push_back(root->data);
        inorder_traversal(root->right,res);
    }
}

bool check_BST(Node *root){   // Tree is BST only if its inorder traversal is sorted..
vector<int>res;
if(root ==NULL) return true;   // this takes O(n) extra space ..we need to optimize it to O(h)

 inorder_traversal(root,res);

for(int i=1;i<res.size()-1;i++){
if(res[i]<res[i-1]){
    return false;
}
return true;
}
}


bool optimized_check_bst(Node *root){
static int prev = -999999;
    if(root ==NULL) return true;

    if(optimized_check_bst(root->left)==false) return false;
    if(root->data<= prev) return false;
    prev = root->data;

    return optimized_check_bst(root->right);
}

int main(){

    return 0;
}
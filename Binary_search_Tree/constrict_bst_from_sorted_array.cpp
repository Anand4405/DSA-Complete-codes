#include<bits/stdc++.h>
using namespace std;

class Node{

public:
int data;
Node*left;
Node*right;
Node(int x){
    data  = x;
    left = right = NULL;
}


};
Node *bst_from_sorted_array(int arr[],int start,int end ){
    if(start > end ) return NULL;

    int mid = (start+end)/2;
    if((end-start+1) %2 ==0) mid++; // this is for handling even number of elements
    Node *root = new Node(arr[mid]);
    root->left = bst_from_sorted_array(arr,start,mid-1);
    root->right = bst_from_sorted_array(arr,mid+1,end);

    return root;
}

void preorder(Node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){

int arr[] = {1,2,3,4,5,6};
Node *root = bst_from_sorted_array(arr,0,5);
preorder(root);
    return 0;
}
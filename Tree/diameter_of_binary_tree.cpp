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

int height(Node *root){
    if(root ==NULL) return 0;

    return max(height(root->left),height(root->right))+1;

}

int diameter_binary_tree(Node *root){
    if(root ==NULL) return 0;                  // naive solution O(n^2)
    int d1 = 1+height(root->left)+height(root->right);

    int d2 = diameter_binary_tree(root->left);
    int d3 = diameter_binary_tree(root->right);

    return max(d1,max(d2,d3));
}

int diameter_bi_tree(Node *root){  // optimized solution O(n)
    if(root==NULL) return 0;
    int res=0;
    int lh = height(root->left);
    int rh = height(root->right);
                                            // wrong this
    res = max(res,lh+rh+1);
    return res;

}

int main(){
Node *root = new Node(20);
// root->left = new Node(50);
root->right = new Node(40);
root->right->right = new Node(54);
root->right->right->right = new Node(59);
root->right->left = new Node(7);
root->right->left->left = new Node(8);
cout<<diameter_binary_tree(root)<<endl;
cout<<diameter_bi_tree(root);
    return 0;
}
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

void verticalsum(Node *root,int hd,map<int,int>&mp){
    if(root==NULL){
        return;
    }
    verticalsum(root->left,hd-1,mp);
    mp[hd] += root->key;
    verticalsum(root->right,hd+1,mp);
}

void vsum(Node *root){
    map<int,int>mp;
    verticalsum(root,0,mp);
    for(auto it:mp){
        cout<<it.second<<" ";
    }
}

int main(){
Node *root = new Node(11);
root->left = new Node(10);
root->right = new Node(20);
root->right->right = new Node(78);
root->left->right = new Node(13);

vsum(root);

    return 0;
}
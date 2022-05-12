#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key =x;
        left = NULL;
        right = NULL;

    }
};

int height_bin_tree(Node *root){
    if(root == NULL) return 0;
    else{
        return max(height_bin_tree(root->left),height_bin_tree(root->right))+1;  //auxiliay space O(h)
    }
}

int main(){

    return 0;
}
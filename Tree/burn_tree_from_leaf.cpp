#include<bits/stdc++.h>
using namespace std;
struct Node{              // we need to find length of farthest node from given leaf

int key;
Node *left;
Node *right;
Node(int x){
    key = x;
    left = NULL;
    right = NULL;
}

};
int res=0;
int burnTime(Node *root, int leaf, int &dist){
    if(root==NULL)return 0;
    if(root->key==leaf){dist=0;return 1;}
    int ldist=-1,rdist=-1;
    int lh=burnTime(root->left,leaf,ldist);
    int rh=burnTime(root->right,leaf,rdist);
    
    if(ldist!=-1){
       dist=ldist+1;
       res=max(res,dist+rh);
    }
    else if(rdist!=-1){
        dist=rdist+1;
        res=max(res,dist+lh);
    }
    return max(lh,rh)+1;
}


int main(){
Node *root = new Node(20);
root->left = new Node(50);
root->right = new Node(40);
root->right->right = new Node(54);
int dist  = -1;
cout<<burnTime(root,54,dist);
    return 0;
}
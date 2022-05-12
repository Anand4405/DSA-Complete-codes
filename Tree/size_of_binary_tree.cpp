#include<bits/stdc++.h>
using namespace std;

struct Node{
int key;
Node *right;
Node *left;
Node(int x){
    key = x;
    right = NULL;
    left = NULL;
}
};

int size_binary_tree(Node *root){
    if(root ==NULL){
        return 0;
    }
    

return 1+size_binary_tree(root->left)+size_binary_tree(root->right);


}

int size_bi_interative(Node *root){
    if(root ==NULL) return 0;
    int res=0;
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        res++;
        Node *curr = q.front();
        q.pop();
        if(curr->left !=NULL){
            q.push(curr->left);
        }
        if(curr->right !=NULL){
            q.push(curr->right);
        }
    }
    return res;

}
int main(){
Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node(30);
root->left->right = new Node(40);
root->left->left = new Node(60);
cout<<size_binary_tree(root)<<endl;
cout<<size_bi_interative(root);
    return 0;
}
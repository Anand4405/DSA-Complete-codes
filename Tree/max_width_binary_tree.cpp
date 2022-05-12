#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
Node(int x){
    key = x;
    left =NULL;
    right = NULL;

}
};

int max_width_binary(Node *root){
    if(root==NULL) return 0;
    int res =0;
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
       
        int count = q.size();
        res = max(res,count);
        for(int i=0;i<count;i++){
            Node *curr = q.front();
            q.pop();
            if(curr->left != NULL) q.push(curr->left);
             if(curr->right != NULL) q.push(curr->right);
        }
    }
    return res;
}

int main(){
Node *root = new Node(4);
root->left = new Node(42);
root->right = new Node(72);
root->left->left = new Node(89);
root->left->right = new Node(64);
root->right->right = new Node(54);

cout<<max_width_binary(root)<<endl;
    return 0;
}
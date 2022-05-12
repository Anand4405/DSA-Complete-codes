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

int recursive_max_bi(Node *root){  // if given tree is balanced then this is better solution. that is height is smaller
                                   // than width for space complexicity
    if(root==NULL) return INT_MIN;

    return max(root->key, max((recursive_max_bi(root->left)),recursive_max_bi(root->right)));
}

int max_binary_tree(Node *root){
    if(root==NULL) return INT_MIN;
    queue<Node*>q;
    int res = root->key;
    q.push(root);
    while(!q.empty()){
        Node *curr = q.front();
        if(res<curr->key){
            res = curr->key;
        }
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
Node *root = new Node(20);
root->left = new Node(54);
root->right = new Node(40);
root->right->right = new Node(53);
cout<<max_binary_tree(root)<<endl;
cout<<recursive_max_bi(root);
    return 0;
}
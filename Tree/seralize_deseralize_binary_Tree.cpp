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

void serialize(Node *root, vector<int> &s){
if(root==NULL) {s.push_back(-1); return;}

    s.push_back(root->key);
    serialize(root->left,s);
    serialize(root->right,s);

}
int Index=0;
Node* desrialize(vector<int> &s){
    if(s.size()==Index) return NULL;
    int val = s[Index++];
    if(val==-1) return NULL;
     Node *root = new Node(val);
     root->left = desrialize(s);
     root->right = desrialize(s);
     return root;
    
}

int main(){
Node *root = new Node(20);
root->left = new Node(50);
root->right = new Node(40);
root->right->right = new Node(54);
vector<int>s;
serialize(root,s);
desrialize(s);
for(auto x:s){
    cout<<x<<" ";
}
    return 0;
}
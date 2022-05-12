#include<bits/stdc++.h>
using namespace std;


class Node{
    public:

    Node *left;
    Node*right;
    int key;
    Node(int x){
        key = x;
        left = NULL;
        right = NULL;
    }
};

void top_view(Node *root){
    if(root==NULL){
        return;
    }
    map<int,vector<int>> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(q.empty()==false){
        auto p = q.front();
        Node *temp = p.first;
        int hd = p.second;
        q.pop();
        mp[hd].push_back(temp->key);
        if(temp->left != NULL) q.push({temp->left,hd-1});
        if(temp->right != NULL) q.push({temp->right,hd+1});
    }

    for(auto it:mp){
        cout<<it.second[0]<<" ";
    }
}
void topView(Node *root){ // this is space optimized
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(q.empty()==false){
        auto p=q.front();
        Node *curr=p.first;
        int hd=p.second;
        if(mp.find(hd)==mp.end())
            mp[hd]=(curr->key);
        q.pop();
        if(curr->left!=NULL)
            q.push({curr->left,hd-1});
        if(curr->right!=NULL)
            q.push({curr->right,hd+1});
    }
    for(auto x:mp){
        cout<<x.second<<" ";
    }
}
int main(){
Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(30);  
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    top_view(root);
    cout<<endl;
    topView(root);
    return 0;
}
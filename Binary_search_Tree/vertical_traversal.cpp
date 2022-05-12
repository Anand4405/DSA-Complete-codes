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

void verticaltraversal(Node *root){
    if(root==NULL){
        return;
    }
    map<int,vector<int>>mp;
    queue<pair<Node*,int >>q;
    q.push({root,0});
    while(q.empty()==false){
            
            auto temp = q.front();
            Node *temp2 = temp.first;
            int hd = temp.second;
            q.pop();
    mp[hd].push_back(temp2->key);
    if(temp2->left != NULL) q.push({temp2->left , hd-1});
     if(temp2->right != NULL) q.push({temp2->right,hd+1});
        
    }

    for(auto p:mp){
        vector<int> v = p.second;
        for(int x: v){
            cout<<x<< " ";
        }
        cout<<endl;
    }
    // for(auto x:mp){
    //     for(int y:x.second)
    //         cout<<y<<" ";
    //     cout<<endl;
    // }
    
}



int main(){

Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(30);  
    root->left->left = new Node(40);
    root->left->right = new Node(50);

verticaltraversal(root);
    return 0;
}
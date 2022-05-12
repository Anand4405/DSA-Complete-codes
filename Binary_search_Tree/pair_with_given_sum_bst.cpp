#include<bits/stdc++.h>
using namespace std;

class Node{
public:

int key;
Node *right,*left;
Node(int data){
key = data;
right = left = NULL;
}

};

void inorder_traversal(Node *root,vector<int>&res){
    if(root != NULL){
        inorder_traversal(root->left,res);
        res.push_back(root->key);
        inorder_traversal(root->right,res);
    }
    
}

void check_pair(Node *root,int n){
    if(root==NULL) return;
    vector<int>res;
    inorder_traversal(root,res);
    int st = res[0];
    int length = res.size();
    int end = res[length-1];
    int i=0,j=length-1;
    
    while(i<j){
        if(res[i]+res[j]==n){
            cout<<res[i]<<" "<<res[j]<<endl;
            return;

        }else if(res[i]+ res[j] >n){
            j--;
        }
        else{
            i++;
        }
    }
}


void check_pair_hashing(Node *root,int n){
   static unordered_set<int>s;
    if(root==NULL) return;
    check_pair_hashing(root->left,n);
    if(s.find(abs(n-(root->key))) != s.end()){
        cout<<n-root->key<<" "<<root->key<<endl;
        return;
    }else{
        s.insert(root->key);
    }
    check_pair_hashing(root->right,n);
}

int main(){
Node *root = new Node(18);
root->left = new Node(8);  
    root->right = new Node(70);  
    root->left->left = new Node(4);  
    root->right->left = new Node(60);
    root->right->right = new Node(80); 

check_pair(root,26);
cout<<endl;
check_pair_hashing(root,74);
    return 0;
}
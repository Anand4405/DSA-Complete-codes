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
int maxlevel = 0;
void print_left_view(Node *root,int level){
    if(root ==NULL) {return;}
    if(maxlevel<level){
        cout<<root->key<<" ";
        maxlevel = level;
    }
    print_left_view(root->left,level+1);
    print_left_view(root,level+1);
}

void print_left_iterative(Node *root){
    if(root ==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        int count = q.size();
        for(int i=0;i<count;i++){
            Node *curr = q.front();
            q.pop();
            if(i==0){
                cout<<curr->key<<" ";
            }
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}

int main(){
Node *root = new Node(20);
root->left = new Node(50);
// root->left->left = new Node(32);
root->right = new Node(9);
root->right->left = new Node(5);
// print_left_view(root,1);
print_left_iterative(root);
    return 0;
}
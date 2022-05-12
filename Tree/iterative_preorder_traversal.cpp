#include <bits/stdc++.h>
using namespace std;
struct Node
{

    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = NULL;
        right = NULL;
    }
};
void optimized_iterative_preorder(Node *root){
 if(root==NULL) return;
 stack<Node*>s;
 Node *curr = root;
 while(curr != NULL || s.empty()==false){
   while(curr != NULL){
       cout<<curr->key<<" ";
       if(curr->right != NULL)
        s.push(curr->right);
       curr = curr->left;
   }
   if(s.empty()==false) {
       curr = s.top();
       s.pop();
   }

 }

}

void iterative_preorder(Node *root)
{

    stack<Node *> s;
    s.push(root);
    while (s.empty() == false)
    {

    Node *curr = s.top();
    cout<<curr->key<<" ";
        
    s.pop();
      if(curr->right != NULL) s.push(curr->right);
      if(curr->left != NULL)  s.push(curr->left);
        
    }
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(50);
    root->right = new Node(40);
    root->left->left = new Node(75);
    root->left->right = new Node(87);
    root->right->right = new Node(54);
    iterative_preorder(root);
    cout<<endl;
    optimized_iterative_preorder(root);
    return 0;
}
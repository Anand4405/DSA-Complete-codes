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
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr=curr->right;
    }cout<<endl;
}


//  Node *prev = NULL;
Node *binary_to_doubly_ll(Node *root){
                                     // here inorder traversal we need to take. this should be inplace and
                                      // left as prev and right as next pointer

static Node *prev = NULL;
if(root==NULL) return root;                         
Node *head = binary_to_doubly_ll(root->left);  
if(prev==NULL) head = root;
else{
    root->left = prev;       
    prev->right = root;
}
prev = root;
binary_to_doubly_ll(root->right);
return head;
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(50);
    root->right = new Node(40);
    root->right->right = new Node(54);
   root= binary_to_doubly_ll(root);
  
   printlist(root);
    return 0;
}
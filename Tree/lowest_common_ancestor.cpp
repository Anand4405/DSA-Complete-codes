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

bool findPath(Node *root, vector<Node *> &p, int n)
{
    if (root == NULL)
        return false;
    p.push_back(root);
    if (root->key == n)
        return true;
    if (findPath(root->left, p, n) || findPath(root->right, p, n))
        return true;
    p.pop_back();
    return false;
}

Node *lowest_commom_ancestor(Node *root, int n1, int n2)
{ // naive solution required 4 traversals
    if (root == NULL)
        return NULL;
    vector<Node *> path1, path2;
    if (findPath(root, path1, n1) == false || findPath(root, path2, n2) == false)
        return NULL;
    for (int i = 0; i < path1.size() - 1 && path2.size() - 1; i++)
    {
        if (path1[i + 1] != path2[i + 1])
        {
            return path1[i];
        }
    }
    return NULL;
}

Node *optimized_low_anse_common(Node *root,int n1,int n2){  // for this both n1 and n2 must exist in root.

     if(root==NULL) return NULL;
     if(root->key==n1 || root->key==n2){
         return root;
     }
     Node *lca1= optimized_low_anse_common(root->left,n1,n2);
     Node *lca2 = optimized_low_anse_common(root->right,n1,n2);
     if(lca1 != NULL && lca2 != NULL){
         return root;
     }
     if(lca1 !=NULL) return lca1;
     else return lca2;
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(50);
    root->right = new Node(40);
    root->right->left = new Node(54);
    root->right->right = new Node(60);
    Node *ans = lowest_commom_ancestor(root, 60, 54);
    cout << ans->key << endl;
    return 0;
}
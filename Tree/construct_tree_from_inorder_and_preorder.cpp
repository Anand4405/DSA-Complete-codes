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
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int preIndex = 0;
Node *ctree(int in[], int pre[], int is, int ie)
{
    // is start index,ie end index
    if (is > ie){
        return NULL;}

    Node *root = new Node(pre[preIndex++]);
    int inIndex;
    for (int i = is; i <= ie; i++)
    {
        if (in[i] == root->key)
        {
            inIndex = i;
            break;
        }
    }
    root->left = ctree(in, pre, is, inIndex - 1);
    root->right = ctree(in, pre, inIndex+1, ie);
    return root;
}

int main()
{
   int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};

    Node *root = ctree(in, pre, 0, 4);
    inorder(root);
    return 0;
}
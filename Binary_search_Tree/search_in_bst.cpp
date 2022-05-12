#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

bool Search(Node *root, int x)
{
    if (root == NULL)
        return false;
    else if (root->key == x)
        return true;
    else if (x < root->key)
        return Search(root->left, x);
    else
        return Search(root->right, x);
}

bool iterative_search(Node *root, int x)
{

    if (root == NULL)
        return false;
    while (root != NULL)
    {
        if (root->key == x)
            return true;
        else if (root->key > x)
            root = root->left;
        else
            root = root->right;
    }
    return false;
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(45);
    root->right->right = new Node(78);
    root->left->right = new Node(12);
    cout << Search(root, 12) << endl;
    cout << iterative_search(root, 78);
    return 0;
}
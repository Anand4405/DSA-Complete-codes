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

void level_order_traversal_line_by_line(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << "\n";
            q.push(NULL);
            continue;
        }
        cout << curr->key << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

void level_order_traversal_line(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->key << " ";
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        cout<<endl;
    }
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(50);
    root->right = new Node(40);
    root->right->right = new Node(54);
    level_order_traversal_line_by_line(root);
    cout<<"\n";
    level_order_traversal_line(root);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct Node
{

    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void detelet_node_pointer(Node *ptr)
{
    Node *temp = ptr->next;
    ptr->data = temp->data;
    ptr->next = temp->next;
    delete (temp);
}

void printList(Node *hea)
{
    Node *curr = hea;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{

    Node *head = new Node(10);

    head->next = new Node(20);
    head->next->next = new Node(30); // short and cleaner implementation
    return 0;
}
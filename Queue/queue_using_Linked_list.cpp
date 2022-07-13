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
struct Queue
{
    Node *rear, *front;
    Queue()
    {
        rear = NULL;
        front = NULL;
    }
    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
        return;
    }
    void dequeue()
    {
        if (front == NULL)
            return;
        Node *temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
    }
};
int main()
{

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void getmedian(int arr[], int n)
{
    priority_queue<int> s;
    priority_queue<int, vector<int>, greater<int>> g;
    s.push(arr[0]);
    cout << arr[0] << " ";
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        if (s.size() > g.size())
        {
            if (s.top() > x)
            {
                s.push(x);
                g.push(s.top());
                s.pop();
            }
            else
            {
                g.push(x);
            }
            cout << (s.top() + g.top()) / 2.0 << " ";
        }
        else
        {
            if (s.top() >= x)
            {
                s.push(x);
            }
            else
            {
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            cout << s.top() << " ";
        }
    }
}

int main()
{
    int arr[] = {12, 15, 10, 5, 8, 7, 16};
    getmedian(arr, 7);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(40);

    cout << q.front() << " " << q.back() << endl;
    q.pop();
    cout << q.front() << " " << q.back() << endl;
    cout << q.size() << endl;
    q.push(50);
    while (q.empty() == false)
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

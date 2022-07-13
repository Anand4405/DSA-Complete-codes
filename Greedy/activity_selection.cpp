#include <bits/stdc++.h>
using namespace std;

bool mycmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int max_activity(pair<int, int> v[], int n)
{
    sort(v, v + n, mycmp);
    int res = 1;
    int prev = 0;
    for (int curr = 1; curr < n; curr++)
    {
        if (v[prev].second <= v[curr].first)
        {
            res++;
            prev = curr;
        }
    }
    return res;
}

int main()
{

    pair<int, int> arr[] = {{4, 5}, {2, 3}, {8, 9},{4,9}};

    cout << max_activity(arr, 4);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int longest_increasing_subsequence(int arr[], int n)
{
    int lis[n]; //  this is dp based solution which takes O(n^2) time and O(n) space
    lis[0] = 1; // this takes O(n^2) time
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                lis[i] = max(lis[i], lis[j] + 1);
                res = max(res, lis[i]); // we maintaining this for res
            }
        }
    }

    return res;
}

int ceil_index(int tail[], int l, int r, int x)
{
    while (r > l)
    {
        int m = (r + l) / 2;
        if (tail[m] >= x)
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    return r;
}

int optimized_longest_incresing_subsequence(int arr[], int n)
{
    int tail[n], len = 1; // this takes nlog(n) time
    tail[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (tail[len - 1] < arr[i])
        {
            tail[len] = arr[i];
            len++;
        }
        else
        {
            int c = ceil_index(tail, 0, len - 1, arr[i]);
            tail[c] = arr[i];
        }
    }
    return len;
}

int main()
{

    int arr[] = {3, 4, 2, 8, 10, 5, 1};

    cout << longest_increasing_subsequence(arr, 7) << endl;
    cout << optimized_longest_incresing_subsequence(arr, 7);
    return 0;
}
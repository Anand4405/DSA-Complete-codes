#include <iostream>
#include <algorithm>
using namespace std;
int min_diff_choco(int arr[], int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    sort(arr, arr + n);
    int res = arr[m - 1] - arr[0];
    for (int i = 1; i + m - 1 < n; i++)
    {
        res = min(res, arr[i + m - 1] - arr[i]);
    }
    return res;
}
int main()
{
    int arr[] = {4, 6, 7, 1, 2, 5, 98, 65, 12, 3};
    cout << min_diff_choco(arr, 10, 3);
    return 0;
}
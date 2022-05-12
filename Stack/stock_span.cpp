#include <bits/stdc++.h>
using namespace std;

void stock_span(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int res = 0;
        int j = i;
        while (j >= 0)
        {
            if (arr[j] <= arr[i])
            {
                res++;
                j--;
            }
            else
            {

                break;
            }
        }
        cout << res << " ";
    }
}
void optimized_printSpan(int arr[], int n)
{

    stack<int> s;
    s.push(0);
    cout << 1 << " ";
    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        int span = s.empty() ? i + 1 : i - (s.top());
        cout << span << " ";
        s.push(i);
    }
}
int main()
{
    int arr[] = {10, 2, 30, 4};
    stock_span(arr, 4);
    cout << endl;
    optimized_printSpan(arr, 4);
    return 0;
}
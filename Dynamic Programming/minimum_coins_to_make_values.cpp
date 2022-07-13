#include <bits/stdc++.h>
using namespace std;

int getmin(int coins[], int n, int val)
{

    if (val == 0)
        return 0;
    int res = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (coins[i] <= val)
        {
            int sub_res = getmin(coins, n, val - coins[i]);

            if (sub_res != INT_MAX)
            {
                res = min(res, sub_res + 1);
            }
        }

    }
        return res;
}

int getMin_dp(int arr[], int n, int val)
{
    int dp[val+1];          //  time O(n*val) space O(val)
    dp[0] = 0;
    for (int i = 1; i <= val; i++)
    {
        dp[i] = INT_MAX;
    }

    for (int i = 1; i <= val; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] <= i)
            {
                int sub_res = dp[i - arr[j]];
                if (sub_res != INT_MAX)
                {
                    dp[i] = min(dp[i], sub_res + 1);
                }
            }
        }
    }
    return dp[val];
}

int main()
{
int arr[] = {3,2,1};
cout<<getMin_dp(arr,3,5)<<endl;
    return 0;
}
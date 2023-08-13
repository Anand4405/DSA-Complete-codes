#include <bits/stdc++.h>
using namespace std;

int coin_change(int coins[], int n, int sum)
{ // we need to find the  max way we get the sum from given coins
    if (sum == 0)
        return 1;

    if (n == 0)
        return 0;

    int res = coin_change(coins, n - 1, sum);
    if (coins[n - 1] <= sum)
    {
        res += coin_change(coins, n, sum - coins[n - 1]);
    }

    return res;
}

int coins_change_dp(int coins[], int n, int sum)
{
    int dp[sum + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = 1;
    }
    for (int j = 1; j <= sum; j++)
    {
        dp[j][0] = 0;
    }

    for (int i = 1; i <= sum; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = dp[i][j - 1];
            if (coins[j - 1] <= i)
            {
                dp[i][j] += dp[i - coins[j - 1]][j];
            }
        }
    }
    return dp[sum][n];
}

int main()
{

    int coins[] = {3, 2, 4, 6};
    cout << coin_change(coins, 4, 5) << endl;

    return 0;
}
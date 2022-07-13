#include <bits/stdc++.h>
using namespace std;

int memo[10000][10000];

int LCS1(string s1, string s2, int m, int n) // this is memoiazation bases solution
{
    if (memo[m][n] != -1)
    {
        return memo[m][n];
    }
    if (m == 0 || n == 0)
    {
        memo[m][n] = 0;
    }
    else
    {
        if (s1[m - 1] == s2[n - 1])
        {
            memo[m][n] = 1 + LCS1(s1, s2, m - 1, m - 1);
        }
        else
        {
            memo[m][n] = max(LCS1(s1, s2, m - 1, n), LCS1(s1, s2, m, n - 1));
        }
    }
    return memo[m][n];
}

int lcs2(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

int main()
{
    string s1 = "AXYZ", s2 = "BAZ";

    int n = 4, m = 3;

    memset(memo, -1, sizeof(memo));

    cout << LCS1(s1, s2, n, m) << endl;
    cout << lcs2(s1, s2);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int eggDrop_DP(int egg, int floor)
{ // time O(f^2e)

    int dp[floor + 1][egg + 1];
    for (int i = 0; i <= egg; i++)
    {
        dp[0][i] = 0;
        dp[1][i] = 1;
    }
    for (int i = 0; i <= floor; i++)
    {
        dp[i][0] = 0;
        dp[i][1] = i;
    }
    for (int i = 2; i <= floor; i++)
    {
        for (int j = 2; j <= egg; j++)
        {
            dp[i][j] = INT_MAX;
            for (int x = 1; x <= i; x++)
            {
                dp[i][j] = min(dp[i][j], 1 + max(dp[x - 1][j - 1], dp[i - x][j]));
            }
        }
    }

    return dp[floor][egg];
}

// A utility function to get
// maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Function to get minimum
// number of trials needed in worst
// case with n eggs and k floors
int eggDrop(int n, int k)
{
    // If there are no floors,
    // then no trials needed.
    // OR if there is one floor,
    // one trial needed.
    if (k == 1 || k == 0)
        return k;

    // We need k trials for one
    // egg and k floors
    if (n == 1)
        return k;

    int min = INT_MAX, x, res;

    // Consider all droppings from
    // 1st floor to kth floor and
    // return the minimum of these
    // values plus 1.
    for (x = 1; x <= k; x++)
    {
        res = max(
            eggDrop(n - 1, x - 1),
            eggDrop(n, k - x));
        if (res < min)
            min = res;
    }

    return min + 1;
}

// Driver program to test
// to pront printDups
int main()
{
    int n = 2, k = 10;
    cout << "Minimum number of trials "
            "in worst case with "
         << n << " eggs and " << k
         << " floors is "
         << eggDrop(n, k) << endl;

    cout << eggDrop_DP(2, 10);
    return 0;
}

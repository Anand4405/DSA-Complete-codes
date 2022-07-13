#include <bits/stdc++.h>
using namespace std;
// palindrome partitioning means we need to cut string so that all cuts that we get should be palindrome
bool ispalindrome(string s, int i, int j)
{
    string s2 = s;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        else
            i++, j--;
    }
    return true;
}
int palindrome_partition(string s, int i, int j)
{
    if (ispalindrome(s, i, j))
        return 0;

    int res = INT_MAX;
    for (int k = i; k < j; k++)
    {
        res = min(res, 1 + palindrome_partition(s, i, k) + palindrome_partition(s, k + 1, j));
    }
    return res;
}


int dp_palindrome_parti(string s)
{
    int n = s.length();
    int dp[n][n];
    for(int i=0;i<n;i++){
        dp[i][i]  = 0; // this is for string of length 0
    }

    for(int gap=0;gap<n;gap++)
    {
        for(int i=0;i+gap<n;gap++)
        {
            int j = i+gap;
            if(ispalindrome(s,i,j)) 
            dp[i][j] = 0;
            else
            {
                dp[i][j] = INT_MAX;
                for(int k=i;k<j;k++)
                {
                    
                }

            }
        }
    }

}

int main()
{

    cout << palindrome_partition("hello", 0, 4) << endl;
    return 0;
}
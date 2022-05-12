#include <bits/stdc++.h>
using namespace std;
int longest_substring(string str)
{
    int n = str.length(), res = 0;

    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(256);
        for (int j = i; j < n; j++)
        {
            if (visited[str[j]] == true)
            {
                break;
            }
            else
            {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
    }
    return res;
}

int main()
{
    string str = "abacdbed";
    cout << longest_substring(str);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int memo[1000000];
// this is memoization based solution
int fib(int n)
{

    if (memo[n] == -1)
    { //this takes O(N) time
        int res;
        if (n == 0 || n == 1)
        {
            res = n;
        }
        else
        {
            res = fib(n - 1) + fib(n - 2);
        }
        memo[n] = res;
    }
    return memo[n];
}


int fib_tabu(int n){
    int f[n+1];
    f[0] = 0;
    f[1] =1;
    for(int i=2;i<=n;i++){
        f[i] = f[i-1]+ f[i-2];
    }

    return f[n];
}


int main()
{
    int n;

    cin >> n;
    memset(memo, -1, sizeof(memo));

    cout << fib(n)<<endl;
    cout<<fib_tabu(n);
    return 0;
}
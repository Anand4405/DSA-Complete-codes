#include <bits/stdc++.h>
using namespace std;

int recursive_maxsum(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    if (n == 2)
        return max(arr[0], arr[1]);

    return max(recursive_maxsum(arr, n - 1), recursive_maxsum(arr, n - 2) + arr[n - 1]);
}

int dp_maxsum(int arr[], int n)
{
    int dp[n+1]; // this takes O(n) space and time. we have another solution which is space optimized.
    dp[0] = 0; 
    dp[1] = arr[0];  // dp[i] represents result of an array of length i.
    dp[2] = max(arr[0], arr[1]);
    for(int i=3;i<=n;i++){
        dp[i] = max(dp[i-1],dp[i-2]+arr[i-1]);
    }
    return dp[n];
}

int Optimized_dp_maxsum(int arr[], int n)
{
    int prev_prev= arr[0]; // this takes O(n) time and O(1) space. .
    int prev = max(arr[0],arr[1]);
    int res = prev;
    for(int i=2;i<n;i++){
       res = max(prev,max(arr[i],prev_prev+arr[i]));

       prev_prev =prev;
       prev= res;
    }
    return res;
}



int main()
{
    int arr[] = {10, 5, 15, 20};
    cout << recursive_maxsum(arr, 4) << endl;
    cout<<dp_maxsum(arr,4)<<endl;
    cout<<Optimized_dp_maxsum(arr,4);
    return 0;
}
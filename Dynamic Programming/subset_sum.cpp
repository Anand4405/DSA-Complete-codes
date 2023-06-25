#include<bits/stdc++.h>
using namespace std;
// we need to find max number of subset in which can make sum==subset
int subset_sum(int arr[],int n,int sum){
    if(n==0)  // time complexity is O(2^n)
    return (sum==0)? 1:0;

    return subset_sum(arr,n-1,sum)+subset_sum(arr,n-1,sum-arr[n-1]);
}

int dp_subset_sum(int arr[],int n,int sum){
    int dp[n+1][sum+1];  // dp[i][j] is count of subsets in arr[0 to i-1] with sum j
     for(int i=0;i<=sum;i++){
         dp[0][i] = 0;
     }
     for(int i=0;i<=n;i++){
         dp[i][0] = 1;
     }
        
     for(int i=1;i<=n;i++){
         for(int j=0;j<=sum;j++){
             if(j<arr[i-1])
             {
                 dp[i][j] = dp[i-1][j];

             }else{
                 dp[i][j] = dp[i-1][j]+dp[i-1][j-arr[i-1]];
             }
         }
     }
     return dp[n][sum];
}

int main(){

    return 0;
}
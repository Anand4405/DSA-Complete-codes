#include<bits/stdc++.h>
using namespace std;

int min_jumps_to_end(int arr[],int n){  // time complexity is O(n^2)
    if(n==1) return 0;
    int dp[n];
    dp[0] = 0;
    for(int i=1;i<n;i++){
        dp[i] = INT_MAX;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]+j >= i){
                if(dp[j] != INT_MAX){
                    dp[i] = min(dp[i],dp[j]+1);
                }
            }
        }
    }
    return dp[n-1];
}

int main(){

int arr[] = {3,4,1,2,1,2};
cout<<min_jumps_to_end(arr,6);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// in this knapsack problem we have to take item completely or dont take item. we can't pick partially any item.

int recursive_max_ksnap(int W,int wt[],int val[],int n){ // time is O(2^n);
if(W==0 || n==0) return 0;

if(wt[n-1]>W) return recursive_max_ksnap(W,wt,val,n-1);
else{
    return max(recursive_max_ksnap(W,wt,val,n-1),val[n-1]+recursive_max_ksnap(W-wt[n-1],wt,val,n-1));
}

}

int dp_max_knapsack(int W,int wt[],int val[],int n){
    int dp[n+1][W+1];
    // dp[i][j] represents the maximum value we get with first i items and capacity j
    for(int i=0;i<=n;i++){  // time and space complexity is O(n*w)
        dp[i][0] = 0;
    }
    for(int i=0;i<=W;i++){
        dp[0][i] = 0;
    }

    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=W;j++){
            
            if(wt[i-1]> j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }} 
    }
    return dp[n][W];

}

int main(){

int wt[] = {5,4,6,3};
int val[] = {10,40,30,50};

cout<<recursive_max_ksnap(10,wt,val,4)<<endl;
cout<<dp_max_knapsack(10,wt,val,4);

    return 0;
}
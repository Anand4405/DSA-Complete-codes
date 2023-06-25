#include<bits/stdc++.h>
using namespace std;
// we have to make maximum cuts of rod of given  length
// we can break rod into lengths a,b,c.
int naive_max_cuts(int n,int a,int b,int c){ // it takes 3^n in worst case
if(n<0) return -1;
if(n==0) return 0;

int res = max({naive_max_cuts(n-a,a,b,c),naive_max_cuts(n-b,a,b,c),naive_max_cuts(n-c,a,b,c)});

if(res==-1) return 0;
else return res+1;
}


int max_cuts_dp(int n,int a,int b,int c){
    int dp[n+1];          // time and space O(n)
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        dp[i] = -1;
        if(i-a >= 0) dp[i] = max(dp[i],dp[i-a]+1);
        if(i-b >= 0) dp[i] = max(dp[i],dp[i-b]+1);
        if(i-c >= 0) dp[i] = max(dp[i],dp[i-c]+1);
        // if(dp[i] != -1){
        //     dp[i]++;
        // }
    }
    return dp[n];
}

int main(){

cout<<max_cuts_dp(7,4,2,3)<<endl;
    return 0;
}
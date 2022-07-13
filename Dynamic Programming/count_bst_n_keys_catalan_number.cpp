#include<bits/stdc++.h>
using namespace std;
// res[i] = summation(res[i]*res[n-i-1]) over 0 to n-1
// catalan number res[n] = 1/(n+1)* 2nCn
int count_bst_n_key(int n){
    if(n==0 || n==1) return 1;
    if(n==2) return 2;
    int dp[n+1] = {0};
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=n;i++){
      for(int j=0;j<i;j++){
          dp[i] += dp[j]*dp[i-j-1];
      }  
    }
    return dp[n];
}

int main(){

cout<<count_bst_n_key(4);
    return 0;
}
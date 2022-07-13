#include<bits/stdc++.h>
using namespace std;

int matrix_mul(int arr[],int i,int j){
    if(i+1 ==j) return 0;
    int res = INT_MAX;

    for(int k=i+1;k<j;k++){
        res = min(res,matrix_mul(arr,i,k)+matrix_mul(arr,k,j)+ (arr[i]*arr[j]*arr[k]));
    }
    return res;
}

int dp_matrix_mul(int arr[],int n)
{                           // time complexity is O(n^3) and space is O(N^2)
    int dp[n][n];
    for(int i=0;i<n-1;i++)
    {
        dp[i][i+1] = 0;

    }
    for(int gap=2;gap<n;gap++)
    {
        for(int i=0;i+gap<n;i++)
        {
            int j = i+gap;
            dp[i][j] = INT_MAX;
            for(int k= i+1;k<j;k++)
            {
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]+(arr[i]*arr[j]*arr[k]));
            }
        }
    }
    return dp[0][n-1];
}

int main(){

int arr[] = {2,1,3,4};
cout<<matrix_mul(arr,0,3)<<endl;
cout<<dp_matrix_mul(arr,4);
    return 0;
}
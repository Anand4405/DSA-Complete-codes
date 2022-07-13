#include <bits/stdc++.h>
using namespace std;

// we need to allocate pages to k students and we have n books.we have allocate pages of books in continuous manner.

int sum(int arr[], int i, int j)
{
    int s = 0;
    for (int k = i; k < j; k++)
    {
        s += arr[k];
    }

    return s;
}

int allocate_min_pages(int arr[], int n, int k)
{
    if (k == 1)
    {
        return sum(arr, 0, n);
    }
    if (n == 1)
        return arr[0];

    int res = INT_MAX;
    for(int i=1;i<n;i++)
    {
        res = min(res,max(allocate_min_pages(arr,i,k-1),sum(arr,i,n-1)));
    }

    return res;
    
}

int minPages(int arr[],int n, int k){
    int dp[k+1][n+1];
    for(int i=1;i<=n;i++)
        dp[1][i]=sum(arr,0,i-1);
    for(int i=1;i<=k;i++)
        dp[i][1]=arr[0];
        
    for(int i=2;i<=k;i++){
        for(int j=2;j<=n;j++){
            int res=INT_MAX;
            for(int p=1;p<j;p++){
                res=min(res,max(dp[i-1][p],sum(arr,p,j-1)));
            }
            dp[i][j]=res;
        }
    }
    return dp[k][n];
}

int main()
{
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    
    cout<<minPages(arr,n,k);
    return 0;
}
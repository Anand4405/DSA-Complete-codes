#include <bits/stdc++.h>
using namespace std;
// bitonic means first increasing subsequence and then decresaing subsequence. length of either 0 still valid
int max_bitonic_subsequence(int arr[], int n)
{

    int lis[n];
    lis[0] = 1;
    int lds[n];
    lds[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {

            if (arr[j] < arr[i])
            {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        lds[i] = 1;
        for (int j = n - 1; j > i; j--)
        {

            if (arr[j] < arr[i])
            {
                lds[i] = max(lds[i], lds[j] + 1);
            }
        }
    }
    int res =0;
    for(int i=0;i<n;i++){
        res = max(res,lis[i]+lds[i]-1);
    }

    return res;
}

int main()
{
int arr[] = {1,11,2,10,4,5,2,1};
cout<<max_bitonic_subsequence(arr,8)<<endl;
    return 0;
}
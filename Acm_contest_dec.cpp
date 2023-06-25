#include<bits/stdc++.h>
using namespace std;

int solution(int arr[],int n)
{
    int res2;
    int i,j;

    int res1 = arr[0]-arr[1];
    int max_num = arr[0];
    for(int i=1;i<n;i++)
    {
        res1 = max(res1,max_num-arr[i]);
        max_num = max(max_num,arr[i]);
    }
    int left_min[n];
    int right_max[n];
    left_min[0] = arr[0];
    for(i=1;i<n;i++)  left_min[i] = min(arr[i],left_min[i-1]);
    right_max[n-1] = arr[n-1];
    for(i=n-2;i>=0;i--)  right_max[i] = max(arr[i],right_max[i+1]);

    i = 0,j=0,res2 = -1;
    while(i<n && j<n)
    {
        if(left_min[i]<right_max[j])
         {
            res2 = max(res2,j-i);
            j++;
         }
        else
         {
            i++;
         }
    }

return res1 + res2;

}

int main()
{
int Arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
int res = solution(Arr,9);
cout<<res;

}
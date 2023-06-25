#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int n,int i=0)
{
    if(i>=n) return;
    swap(arr[i],arr[n-1]);
    reverse_array(arr,n-1,i+1);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    reverse_array(arr,5);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
}
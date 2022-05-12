#include <bits/stdc++.h>
using namespace std;

void naive_max_subarray(int arr[], int n, int k)
{

    int res;
    for (int i = 0; i < n - k + 1; i++)
    {
        res = (arr[i]);

        for (int j = i + 1; j < i + k; j++)
        {
            res = max(res, arr[j]);
        }
        cout << res << " ";
    }
}

void optimized_max_array(int arr[],int n,int k){

    deque<int>dq;
    for(int i=0;i<k;i++){
        while((!dq.empty()) && arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(int i=k;i<n;i++){
        cout<<arr[dq.front()]<<" ";
        while((!dq.empty()) && dq.front()<= i-k){
            dq.pop_front();
        }
        while((!dq.empty())&& (arr[i] >= arr[dq.back()])){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()];
}

int main()
{
int arr[] = {4,7,5,8,9,6,1,3};
naive_max_subarray(arr,8,3);
cout<<endl;

optimized_max_array(arr,8,3);
    return 0;
}


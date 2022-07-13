#include<bits/stdc++.h>
using namespace std;

int max_sum_incre_subse(int arr[],int n){
    int res = arr[0];
    int max_sum[n];
    max_sum[0] = arr[0];
    for(int i=1;i<n;i++){
        max_sum[i] = arr[i];
        for(int j=0;j<i;j++){
            if(arr[j] < arr[i])
            max_sum[i] = max(max_sum[i],arr[i]+max_sum[j]);
            res = max(res,max_sum[i]);
        }
    }
    return res;
}

int main(){
int arr[] = {5,10,20};
cout<<max_sum_incre_subse(arr,3);

    return 0;
}
#include<iostream>
using namespace std;
int max_sum_sliding(int arr[],int n,int k){
    int res = INT32_MIN;
    for(int i=0;i<n-k+1;i++){
        int sum=0;
for(int j=0;j<k;j++){
    sum += arr[i+j];
}
res = max(res,sum);
    }

    return res;
}
int optimized_max_sum(int arr[],int n,int k,int required=0){
    int curr_sum=0;
    int max_sum = INT32_MIN;
    required=3;
    for(int i=0;i<k;i++){
        curr_sum +=arr[i];
    }
        max_sum = curr_sum;
    for(int i=k;i<n;i++){
        if(curr_sum==required){
            cout<<"from "<<i-k<<" to "<<i<<endl;
        }
        curr_sum += (arr[i] - arr[i-k]);
        max_sum = max(max_sum,curr_sum);
    }

    return max_sum;
}

int main(){
int arr[] = {1,5,6,-8,3,9};
cout<<optimized_max_sum(arr,6,3);
    return 0;
}
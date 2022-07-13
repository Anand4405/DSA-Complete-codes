#include<iostream>
using namespace std;
int subset_sum(int arr[] , int n,int sum){
    if(n==0){
        return (sum ==0) ? 1:0;
    }

    return subset_sum(arr,n-1,sum)+subset_sum(arr,n-1,sum-arr[n-1]);
}

int main(){

int arr[5] = {1,2,3,4,5};
int sum=15;
cout<<subset_sum(arr,5,sum);

return 0;
}
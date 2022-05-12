#include<iostream>
using namespace std;
int max_sum(int arr[],int n){
    int res = arr[0];
    for(int i=0;i<n;i++){
        int curr = 0;
        for(int j=i;j<n;j++){
            curr += arr[j];
            res = max(res , curr);
        }
    }
    return res;
}

int optimized(int arr[],int n){ // kadane's algorithm
    int res = arr[0];
    int maxending = arr[0];
    for(int i=1;i<n;i++){
        maxending = max(maxending+arr[i],arr[i]);
        res = max(res,maxending);
        
    }
    return res;
}
int main(){
int arr[6] = {1,6,-2,3,-5,8};
cout<<max_sum(arr,6)<<endl;
cout<<optimized(arr,6);
    return 0; 
}
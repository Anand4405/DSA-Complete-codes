#include<iostream>
using namespace std;
int maxsum_circular(int arr[],int n){
    int res = arr[0];
    for(int i=0;i<n;i++){
        int currsum = arr[i];
        int currmax = arr[i];
        for(int j=1;j<n;j++){
            int index = (i+j)%n;
            currsum += arr[index];
            currmax = max(currmax,currsum);
        }
        res = max(res,currmax);
    }
    return res;
}

int optimized_normalsum(int arr[],int n){
    int res = arr[0];
    int maxending = arr[0];
    for(int i=1;i<n;i++){
        maxending = max(maxending+arr[i],arr[i]);
        res = max(res,maxending);
    }
    return res;
}
int circular_max(int arr[],int n){
    int max_normal = optimized_normalsum(arr,n);
    if(max_normal<0){
        return max_normal;
    }
    int arr_sum =0;
    for(int i=0;i<n;i++){
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + optimized_normalsum(arr,n);

    return max(max_normal,max_circular);
}
int main(){
    int arr[5] = {1,2,-5,9,8};
    cout<<maxsum_circular(arr,5)<<endl;
    cout<<circular_max(arr,5);

    return 0;
}


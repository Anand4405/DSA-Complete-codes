#include<iostream>
using namespace std;
int naive_peak(int arr[],int n){
    int i;
    if(n==1) {return arr[0];}
    if(arr[0]>arr[1]) {return arr[0];}
    if(arr[n-1]>arr[n-2]) {return arr[n-1];}
    for(i=1;i<n-1;i++){
        if(( arr[i] >arr[i-1]) && (arr[i]>arr[i+1])){
            return arr[i];
        }
    }
    return -1;
}

int optimized_peak(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid ==n-1 || arr[mid+1]<=arr[mid])){
            return mid;
        }
        if(mid>0 && arr[mid-1]>arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
int main(){
int arr[] = {1,2,11,10,9};
cout<<naive_peak(arr,5)<<endl;
cout<<optimized_peak(arr,5);
    return 0;
}
#include<iostream>
using namespace std;

int optimized_first_occurance(int arr[],int key,int n){
    int high = n-1;
    int low =0;
    while(low<=high){
    int mid = (low+high)/2;
        if(key>arr[mid]){
           low = mid+1;
        }
        else if(key<arr[mid]){
            high = mid -1;
        }
       else {
           if(mid ==0 || (arr[mid] != arr[mid-1])){
            return mid;
        }
        else{
            high = mid-1;
        }}
    }
    return -1;
}

int optimized_last_occurance(int arr[],int key,int n){
    int high = n-1;
    int low =0;
    while(low<=high){
    int mid = (low+high)/2;
        if(key>arr[mid]){
           low = mid+1;
        }
        else if(key<arr[mid]){
            high = mid -1;
        }
       else {
           if(mid ==n-1 || (arr[mid] != arr[mid+1])){
            return mid;
        }
        else{
            low = mid+1;
        }}
    }
    return -1;
}
    


int occurances(int arr[],int n,int num){
    
    int first = optimized_first_occurance(arr,num,n);
    if(first==-1){
        return 0;
    }
    else{
        return (optimized_last_occurance(arr,num,n) - first+1);
    }
}
int main(){
int arr[] = {1,2,2,2,3,4,5};
cout<<occurances(arr,7,2)<<endl;
cout<<optimized_first_occurance(arr,2,7)<<endl;
cout<<optimized_last_occurance(arr,2,7);
    return 0;
}
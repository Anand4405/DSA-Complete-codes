#include<iostream>
using namespace std;
int b_1st_occurance(int arr[],int key,int low,int high){
    
    int mid = (low+high)/2;
    if(arr[mid]==key){
        while(arr[mid]==key){
            mid--;
        }
        return mid+1;
    }
    else if(key>arr[mid]){
        return b_1st_occurance(arr,key,mid+1,high);
    }
    else if(key<arr[mid]){
        return b_1st_occurance(arr,key,low,mid-1);
    }
    return -1;
    
}

int b_last_occurance(int arr[],int key,int low,int high){
    int mid = (low+high)/2;
    if(arr[mid]==key){
        while(arr[mid]==key){
            mid++;
        }
        return mid-1;
    }
    else if(key>arr[mid]){
        return b_last_occurance(arr,key,mid+1,high);
    }
    else if(key<arr[mid]){
        return b_last_occurance(arr,key,low,mid-1);
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
int main(){
int arr[] = {1,2,3,3,4,4,4,5};
cout<<b_1st_occurance(arr,4,0,8)<<endl;
cout<<b_last_occurance(arr,4,0,8)<<endl;
cout<<optimized_last_occurance(arr,4,8)<<endl;
    return 0;
}
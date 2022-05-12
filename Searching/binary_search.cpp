#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key){
    int low =0;
    int high=n-1;
    int mid;
    while(high>=low){
         mid = (high+low)/2;
        if(key>arr[mid]){
            low = mid+1;
        }
        else if(key < arr[mid]){
            high = mid-1;
        }
        else if(key == arr[mid]){
            return mid;
        }
    }
    return -1;
}

int bsearch(int arr[],int key,int low,int high){
    int mid = (high+low)/2;
    if(low>high){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return bsearch(arr,key,low,mid-1);
    }
    else if(arr[mid]<key){
        return bsearch(arr,key,mid+1,high);
    }

    
}
int main(){
int arr[] = {10,15,3,4,5,6};
cout<<binary_search(arr,6,8)<<endl;
cout<<bsearch(arr,4,0,6);

    return 0;
}
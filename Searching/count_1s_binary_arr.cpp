#include<iostream>
using namespace std;
int _occurance(int arr[],int n,int num=1){
int low =0,high = n-1;
int ct = 0;
while(high>=low){
    int mid = (high+low)/2;
    if(num<arr[mid]){
        high = mid-1;
    }
    else if(num>arr[mid]){
        low = mid+1;
    }
    else{
        if(mid==0 ||(arr[mid-1] != arr[mid])){
            return n-mid;
        }
        else{
            high = mid-1;
        }
    }
}
return 0;
}

int main(){

    int arr[] = {0,0,0,0,1,1};
    cout<<_occurance(arr,6);
    return 0;
}
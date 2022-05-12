#include<iostream>
using namespace std;
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
return -1;
    
}

int infinite_search(int arr[],int n,int num){
    if(arr[0]==num){
        return 0;
    }
    int i=1;
    while(arr[i]< num){
        i = i*2;
        if(arr[i]==num){
            return i;
        }
    return bsearch(arr,num,i/2+1,i-1);
    }
    return -1;
}
int main(){
int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
cout<<infinite_search(arr,12,10);
    return 0;
}
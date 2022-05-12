#include<iostream>
using namespace std;
int getlargest(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[res]){
            res = i;
        }
    }
    return res;
}

int second_largest(int arr[],int n){
    int largest = getlargest(arr,n);
    int res = -1; // handles corner case if second largest number is not present
for(int i=0;i<n;i++){
    if(arr[i] != arr[largest]){
        if(res==-1){
        res = i;}
        else if(arr[res] < arr[i]){
        res = i;
    }
    }
    
}
return res;
}
int optimized_secondlarge(int arr[],int n){
    int res = -1;
    int largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(res ==-1 || arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}
int main(){

int arr[5] = {2,6,8,4,9};
cout<<second_largest(arr,5)<<endl;
cout<<optimized_secondlarge(arr,5);
    return 0;
}
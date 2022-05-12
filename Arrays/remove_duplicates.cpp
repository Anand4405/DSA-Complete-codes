#include<iostream>
using namespace std;
int remove_dup(int arr[],int n){
int res=1;
for(int i=1;i<n;i++){
if(arr[i] != arr[res-1]){
    arr[res] = arr[i];
    res++;
}}
    return res; //[1,2,2,3,3]
}

int main(){
int arr[5] = {1,2,2,3,3};
cout<<remove_dup(arr,5)<<endl;
for(int i=0;i<4;i++){
cout<<arr[i]<<" ";
}
    return 0;
}
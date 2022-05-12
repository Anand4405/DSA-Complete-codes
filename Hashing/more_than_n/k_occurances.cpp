#include<bits/stdc++.h>
using namespace std;

void printNByK(int arr[],int n,int k){
    sort(arr,arr+n);
    int i=1,res=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            res++;i++;
        }
        if(res>(n/k)){
            cout<<arr[i]<<" ";
        }
            res=1;
            i++;
    }
}
void optimized_print(int arr[],int n,int k){
    unordered_map<int,int>h;
    for(int i=0;i<n;i++){
        h[arr[i]]++;
    }
    for(auto i:h){
        if(i.second>n/k){
            cout<<i.first<<" ";
        }
    }
}
int main(){
int arr[] = {10,10,20,30,10,20,10};
printNByK(arr,7,3);
optimized_print(arr,7,4);
    return 0;
}
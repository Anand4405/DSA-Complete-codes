#include<iostream>
using namespace std;
void naive_partition(int arr[],int n,int p){
    int res[n];
    int i=0,j=0;
    for(i=0;i<n;i++){
        if(arr[i]<p){
            res[j] = arr[i];
            j++;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==p){
            res[j] = arr[i];
            j++;
        }
    }

    for(i=0;i<n;i++){
        if(arr[i]>p){
            res[j] = arr[i];
            j++;
        }
    }
    for(int x:res){
        cout<<x<<" ";
    }
    
}
int main(){
int arr[] = {2,3,7,6,4,9,8,7};
naive_partition(arr,8,7);
    return 0;
}
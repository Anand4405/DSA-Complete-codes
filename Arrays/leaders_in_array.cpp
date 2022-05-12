#include<iostream>
using namespace std;
// leader means right of our element all elements should be less than our element

void leader_element(int arr[] , int n){
    int ct=0;
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                break;
            }
            else{
                ct++;
            }
    if(ct==(n-i-1)){
        cout<<arr[i]<<" ";
    }
        }
    ct=0;
    }
}

int main(){
int arr[6] = {3,6,4,2,1,0};
leader_element(arr,6);
    return 0;
}
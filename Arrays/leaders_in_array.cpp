#include<iostream>
#include<bits/stdc++.h>
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
    cout<<arr[n-1];
}

void optimized_leaders(int arr[],int n)
{
    stack<int>s;
    s.push(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i] > s.top())
        {
            s.push(arr[i]);
        }
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
int arr[6] = {3,6,4,2,5,0};
leader_element(arr,6);
cout<<endl;
optimized_leaders(arr,6);
    return 0;
}
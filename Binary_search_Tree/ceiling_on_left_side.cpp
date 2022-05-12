#include<bits/stdc++.h>
using namespace std;

void naive_ceiling(int arr[],int n){
    cout<<-1<<" ";
    int diff = INT_MAX;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]<=arr[j]){
                diff = min(diff,arr[j]);
            }
        }
    if(diff==INT_MAX){
        cout<<-1<<" ";
    }else{
        cout<<diff<<" ";
    }
    }
}

void ceiling_on_left(int arr[],int n){ // greater than given element but smaller in all greater we need to print
    cout<<"-1"<<" ";
    set<int> s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        if(s.lower_bound(arr[i])!=s.end())
            cout<<*(s.lower_bound(arr[i]))<<" ";
        else
            cout<<"-1"<<" ";
        s.insert(arr[i]);
    }
}

int main(){
int arr[6] = {2,8,30,15,25,12};
naive_ceiling(arr,6);
cout<<endl;
ceiling_on_left(arr,6);
    return 0;
}
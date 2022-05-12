#include<bits/stdc++.h>
using namespace std;

void naive_k_closest_element(int arr[],int n,int k,int x){ // suppose arr[4,7,9,2,8,6,10] k = 2,x=8 so answer will be 7,9

bool visited[n] = {0};
for(int i=0;i<k;i++){
    int diff = INT_MAX;
    int min_diff_index;
    for(int j=0;j<n;j++){
        
        if(visited[j]==false && abs(arr[j]-x)<diff){
            diff = abs(arr[j]-x);
            min_diff_index = j;
        }
    }
    cout<<arr[min_diff_index]<<" ";
    visited[min_diff_index] = 1;
}

}

void optimized_k_closest(int arr[],int n,int k,int x){
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<k;i++){          // O(nlog(k)) overall time complexicity
        pq.push({abs(arr[i]-x),i});

    }
    for(int i=k;i<n;i++){
        if(abs(arr[i]-x)<pq.top().first){
            pq.pop();
            pq.push({abs(arr[i]-x),i});
        }
    }

    while(!pq.empty()){
        cout<<arr[pq.top().second]<<" ";
        pq.pop();
    }

}

int main(){
int arr[] = {10,30,5,40,38,80,70};
naive_k_closest_element(arr,7,3,35);
cout<<endl;
optimized_k_closest(arr,7,3,35);
    return 0;
}
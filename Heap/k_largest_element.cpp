#include<bits/stdc++.h>
using namespace std;

void print_k_largest_element(int arr[],int n,int k){ // this is not optimized solution
    priority_queue<int>pq(arr,arr+n); // this takes O(n) time
    vector<int>res;
    while( k != 0){
        res.push_back(pq.top()); // this takes O(lon(n)) for each one to extract and total k elements so O(klog(n))
        pq.pop();
        k--;
    }
    for(int i=res.size()-1;i>=0;i--){
        cout<<res[i]<<" ";
    }
}

void optimized_k_largest_element(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]); // O(k)
    }
    for(int i=k;i<n;i++){
        if(pq.top()<arr[i]){ //O(n-k*log(k))
            pq.pop();
            pq.push(arr[i]);
        }

    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main(){

int arr[] = {5,15,10,20,8};

print_k_largest_element(arr,5,2);
cout<<endl;
optimized_k_largest_element(arr,5,3);

    return 0;
}
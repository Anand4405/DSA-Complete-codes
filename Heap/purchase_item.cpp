#include<bits/stdc++.h>
using namespace std;

int purchase_max_item(int arr[],int n,int cost){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){  // O(n) time is required to build heap
        pq.push(arr[i]);
    }
    int res=0;
    while(cost>=pq.top()){
        res++;
        cost -= pq.top();
        pq.pop();
    }

    return res;
}

int main(){
int arr[] = {1,11,5,7,9,20};
cout<<purchase_max_item(arr,6,13);

    return 0;
}
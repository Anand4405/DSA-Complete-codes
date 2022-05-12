#include<bits/stdc++.h>
using namespace std;


int main(){

int arr[] = {4,5,1};
priority_queue<int> pq(arr,arr+3); // in this way we can build pq from array
vector<int>v = {1,7,6};
priority_queue<int>pq2(v.begin(),v.end());
cout<<pq.top()<<" "<<pq2.top();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


int main(){


priority_queue<int> pq; // by default priority_queue is maxheap. i.e max element will be at top
priority_queue<int , vector<int>,greater<int>> pq2; // This is syntax for minheap.these uses vector but built on array
pq.push(20);
pq.push(6);
pq.push(25);
cout<<pq.size()<<endl;
cout<<pq.top()<<endl;
while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}
pq2.push(10);
pq2.push(4);
pq2.push(8);
cout<<endl;
cout<<pq2.top()<<endl;

    return 0;
}
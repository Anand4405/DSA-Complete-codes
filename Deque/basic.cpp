#include<bits/stdc++.h>
using namespace std;

int main(){
deque<int> dq = {10,53,69};
dq.push_back(20);
dq.push_front(12);


for(auto x:dq){
    cout<<x<<" ";
}

cout<<endl;

dq.pop_back();
cout<<dq.front()<<" "<<dq.back();
dq.pop_front();
    return 0;
}
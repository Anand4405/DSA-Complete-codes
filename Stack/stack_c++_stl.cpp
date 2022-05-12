#include<bits/stdc++.h>
using namespace std;

int main(){
stack<int> s;
s.push(10);
s.push(3);
s.push(52);
s.push(73);
cout<<s.size();
cout<<endl<<s.top();
s.pop();
cout<<endl<<s.top()<<endl;
while(s.empty()==false){
    cout<<s.top()<<" ";
    s.pop();
}
    return 0;
}
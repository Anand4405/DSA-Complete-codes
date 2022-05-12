#include<iostream>
#include<set>
using namespace std;
// always unique elements

int main(){
set<int>a;
a.insert(4);
a.insert(7);
a.insert(7);
a.insert(6);
a.insert(2);
for(auto x:a){
    cout<<x<<" ";
}
cout<<endl;
for(auto i=a.begin();i != a.end();i++){
    cout<<*i<<" ";
}
cout<<endl;
a.erase(2);
for(auto i=a.rbegin();i != a.rend();i++){
    cout<<*i<<" ";
}
cout<<endl;
cout<<a.size();

set<int ,greater<int>> s;  // makes in decending order

    return 0;
}
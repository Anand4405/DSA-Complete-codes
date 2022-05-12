#include<bits/stdc++.h>
using namespace std;


int main(){

set<int>s; // this stores in increasing order. Internally set uses red black tree . it is built on Self balancing tree
set<int,greater<int>> ss; // this stores in decreasing order
s.insert(10);
s.insert(2);
s.insert(42);
s.insert(45);
for(auto x:s){ // set<int>::iterator we can use this in place of auto while traversing
    cout<<x<<" ";
}
cout<<endl;
ss.insert(21);
ss.insert(78);
ss.insert(5);

for(auto it=ss.begin(); it != ss.end();it++){
    cout<<(*it)<<" ";
}
ss.insert(78); // sets ignores the duplicate values
cout<<endl;
for(auto it = ss.rbegin();it != ss.rend();it++){ // rbegin will start pointing from last element
    cout<<(*it)<<" "; 
}

auto it2 = ss.find(78); // ss.count(78)  returns 1 if element is present else 0 on the other hand ss.find() return iteratior
if(it2==ss.end()){    // this takes log(n) time complexity
    cout<<"NOT FOUND"<<endl;
}else{
    cout<<"FOUND"<<endl;
}

ss.clear();
cout<<ss.size()<<endl;

s.erase(2);
cout<<s.size()<<endl;
auto it = s.find(42);
s.erase(it); // s.erase(it,s.end()) this will remove all elements after the given iterator
cout<<s.size()<<endl;
   

    s.insert(54);
    s.insert(69);
    s.insert(31);
    auto it6 = s.lower_bound(58); // this returns the exact or just higher element
    if(it6 != s.end()){
        cout<<(*it6)<<endl;
    }else{
        cout<<"Given element is higher than largest element present in set \n";
    }
    auto it7 = s.upper_bound(54); // this returns the just higher element if present else same as previous case
    if(it7 != s.end()){
        cout<<(*it7)<<endl;
    }else{
        cout<<"Given element is higher than largest element present in set \n";
    }
 return 0;
}
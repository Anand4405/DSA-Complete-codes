#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
unordered_set<int> s;
s.insert(10);
s.insert(11);
s.insert(5);
s.insert(10);
s.insert(36);
for(auto x:s){
    cout<<x<<" ";
}
cout<<endl;
for(auto it=s.begin();it != s.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
if(s.find(5)==s.end()){
    cout<<"not-found"<<endl;
}else{
    cout<<"found "<<endl;
}
if(s.count(11)){
    cout<<"11 is present";
}else{
    cout<<"11 is not present";
}
    return 0;
}
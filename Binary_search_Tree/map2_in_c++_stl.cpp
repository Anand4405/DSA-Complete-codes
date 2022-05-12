#include<bits/stdc++.h>
using namespace std;

// count,find,erase , insert these requires log(n) time and all other O(1);

int main(){

map<int,string>mp;
mp.insert({10,"Anand"});
mp.insert({6,"Arati"});
mp.insert({5,"gfg"});

if(mp.find(10)==mp.end()){ // it searches only on keys not on values
    cout<<"NOt found"<<endl;
}else{
    cout<<"Found"<<endl;
}

for(auto it = mp.find(6);it != mp.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
}

if(mp.count(6)==0){
    cout<<"Not found\n";
}else{
    cout<<"Found\n";
}

auto it2 = mp.lower_bound(7);
if(it2 != mp.end()){
    cout<<(*it2).first<<endl;
}else{
    cout<<"No greater than equal pair \n";
}

auto it3 = mp.upper_bound(6); // this always returns higher value . if decresing order then it return next key 
if(it3 != mp.end()){
    cout<<(*it3).first<<endl;
}else{
    cout<<"greater than greatest element present in it\n";
}

map<int,string,greater<int>> mp2;
mp2.insert({4,"kajdvn"});
mp2.insert({1,"qowhnsd"});
mp2.insert({6,"askjdfn"});
auto it4 = mp2.upper_bound(4);
auto it5 = mp2.lower_bound(4);
if(it4 != mp2.end()){
    cout<<(*it4).first<<" "<<(*it4).second<<endl;
}else{
    cout<<"smaller then smallest\n";
}
if(it5 != mp2.end()){
    cout<<(*it5).first<<" "<<(*it5).second<<endl;
}else{
    cout<<"smaller then smallest\n";
}

mp2.erase(6); // same as mp2.erase(mp.find(6)) erase takes both key as well as iterator
mp.erase(mp.find(6),mp.end()); // this removes from 6 to last 
    return 0;
}
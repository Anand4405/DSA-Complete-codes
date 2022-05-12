#include<bits/stdc++.h>
using namespace std;

int main(){

map<int,int>mp;
mp.insert({10,54});
mp[5] = 12;

mp.insert({3,25});
mp.insert({3,87}); // map ignores this
for(auto &it:mp){
    cout<<it.first<<" "<<it.second<<" ";
}
mp[3] = 203;  // this changes the value at key 3
mp.at(10) = 87; // at works similar to square bracket only when key is present
cout<<endl;
cout<<mp.size()<<endl;
cout<<mp[3]<<endl;
for(auto &it:mp){
    cout<<it.first<<" "<<it.second<<" ";
}
cout<<endl;
for(auto it = mp.begin();it != mp.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<" ";
}
    return 0;
}
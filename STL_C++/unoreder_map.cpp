#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
unordered_map<string,int>m;
m["gfg" ] = 56;
m["Anand"] = 2;
m["Arati"] = 20;
m["anand"] = 2;
m.insert({"hello",6});
for(auto x:m){
    cout<<x.first<<" "<<x.second<<endl;
}
if(m.find("gfg") != m.end()){
    cout<<"found"<<endl;
}
else{
    cout<<"not found";
}
for(auto it=m.begin();it !=m.end();it++){
    cout<<(it->first)<<" "<<(it->second)<<endl;
}
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int mod=1e9+7;
bool checkString(string &s, int st, int ed){
 if(s[st]=='0'|| s[st]=='2' || s[st]=='4'||s[st]=='6'|| s[st]=='8'){
  if(s[ed]=='1'|| s[ed]=='3'|| s[ed]=='5'|| s[ed]=='7'|| s[ed]=='9'){
   return 1;
  }
 }
 return 0;
}


int partitionString(string &s, int k, int i,int m){
 if(i==s.size() && k==0){
  return 1;
 } 
 if(i==s.size()|| k==0){
  return 0;
 }
 int ans=0;
 for(int idx=i+1;s[idx];idx++){
  if(idx-i+1>=m && checkString(s,i,idx)){
   ans+=partitionString(s,k-1, idx+1,m)%mod;
  }
 }
 return ans;
}

int main()
{

    string s = "021433";
    cout<<partitionString(s,2,0,3);



}
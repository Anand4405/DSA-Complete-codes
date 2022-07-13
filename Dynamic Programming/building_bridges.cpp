#include<bits/stdc++.h>
using namespace std;
// we need to max bridges such that they do not cross each other. 
//first value is starting value of bridge and 2nd value is ending value of bridge

bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}

int building_bridges(vector<pair<int,int>>v,int n){
sort(v.begin(),v.end(),cmp);

int lis[n];
lis[0] = 1;
int res =1;
for(int i=1;i<n;i++){
    lis[i] = 1;
    for(int j=0;j<i;j++){
        if(v[i].second > v[j].second){
            lis[i] =max(lis[i],lis[j]+1);
            res = max(res,lis[i]);
        }
    }
}
return res;

}

int main(){

vector<pair<int,int>> v = {{6,2},{4,3},{2,6},{1,5},{1,3}};
cout<<building_bridges(v,5)<<endl;

    return 0;
}
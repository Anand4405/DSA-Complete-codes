#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr,vector<int> arr2,int n,int m){
    vector<int>res;
    int i=0,j=0;     // time is O(nk^2)
    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            res.push_back(arr[i]);
            i++;
        }else{
            res.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        res.push_back(arr[i++]);
    }
    while(j<m){
        res.push_back(arr2[j++]);
    }
    return res;
}

vector<int> merge_k_sorted(vector<vector<int>> v){
vector<int>res;
for(int i=0;i<v[0].size();i++){
    res.push_back(v[0][i]);
}
for(int i=1;i<v.size();i++){
  res =  merge(res,v[i],res.size(),v[i].size());
}
return res;
}


struct Triplet{
int val,lpos,apos;

Triplet(int a,int b,int c){
    val = a;
    lpos = b;
    apos = c;
}

};

struct mycmp{
    bool operator()(Triplet a,Triplet b){
        return a.val >b.val;
    }
};

vector<int> optimized_merge_k_sorted(vector<vector<int>> v){
vector<int>res;
priority_queue<Triplet, vector<Triplet>, mycmp>pq;
for(int i=0;i<v.size();i++){
    Triplet t(v[i][0],i,0);
pq.push(t);
}

while(pq.empty()==false){
    res.push_back(pq.top().val);
    Triplet t2 = pq.top();
    pq.pop();
    if(t2.apos+1<v[t2.lpos].size()){
        Triplet t3(v[t2.lpos][t2.apos+1],t2.lpos,t2.apos+1);
        pq.push(t3);
    }
}

return res;
}


int main(){
vector<vector<int>> v = {{1,5,9},{4,8,10},{6,7,12}};
// vector<int>res = merge_k_sorted(v);
// for(auto i :res){
//     cout<<i<< " ";
// }

vector<int>res2 = optimized_merge_k_sorted(v);
for(auto i :res2){
    cout<<i<< " ";
}
    return 0;
}


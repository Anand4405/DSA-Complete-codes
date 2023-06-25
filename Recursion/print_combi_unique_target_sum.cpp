#include<bits/stdc++.h>
using namespace std;
// In this problem we have to print all unique combinations that leads to target sum 
//and they should be in increasing order

void helper(vector<int>arr,int target,int index,vector<int>&ds,vector<vector<int>>&res)
{
    if(target==0)
    {
        res.push_back(ds);
        return;
    }
    for(int i=index;i<arr.size();i++)
    {
        if(i>index && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        helper(arr,target-arr[i],i+1,ds,res);
        ds.pop_back();

    }
}

vector<vector<int>> combi(vector<int>arr,int target)
{
sort(arr.begin(),arr.end());
vector<vector<int>>res;
vector<int>ds;
helper(arr,target,0,ds,res);
return res;
}

int main()
{

vector<int>d = {1,5,6,4,7,2,3,1};
vector<int>ds;
vector<vector<int>>res = combi(d,6);
for(auto it:res)
{
    for(auto j:it)
        cout<<j<<" ";
    cout<<endl;
}

    return 0;
}
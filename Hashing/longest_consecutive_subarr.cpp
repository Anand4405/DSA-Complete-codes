#include<bits/stdc++.h>
using namespace std; // max consecutive subarry means like x,x+1,x+2... so on.
int naive_max_sub_arr(int arr[],int n){
    sort(arr,arr+n);
    int res=0;
        int curr=1;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]==1){
            curr++;
        }else if(arr[i]-arr[i-1]!=1) { // to avoid corner case like 2,3,3,4,4 
            res = max(res,curr);
            curr=1;
        }
    }
    return max(curr,res);
}

int findLongest(int arr[], int n)
{
    unordered_set<int> s;
    int res = 0;
 
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
 
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i] - 1) == s.end()) {
            int curr = 1;
            while (s.find(curr+arr[i]) != s.end())
                curr++;
                
            res = max(res, curr);
        }
    }
    return res;
}

int main(){
int arr[] = {4,2,3,6,5,1,9,7,10};
cout<<findLongest(arr,9)<<endl;
cout<<naive_max_sub_arr(arr,9);
    return 0;
}
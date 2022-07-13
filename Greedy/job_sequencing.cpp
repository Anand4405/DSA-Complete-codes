#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int>a,pair<int,int>b){
    return a.first>b.first;
}

int job_seq(pair<int,int>arr[],int n)
{
    sort(arr,arr+n,mycmp);
    int res=0;
    int res2[n] = {0};
    bool visited[n] = {false};
    for(int i=0;i<n;i++){
        for(int j=min(n,arr[i].second)-1;j>=0;j--){
            if(visited[j] ==false){
                res += arr[i].first;
                visited[j] = true;
                res2[j] = i;
                break;
            }
        }
    }

for (int i = 0; i < n; i++)
        if (visited[i])
            cout << arr[res2[i]].first << " ";
cout<<endl;
return res;

}

int main(){

pair<int,int> arr[] = {{100,2},{19,1},{27,2},{25,1},{15,3}};
cout<<endl<<job_seq(arr,5);
    return 0;
}
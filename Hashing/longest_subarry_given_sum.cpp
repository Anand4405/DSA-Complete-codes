#include<iostream>
#include<unordered_map>
using namespace std;

int max_sub_array(int arr[],int n,int sum){
    int prefix_sum=0;
    int i,j,res=0;
    unordered_map<int,int> s;
    for(i=0;i<n;i++){
        prefix_sum += arr[i];
        if(prefix_sum==sum){
            res = i+1;
        }
        if(s.find(prefix_sum) == s.end()){
           s.insert({prefix_sum,i});
        }
        if(s.find(prefix_sum-sum)!=s.end()){
            res = max(res,i-s[prefix_sum-sum]);
        }
    }
    return res;
    
}


int main(){
int arr[] = {1,5,8,6,3,7,4};
cout<<max_sub_array(arr,7,13);
    return 0;
}
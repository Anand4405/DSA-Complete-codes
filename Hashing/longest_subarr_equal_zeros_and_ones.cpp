#include<iostream>
#include<unordered_map>
using namespace std;
int naive_max_subarr_equal_zeros_and_ones(int arr[],int n){
    int res=0;
    int c0,c1;
    for(int i=0;i<n;i++){
        c0 = 0,c1=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]==0){
                c0++;
            }else if(arr[j]==1){
                c1++;
            }
            if(c0==c1){
                res = max(res,c0);
            }
        }
    }
    return res;
}

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

int optimized_max_subarr(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i] = -1;
        }
    }
    return max_sub_array(arr,n,0);
}
int main(){
int arr[] = {0,1,0,1,0,0,1,1,1,1,0,0};
cout<<naive_max_subarr_equal_zeros_and_ones(arr,12);
    return 0;
}
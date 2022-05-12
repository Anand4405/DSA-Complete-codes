#include<iostream>
#include<unordered_set>
using namespace std;
bool naive_pair(int arr[],int n,int sum){
    bool res;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                return true;
            }
        }
    }
    return false;
}
bool optimized(int arr[],int n,int sum){
unordered_set<int> s;
for(int i=0;i<n;i++){
    if(s.find(sum-arr[i]) != s.end()){
        return true;
    }else{
        s.insert(arr[i]);
    }
}
return false;
}
int main(){
    
int arr[] = {4,5,6,2,3};
cout<<naive_pair(arr,5,8)<<endl;
cout<<optimized(arr,5,9);
    return 0;
}
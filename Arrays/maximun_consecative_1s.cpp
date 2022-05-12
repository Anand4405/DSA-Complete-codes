#include<iostream>
using namespace std;
int max_ones(int arr[],int n){

    int k=0;
    int curr=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]==1){
            curr++;
            continue;
        }
    if(k==0){
        k = curr;
    }
        if(curr>k){
            k = curr;
        }
        curr=0;
        
    } //contact@algouniversity.com

return k;
}
int max_onee(int arr[],int n){
    int res=0,curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            curr=0;
        }else{
curr++;
res = max(res,curr);
        }
    }
return res;
}
int main(){
    int arr[] = {1,1,1,0,1,1,1,1,1,0,0};
    cout<<max_ones(arr,11)<<endl;
    cout<<max_onee(arr,11);
    return 0;
}
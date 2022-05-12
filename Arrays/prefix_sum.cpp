#include<iostream>
using namespace std;
int prefix_sum(int arr[],int n,int l, int r){
    int prefix[n];
    prefix[0] = arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    if(l !=0){
        return (prefix[r] - prefix[l-1]);
    }
    return prefix[r];
}

bool equilibrium_point(int arr[],int n){
    for(int i=0;i<n;i++){
        int l_sum=0,r_sum=0;
        for(int j=0;j<i;j++){
            l_sum += arr[j];
        }
        for(int k=i+1;k<n;k++){
            r_sum += arr[k];
        }
        if(l_sum == r_sum){
            return true;
        }

        
    }
    return false;
}
int main(){
int arr[6] = {1,2,-6,3,7,8};
cout<<prefix_sum(arr,6,1,3)<<endl;
cout<<equilibrium_point(arr,6);
    return 0;
}
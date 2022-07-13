#include<iostream>
using namespace std;
int trap_water(int arr[],int n){
    int res=0;
    
    for(int i=1;i<n-1;i++){
    int lmax = arr[i];
    for(int j=0;j<i;j++){
        lmax = max(arr[j],lmax);
    }
    int rmax = arr[i];   
    for(int j=i+1;j<n;j++){
        rmax = max(rmax,arr[j]);
    }
    res= res +(min(lmax,rmax)-arr[i]);
    }
    return res;

}

int optimized_rain_trap(int arr[],int n){
    int lmax[n], rmax[n],res=0;

    lmax[0] = arr[0];
for(int i=1;i<n;i++){
    lmax[i] = max(arr[i],lmax[i-1]);

}
rmax[n-1] = arr[n-1];
for(int i=n-2;i>=0;i--){
    rmax[i] = max(arr[i],rmax[i+1]);
}

for(int i=0;i<n;i++)
{
        res += min(lmax[i],rmax[i])- arr[i];
}
}
int main(){
    int arr[5] = {3,2,0,4,5};
    cout<<trap_water(arr,5);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int download_ram(int arr1[],int arr2[],int n,int m){
    int res = m;
    
    int i =0;
    while(i<n){
        if(arr1[i]<=res && arr1[i] !=-1){
            res += arr2[i];
            arr1[i] = -1;
            arr2[i] = 0;
                i = 0;
        }
        else{
            i++;
        }
        }
     
    return res;
}


int main(){
int n,m,test_cases;
cin>>test_cases;

int jj=0;
int res[test_cases];
for(int i=0;i<test_cases;i++){
    cin>>n>>m;
int arr1[n],arr2[n];
for(int j=0;j<n;j++){
    cin>>arr1[j];
}
for(int k=0;k<n;k++){
    cin>>arr2[k];

}
res[jj++] = download_ram(arr1,arr2,n,m);

}
for(auto x: res){
    cout<<x<<endl;
}
// cout<<res[0];
    return 0;
}
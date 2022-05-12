#include <bits/stdc++.h>
using namespace std;
int num_candy(int arr[],int n,int m){
    int su = 0,i;
    for( i=0;i<n;i++){
        su += arr[i];
    }
    return su%m;
}
int main(){
    int n,i,jj,j;
    cin>>n;
    int res[n];
    int k=0;
    for( i=0;i<n;i++){
        int siz,can;
        cin>>siz>>can;
        int arr[siz];
        for( j=0;j<siz;j++){
            cin>>arr[j];
        }
        res[k++] = num_candy(arr,siz,can);
    }
    for( jj=0;jj<n;jj++){
        cout<<"Case #"<<jj+1<<" "<<res[jj];
    }
    
    return 0;
}
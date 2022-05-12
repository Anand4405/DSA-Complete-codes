#include<iostream>
#include<algorithm>
using namespace std;
int sol(int arr[],int n){
    sort(arr,arr+n);
    return arr[n-1]-arr[0];
}
int main(){
    int n;
    cin>>n;
    int res[n];
    int k=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        res[k++] = sol(arr,a);
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
    return 0;
}
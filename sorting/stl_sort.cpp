#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[] = {4,5,9,8};
    sort(arr,arr+4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
vector<int> v ={4,56,98,7,6};
sort(v.begin(),v.end());
for(int x:v){
    cout<<x<<" ";
}
cout<<endl;

    sort(arr,arr+4, greater<int>());
    for(int x:arr){
        cout<<x<<" ";
    }
}
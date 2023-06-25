#include<iostream>
using namespace std;
int maxdiff(int arr[],int n){
    int res = arr[1] - arr[0];
    int minvalue = arr[0];
    for(int j=1;j<n;j++){
        res = max(res,arr[j]-minvalue);
        minvalue = min(minvalue,arr[j]);
    }
    return res;  
}
int main(){
int arr[5] = {1,2,3,4,5};
cout<<maxdiff(arr,5);
    return 0;
}
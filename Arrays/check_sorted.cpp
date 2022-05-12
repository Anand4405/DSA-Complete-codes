#include<iostream>
using namespace std;
bool check_sorted(int arr[],int n){

int res=0;
for(int i=0;i<n-1;i++){
if(arr[i+1]<arr[i]){
    return false;
}
}
return true;
}
int main(){
    int arr[1] = {1};
    cout<<check_sorted(arr,1)<<endl;
    return 0;
}
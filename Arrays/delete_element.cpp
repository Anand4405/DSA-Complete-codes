#include<iostream>
using namespace std;
 
int delete_element(int arr[],int n,int x){

    int i;
for(i=0;i<n;i++){
    if(arr[i]==x){
        break;
    }}
    if(i==(n-1)){
        return n;
    }
    for(int j=i;j<n-1;j++){
        arr[j]= arr[j+1];
    }

    return n-1;
}

int main(){
int arr[5] = {1,2,3,4,5};
cout<<delete_element(arr,5,3)<<endl;
for(auto x:arr){
    cout<<x<<" ";
}
    return 0;
}
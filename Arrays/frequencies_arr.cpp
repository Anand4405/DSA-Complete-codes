#include<iostream>
using namespace std;
void frequencies(int arr[],int n){
    int res=1;
    int i;
    for( i=0;i<n-1;i++){
        if(arr[i+1]==arr[i]){
            res++;
        }
        else{
            cout<<arr[i]<<" "<<res<<endl;
            res=1;
        }}
        if(i == n-1 && res>=1){
            cout<<arr[n-1]<<" "<<res;
        }
        
    
}
int main(){
int arr[9] = {1,1,2,3,4,5,5,6,6};
frequencies(arr,9);

    return 0;
}
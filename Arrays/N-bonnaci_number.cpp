#include<iostream>
using namespace std;
void N_bonnaci(int n,int k){
int arr[k];
for(int i=0;i<n-1;i++){
    arr[i] = 0;
}
arr[n-1] = 1;
arr[n] =1;
int sum=0;
int j;
for(int i=n+1;i<k;i++){
      
arr[i] = 2*arr[i-1]-arr[i-n-1];

}

for(int i=0;i<k;i++){
    cout<<arr[i]<<" ";
}
}
 
int main(){
N_bonnaci(2,7);
    return 0;
}
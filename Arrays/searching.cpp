#include<iostream>
using namespace std;

int main(){
int arr[] = {1,25,6,8,9};
int ar[5] ={1,2,3};
for(int i=2;i>=1;i--){
    ar[i+1]=ar[i];
}
ar[1]=569;
for(int i=0;i<4;i++){
    cout<<ar[i]<<endl;
}
for(int i=0;i<5;i++){
    if(arr[i]==25){
        cout<<i;
    }
}
    return 0;
}
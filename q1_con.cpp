#include<iostream>
using namespace std;
int temp(int n){
    if(n%7==0){
        return n;
    }
    int k = n%7;
    n= n+7-k;
    return n;
}
int main(){
int no;
cin>>no;
int arr[no];
int res[no];
for(int i=0;i<no;i++){
cin>>arr[i];
}
for(int j=0;j<no;j++){
    cout<<temp(arr[j])<<endl;
}

    return 0;
}
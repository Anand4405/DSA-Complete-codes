#include<iostream>
using namespace std;

int main(){
int ii=3,jj=3;
int arr[ii][jj];
int k=1;
for(int i=0;i<ii;i++){
    for(int j=0;j<jj;j++ ){
        arr[i][j] = (i+j+k++);
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<ii;i++){
    for(int j=0;j<jj;j++){
    if(i%2==0){
        
            cout<<arr[i][j]<<" ";
        
    }else{
        cout<<arr[i][jj-j-1]<<" ";
    }
}}
    return 0;
}
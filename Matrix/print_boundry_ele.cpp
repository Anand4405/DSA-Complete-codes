#include<iostream>
using namespace std;
const int jj = 3;
const int ii=3;
void btraversal(int arr[ii][jj]){
if(ii==1){
    for(int i=0;i<jj;i++){
        cout<<arr[ii][i]<<" ";
    }
}
else if(jj==1){
    for(int i=0;i<ii;i++){
        cout<<arr[i][jj]<<" ";
    }
}
else{
    for(int i=0;i<jj;i++){
        cout<<arr[0][i]<<" ";
    }
    for(int i=1;i<ii;i++){
        cout<<arr[i][jj-1]<<" ";
    }
    for(int i=jj-2;i>=0;i--){
        cout<<arr[ii-1][i]<<" ";
    }
    for(int i=ii-2;i>=0;i--){
        cout<<arr[i][0]<<" ";
    }
}
}
int main(){
// int ii=3,jj=3;
int arr[ii][jj];
int k=1;
for(int i=0;i<ii;i++){
    for(int j=0;j<jj;j++ ){
        arr[i][j] = (i+j+k++);
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
btraversal(arr);


    return 0;
}
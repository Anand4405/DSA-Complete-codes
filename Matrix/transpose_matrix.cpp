#include<iostream>
using namespace std;
const int R=3 ,C=3;
void transpose(int arr[R][C]){
for(int i=0;i<R;i++){
    for(int j=i+1;j<C;j++){
        swap(arr[i][j],arr[j][i]);
    }
}
}
int main(){
int arr[R][C];
int k=1;
for(int i=0;i<R;i++){
    for(int j=0;j<C;j++ ){
        arr[i][j] = (i+j+k+i+k++);
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
transpose(arr);
for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}
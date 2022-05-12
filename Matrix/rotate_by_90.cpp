#include<iostream>
using namespace std;
const int R=4,C=4;
void transpose(int arr[R][C]){
for(int i=0;i<R;i++){
    for(int j=i+1;j<C;j++){
        swap(arr[i][j],arr[j][i]);
    }
}
}
void rotate_90(int arr[R][C]){ //rotate in anticlockwise direction
transpose(arr);
for(int i=0;i<C;i++){
   int low=0,high=R-1;
   while(low<high){
       swap(arr[low][i],arr[high][i]);
       low++,high--;
   }
}

}
int main(){
int arr[R][C];
int kk=0;
for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
        arr[i][j] = (i+j+kk++);
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
rotate_90(arr);
for(int i=0;i<C;i++){
    for(int j=0;j<R;j++){
        
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
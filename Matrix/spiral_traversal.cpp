#include<iostream>
using namespace std;
const int R=3,C=3;
void spiral_travelsal(int arr[R][C]){
    int top=0,left=0,right=C-1,bottom=R-1;
    while(top>=bottom && left>=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
    }
    if(top<=bottom){
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i];
        }
        bottom--;
    }
    if(left<=right){
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left];
        }
        left++;
    }
}
int main(){

    return 0;
}
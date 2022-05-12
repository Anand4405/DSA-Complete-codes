#include<iostream>
using namespace std;
void left_rotate(int arr[],int n){
    int temp =arr[0];
    for(int i=1;i<n;i++){ // one left move for multiple take it in loop
        arr[i-1]=arr[i];
    }
    arr[n-1] = temp;
}

void left_rotate_array(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
                      // left move by d places . left move means counterclockwise move
    for(int i=0;i<d;i++){
        arr[n-d+i] = temp[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[] ,int low,int high){
    
    while(low<high){
        // int temp = arr[i];
        // arr[i] = arr[high-1];
        // arr[high-1] =arr[low];
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void optimized_rotate(int arr[], int n,int d){
reverse(arr,0,d-1);
reverse(arr,d,n-1);
reverse(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int arr[6] = {1,5,6,9,7,3};
// left_rotate_array(arr,6,2);
optimized_rotate(arr,6,2);
    return 0;
}
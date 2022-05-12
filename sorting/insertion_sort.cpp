#include<iostream>
using namespace std;  // this is stable sort
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key =arr[i];
        int j =i-1;
        while(j>=0 &&(arr[j]>key)){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[] = {10,7,8,9,7};
insertion_sort(arr,5);
    return 0;
}


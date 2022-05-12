#include<iostream>
using namespace std;
// this is not stable sort because same value order may changes. It takes n^2 time always .
// there is no worst case or best case
int main(){
int arr[] = {40,6,1,7,5};
int min_end=0;  // we can do this optimization
for(int i=0;i<5;i++){
    min_end=i;
    for(int j = i+1;j<5;j++){
        if(arr[min_end]>arr[j]){
            min_end = j;
            // swap(arr[i],arr[j]);
        }
    
        }
        swap(arr[min_end],arr[i]);
    
    }
    for(int x:arr){
        cout<<x<<" ";
    }

    return 0;
}
#include<iostream>
using namespace std;
void zero_end(int arr[],int n){
    
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0 ){
            swap(arr[i],arr[count]);
            count++;
        }   }
    
}
int main(){
    int arr[6] = {10,0,5,0,6,9};
    zero_end(arr,6);
    return 0;
}
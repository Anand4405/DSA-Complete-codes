#include<iostream>
using namespace std;
void naive_count_sort(int arr[],int n,int k){
    int count[k];
    for(int i=0;i<k;i++){
        count[i] =0;}
    for(int i=0;i<n;i++){    
        count[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<count[i];j++){
            arr[index] = i;
            index++;
        }
    }
}
int main(){
int arr[] = {0,1,5,2,3,4,1,2};
naive_count_sort(arr,8,6);
for(int x:arr){
    cout<<x<<" ";
}
    return 0;
}
#include<iostream>
using namespace std;
// majority element means element which appears more than n/2 times 

int majority_ele(int arr[],int n){
    int count;
    for(int i=0;i<n;i++){
        count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        if(count>n/2){
            return i;
        }
    }
    return -1;
}
int main(){
int arr[] = {4,3,6,4,4,4,4,8};
cout<<majority_ele(arr,8);
    return 0;
}
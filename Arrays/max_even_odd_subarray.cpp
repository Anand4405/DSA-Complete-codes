#include<iostream>
using namespace std;
int max_length(int arr[],int n){
    int res =1;
    int curr = 1;
    for(int i=0;i<n;i++){
        if((arr[i]+arr[i+1])% 2 !=0){
            curr++;
        }
        else if((arr[i]+arr[i+1])%2 ==0){
            curr = 1;
            
        }
        res = max(res,curr);
      
    }
    return res;
}

int naive_max_length(int arr[],int n){
    int res = 1;
    for(int i=0;i<n;i++){
        int curr =1;
        for(int j=i+1;j<n;j++){
            if((arr[j]%2==0 && arr[j-1]%2 !=0) ||(arr[j-1]%2==0 && arr[j]%2 !=0)){
                curr++;
            }
            else{
                break;
            }
        }
        res = max(res,curr);
    }
    return res;
}
int main(){
int arr[6] = {5,10,20,6,5,8};
cout<<max_length(arr,6);
cout<<naive_max_length(arr,6);
    return 0;
}
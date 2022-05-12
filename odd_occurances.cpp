#include<iostream>
using namespace std;
int find_odd(int arr[],int n){

    int res=0;
    for(int i=0;i<n;i++){
        res = (res^arr[i]);
    }
    return res;
}
int main(){
    int arr[7] = {1,2,3,1,3,1,2};
cout<<find_odd(arr,7);
// int arr[7] = {1,2,4,5,6,7,8};
// int key = 6;
// int start = 0;
// int end = 7;
// while(start<=end){
//     int mid = (start+end)/2;
//     if(key==arr[mid]){
//         cout<<"got at index "<<mid;
//         break;
//     }else if(key>arr[mid]){
//         start = mid+1;
//     }else{
//         end = mid-1;
//     }
// }
    return 0;
}
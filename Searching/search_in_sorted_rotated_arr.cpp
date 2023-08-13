#include<iostream>
using namespace std;
int rota_sort_search(int arr[],int n,int key){
    int low = 0;
    int high = n-1;
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            return mid; 
        }
        if(arr[low]<= arr[mid]){
            if((key >= arr[low]) && (key < arr[mid])){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if((key>arr[mid]) && (key<=arr[high])){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
int main(){
int arr[] = {1,2,3,4,5,-1,-2};
cout<<rota_sort_search(arr,7,3);
    return 0;
}
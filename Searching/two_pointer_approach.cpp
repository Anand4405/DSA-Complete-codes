#include<iostream>
using namespace std;
bool pair_in_sorted_arr(int arr[],int n,int pair){
    int left =0,right=n-1;
    while(right>left){
        if(pair == (arr[left]+arr[right])){
            return true;
        }
        else if((arr[right]+arr[left])>pair){
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}

int main(){
int arr[] = {1,2,3,4,5,6};
cout<<pair_in_sorted_arr(arr,6,12);
    return 0;
}
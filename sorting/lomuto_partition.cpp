#include<iostream>
#include<algorithm>
using namespace std;
void lomuto(int arr[],int l,int h,int p){ // here provide l as first index and high as last index and p is
                                            // index of pivot
    int i = l;
    swap(arr[p],arr[h]);
    for(int j=l;j<=(h-1);j++){
        if(arr[j]<arr[h]){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    swap(arr[h],arr[i]);
}
int main(){
int arr[] = {5,6,7,8,12,36,54,10};
lomuto(arr,0,7,3);
for(int x:arr){
    cout<<x<<" ";
}
    return 0;
}
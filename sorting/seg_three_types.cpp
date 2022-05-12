#include<iostream>
using namespace std;
void lomuto(int arr[],int n){
    int l = 0,h = 0;
    int j=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            l++;
        }
        else if(arr[i]==1){
            h++;
        }
    }
    int kk = n-(l+h);
    // cout<<l<<" "<<h<< " "<<kk<<endl;
    for(int i=0;i<l;i++){
        
        arr[i] = 0;
    }
    for(int i=l;i<l+h;i++){
        arr[i] = 1;
        
    }
    for(int i=l+h;i<n;i++){
        arr[i] = 2;
    }
}

void dutch_algo(int arr[],int n){
    int low=0,mid=0,hi=n-1;
    while(mid<=hi){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++,mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[hi]);
            hi--;
        }
    }
}

int main(){
    int arr[] = {0,1,1,2,0,1,2,0};
    // lomuto(arr,8);
    dutch_algo(arr,8);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}
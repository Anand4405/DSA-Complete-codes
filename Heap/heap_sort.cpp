#include<bits/stdc++.h>
using namespace std;

void Maxheapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i+1,right = 2*i+2;
    if(left<n && arr[largest]<arr[left]) largest = left;
    if(right<n && arr[largest]<arr[right]) largest = right;

    if(largest != i){
        swap(arr[i],arr[largest]);
        Maxheapify(arr,n,largest);
    }
}

void BuildHeap(int *arr,int n){
    for(int i = (n-2)/2;i>=0;i--){   // this is used to correct the array after doing heapify
        Maxheapify(arr,n,i);
    }
}

void heapsort(int *arr,int n){
    BuildHeap(arr,n);
    for(int i=n-1;i>=1;i--){
        swap(arr[0],arr[i]);

        Maxheapify(arr,i,0);
    }
}

int main(){
int arr[] = {50,20,10,4,15};
heapsort(arr,5);
for(auto i:arr){
    cout<<i<<" ";
}
    return 0;
}
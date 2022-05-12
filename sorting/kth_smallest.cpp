#include<iostream>
using namespace std;
int lomuto_partition(int arr[], int r,int l){
int pivot = arr[l];
int j=r-1;
for(int i=r;i<(l);i++){
    if(arr[i]<pivot){
        j++;
        swap(arr[i],arr[j]);
    }
}
swap(arr[j+1],arr[l]);
return j+1;
}

int kth_smallest(int arr[],int n,int k){
    int r=0,l=n-1;
    while(r<=l){
        int p = lomuto_partition(arr,r,l);
        if(p==k-1){
            return p;
        }
        else if(p>k-1){
            l = p-1;
        }
        else{
            r = p+1;
        }
    }
    return -1;
}
int main(){
int arr[] = {4,6,7,9,5,3};
int index = kth_smallest(arr,6,3); // third smallest number
cout<<arr[index];
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int partition(int arr[], int l, int h)
// {   
//     int pivot=arr[h];
//     int i=l-1;
//     for(int j=l;j<=h-1;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[h]);
//     return i+1;
// }

// int kthSmallest(int arr[],int n,int k){
//     int l=0,r=n-1;
//     while(l<=r){
//         int p=partition(arr,l,r);
//         if(p==k-1)
//             return p;
//         else if(p>k-1)
//             r=p-1;
//         else
//             l=p+1;
//     }
//     return -1;
// }
 
// int main() {
	
//     int arr[]={4,6,7,9,5,3};
	
// 	int n=sizeof(arr)/sizeof(arr[0]);int k=3;
	
// 	int index=kthSmallest(arr,n,k);
	
// 	cout<<arr[index];
	
// }
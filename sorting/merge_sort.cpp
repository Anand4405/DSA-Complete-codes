#include<iostream>
#include<algorithm>

using namespace std;
void merge(int arr[],int l,int m,int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int i,j;
    int left[n1],right[n2];
    for(i=0;i<n1;i++){
        left[i] = arr[l+i];
    }
    for(j=0;j<n2;j++){ 
        right[j] = arr[m+j+1];
    }
i=0,j=0;
int k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
            
        }
     
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++]; 
}

void merge_sort(int arr[],int l,int r){
    if(r>l){
        int m = (l+r)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    }

    
}
int main(){
int ar[] = {5,4,6,9,8};
merge_sort(ar,0,4);
for(int x:ar){
    cout<<x<<" "; // time requires is nlogn and space is theta(n)
}
    return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void merge(int arr[], int l, int m, int h){
    
//     int n1=m-l+1, n2=h-m;
//     int left[n1],right[n2];
//     for(int i=0;i<n1;i++)
//         left[i]=arr[i+l];
//     for(int j=0;j<n2;j++)
//         right[j]=arr[m+1+j];    
//     int i=0,j=0,k=l;
//     while(i<n1 && j<n2){
//         if(left[i]<=right[j])
//             arr[k++]=left[i++];
//         else
//             arr[k++]=right[j++];
//     }
//     while(i<n1)
//         arr[k++]=left[i++];
//     while(j<n2)
//         arr[k++]=right[j++];    
// }

// void mergeSort(int arr[],int l,int r){
//     if(r>l){
//         int m=l+(r-l)/2;
//         mergeSort(arr,l,m);
//         mergeSort(arr,m+1,r);
//         merge(arr,l,m,r);
//     }
// }

// int main() {
	
//     int a[]={10,5,30,15,7};
// 	int l=0,r=4;
	
// 	mergeSort(a,l,r);
// 	for(int x: a)
// 	    cout<<x<<" ";
// }
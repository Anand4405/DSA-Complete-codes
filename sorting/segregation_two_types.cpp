#include<iostream>
#include<algorithm>
using namespace std;
void segreagation(int arr[],int n){
    int l=0,h=n-1;
  
    int i=l-1;
    int j = h+1;
    while(true){
    do
    {
        i++;
    } while (arr[i]<0);
    do{
        j--;
    }while(arr[j]>=0);
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);}
}
int main(){
int arr[] = {2,-5,6,65,-54,32,-4};
segreagation(arr,7);
for(int x:arr){
    cout<<x<<" ";
}
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// void sortd(int arr[],int n){
//     int i=-1,j=n;
//     while(true)
//     {
//         do{i++;}while(arr[i]<0);
//         do{j--;}while(arr[j]>=0);
//         if(i>=j)return;
//         swap(arr[i],arr[j]);
//     }
// }

// int main() {
	
//     int arr[]={13,-12,18,-10};
	
// 	int n=sizeof(arr)/sizeof(arr[0]);
	
// 	sortd(arr,n);
	
// 	for(int x:arr)
// 	    cout<<x<<" ";
// }
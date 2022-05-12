#include<iostream>
#include<algorithm>
using namespace std;
void union_(int arr1[],int arr2[],int n1,int n2){

int i=0,j=0;
while(i<n1 && j<n2){
    if(arr1[i]==arr1[i+1]){
        i++;
        continue;
    }
    if(arr2[j]==arr2[j+1]){
        j++;
        continue;
    }
    if(arr1[i]<arr2[j]){
        cout<<arr1[i]<<" ";
        i++;
    }
    else if(arr1[i]>arr2[j]){
        cout<<arr2[j]<<" ";
        j++;
    }
    else if(arr1[i]==arr2[j]){
        cout<<arr1[i]<<" ";
        i++,j++;
    }

}
while(i<n1){
    if(arr1[i]==arr1[i-1]&& i>0){
        i++;
        continue;
    }
    cout<<arr1[i]<<" ";
    i++;
}
while(j<n2){
    if(arr1[j]==arr1[j-1]&& j>0){
        j++;
        continue;
    }
    cout<<arr2[j]<<" ";
    j++;
}
}

int main(){
int arr1[] = {0,2,3,3,5}; 
int arr2[] = {4,4,6,8,8};
union_(arr1,arr2,5,5);
    return 0;
}
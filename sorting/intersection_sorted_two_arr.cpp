#include<iostream>
#include<algorithm>
using namespace std;
void intersection(int arr1[],int arr2[],int n1,int n2){
    for(int i=0;i<n1;i++){
        if(arr1[i]==arr1[i+1]){
            continue;
        }
        for(int j=0;j<n2;j++){
            if(arr2[j]==arr1[i]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}

void optimized_intersection(int arr1[],int arr2[],int n1,int n2){
    int i=0,j=0;
    while(i<=n1 && j<=n2){
        if(arr1[i]==arr1[i+1]){
            i++;
            continue;
        }
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++,j++;
        }
    }
}
int main(){
int arr1[] = {1,2,3,4,5};
int arr2[] = {1,2,3,3,4,5,5};
intersection(arr1,arr2,5,6);
cout<<endl;
optimized_intersection(arr1,arr2,5,6);
    return 0;
}
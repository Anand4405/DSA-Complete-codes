#include<iostream>
#include<unordered_set>
using namespace std;
int union_unsorted(int arr1[],int arr2[],int n1,int n2){
    unordered_set<int>h;
    for(int i=0;i<n1;i++){
        h.insert(arr1[i]);
    }
    for(int j=0;j<n2;j++){
        h.insert(arr2[j]);
    }

    return h.size();
}
int main(){
int arr1[] = {5,4,2,3,6,5,4};
int arr2[] = {6,4,7,8,4,6};
cout<<union_unsorted(arr1,arr2,7,6);
    return 0;
}
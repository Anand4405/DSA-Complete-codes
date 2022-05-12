#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int naive_inter(int arr1[],int arr2[],int n1,int n2){

    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    int res=0;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]==arr1[i+1]){
            i++;
        }
        if(arr2[j]==arr2[j+1]){
            j++;
        }
        if(arr1[i]==arr2[j]){
            res++,i++,j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    return res;
}
int optimized(int arr1[],int arr2[],int n1,int n2){
    unordered_set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }
    int res=0;
    for(int j=0;j<n2;j++){
        if(s.find(arr2[j]) != s.end()){
            res++;
            s.erase(arr2[j]);
        }
    }
    return res;
}
int main(){
int arr1[] = {5,4,3,9,8,6};
int arr2[] = {7,9,1,9,4,8,3};
cout<<naive_inter(arr1,arr2,6,7)<<endl;
cout<<optimized(arr1,arr2,6,7);
    return 0;
}
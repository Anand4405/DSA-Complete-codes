#include<iostream>
using namespace std;
void merge_sorted_arr(int arr[],int brr[],int a,int b){
    int i=0,j=0;
    int res[a+b];
    int k=0;
    while(i<=a&& j<=b){
        if(arr[i]<=brr[j]){
            res[k] = arr[i];
            i++;
             k++;
        }
        else{
            res[k] = brr[j];
            j++;
             k++;
        }
       
    }
    for(int i=0;i<a+b;i++){
        cout<<res[i]<<" ";
    }
}
int main(){
int arr[] = {1,2,6,9,10};
int brr[] = {4,5,12,15,16,20};
merge_sorted_arr(arr,brr,5,6);

    return 0;
}
#include<iostream>
using namespace std;

int hoare_partition(int arr[],int l,int h){
int pivot = arr[l];
int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
        return j;
        swap(arr[i],arr[j]);
    }

}

void q_hoare(int arr[],int l,int h){
    Begin:
        if(l<h){
            int p = hoare_partition(arr,l,h);
            q_hoare(arr,l,p);
           l = p+1;  // q_hoare(arr,p+1,h); tail call elimination
           goto Begin;
        }
}
int main(){
int arr[] = {4,5,6,7,8,3};
q_hoare(arr,0,5);
for(int x:arr){
    cout<<x<<" ";
}
    return 0;
}
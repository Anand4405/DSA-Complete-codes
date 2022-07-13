#include<bits/stdc++.h>
using namespace std;

void initialize(int pre[],int arr[],int n){
    pre[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        pre[i] = pre[i-1]+arr[i];
    }
}

int getSum(int pre[],int qs,int qe){
    if(qs==0) return pre[qe];
    else{
        return pre[qe]-pre[qs-1];
    }
}

void update(int pre[],int arr[],int val,int index,int n){
    int up_value = val-arr[index];
    for(int i=index;i<n;i++)
    {
        pre[i] += up_value;
    }
}


int main(){
int arr[] = {10, 20, 30, 40, 50};
    int n =5;
    int pre_sum[n];
        
    initialize(pre_sum, arr, n);
    
    
	cout << getSum(pre_sum, 0, 2) << " ";
	cout << getSum(pre_sum, 1, 3) << " ";
	
	update(pre_sum, arr, 60, 1, n);
	
	cout << getSum(pre_sum, 0, 2) << " ";
	cout << getSum(pre_sum, 1, 3) << " ";

    return 0;
}
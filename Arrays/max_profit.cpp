#include<iostream>
using namespace std;
int maxprofit(int arr[],int start,int end){
    int profit=0 , currprofit=0;
    if(end<=start){
        return 0;
    }
    for(int i=start;i<end;i++){
        for(int j=i+1;j<end;j++){
            if(arr[j]>arr[i]){
                currprofit = arr[j]-arr[i]+maxprofit(arr,start,i-1)+maxprofit(arr,j+1,end);
                profit = max(profit,currprofit);
            }
        }
    }
    return profit;
}

int optimized_profit(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
            profit += arr[i]-arr[i-1];
        }
    }

    return profit;
}

int main(){
int arr[6] = {1,5,3,6,9,8};
cout<<maxprofit(arr,0,5)<<endl;
cout<<optimized_profit(arr,6);
    return 0;
}
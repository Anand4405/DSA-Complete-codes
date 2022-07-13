#include<bits/stdc++.h>
using namespace std;

int taimur(int arr[]){

    int res = 0;
    for(int i=1;i<4;i++)
    {
        if(arr[i] < arr[0]){
            res++;
        }
    }
    return 4-res-1;
}

int main(){

    int n;
    cin>>n;
    int res[n];
    for(int i=0;i<n;i++)
    {
        int arr[4];
        for(int j=0;j<4;j++)
        {
            cin>>arr[j];
        }
        res[i] = taimur(arr);
    }
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<endl;
    }

    return 0;
}
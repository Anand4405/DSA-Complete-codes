#include<bits/stdc++.h>
using namespace std;

int constructST(int arr[],int tree[],int ss,int se,int si){
    if(ss==se){
        tree[si] = arr[ss];
        return arr[ss];
    }
    int mid = (ss+se)/2;
    tree[si] = constructST(arr,tree,ss,mid,2*si+1)+constructST(arr,tree,mid+1,se,2*si+2);

    return tree[si];
}

int main()
{
	int arr[] = {10, 20, 30, 40}, n= 4;
    int tree[4*n];

    cout<<constructST(arr,tree,0,n-1,0);

    return 0;
}
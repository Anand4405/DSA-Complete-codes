#include<bits/stdc++.h>
using namespace std;
const int r=4 , c=4;
int largest_rect_histo(int arr[],int n){
    int res = arr[0];
    for(int i=0;i<n;i++){
        int curr = arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>=arr[i]) curr += arr[i];
            else break;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]) curr += arr[i];
            else break;
        }
        res = max(res,curr);
    }
    return res;
}
int max_rect_one(int mat[r][c]){
int res = largest_rect_histo(mat[0],c);
for(int i=1;i<r;i++){
    for(int j=0;j<c;j++){
        if(mat[i][j]==1){
            mat[i][j] += mat[i-1][j];
        }
    }
    res = max(res,largest_rect_histo(mat[i],c));
}
return res;
}
int main(){
int mat[][c] = {{0,1,1,0},
                {1,1,1,1},
                {1,1,1,1},
                {0,1,1,0}};
cout<<max_rect_one(mat);
    return 0;
}
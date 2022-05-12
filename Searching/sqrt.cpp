#include<iostream>
using namespace std;
int square_root(int n){
    int ans;
    int low=1,high=n;
    while(low<=high){
        int mid = (low+high)/2;
        int msq = mid*mid;
        if(msq==n){
            return mid;
        }
        else if(n <= msq){
            high = mid-1;
        }
        else{
            low = mid+1;
            ans = mid;
        }
    }

    return ans;
}
int main(){
int n = 10;
cout<<square_root(18);
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
int max_guest(int a[],int d[],int n){
    sort(a,a+n),sort(d,d+n);
    int i=1,j=0,res=1,cur=1;
    while(i<n&& j<n){
        if(a[i]<=d[j]){
            cur++,i++;
        }
        else{
            cur--,j++;
        }
        res = max(res,cur);
    }
return res;
}

int main(){
int a[] = {1000 , 800, 700,830};
int d[] = {1100,900,840,950};
cout<<max_guest(a,d,4);
    return 0;
}
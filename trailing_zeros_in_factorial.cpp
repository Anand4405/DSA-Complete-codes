#include<iostream>
using namespace std;
int countrailingzeros(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res = res+(n/i);
    }
    return res;
}
int main(){
    int n =5;
    int sum=1;
    int res=0;
    for(int i=2;i<=5;++i){
    sum *=i;
}
while(sum%10==0){
res++;
sum /=10;
}
cout<<res<<endl;
cout<<countrailingzeros(10);
    return 0;
}


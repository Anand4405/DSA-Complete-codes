#include<iostream>
using namespace std;
int count_bits(int n){
    int res=0;
    while(n > 0){
    if(n%2==1){
        res++;
        n= (n>>1);
    }
    else{
        n = (n>>1);
    }}
    return res;
}

// brien kerrignan algorithm

int ct_bits(int n){
    int res=0;
    while(n>0){
        n = (n&(n-1));
    res++;
    }

    return res;
}

int main(){
cout<< count_bits(5);
    return 0;
}
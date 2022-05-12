#include<iostream>
using namespace std;

int comp_power(int n,int k){
    if (k==0){
        return 1;
    }
    return n*comp_power(n,k-1);
}

int efficient_pow(int n,int k){

    if(k==0){
        return 1;
    }
    int temp = efficient_pow(n,k/2);
    temp = temp*temp;
    if(k%2==0){
        return temp;
    }
    return temp*n;
}
int main(){
cout<<comp_power(2,3)<<endl;
cout<<efficient_pow(2,3);
    return 0;
}
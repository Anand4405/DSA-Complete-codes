#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int sum_of_naturalnum(int n){
    if(n==1 || n==0 ){
        return n;
    }
    return n+sum_of_naturalnum(n-1);
}
int main(){
cout<<fib(5)<<endl;
cout<<sum_of_naturalnum(4);
    return 0;
}
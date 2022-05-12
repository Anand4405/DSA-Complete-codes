#include<iostream>
using namespace std;
int tail_factorial(int n,int k=1){
    if(n==0 || n==1){
        return k;
    }

    return tail_factorial(n-1,n*k);
}
int main(){
cout<< tail_factorial(5);
    return 0;
}
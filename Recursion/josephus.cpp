#include<iostream>
using namespace std;

int jos(int n, int k){
    if(n==1){
        return 0;
    }  // if indexes begin from 1  then add 1 to final result

    return (jos(n-1,k)+k)%n;
}

int main(){
cout<<jos(10,4);
    return 0;
}
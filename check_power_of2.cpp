#include<iostream>
using namespace std;
bool pow_of2(int n){
if(n==0){
    return false;
}
return ((n&(n-1))==0);
}
int main(){

    return 0;
}
#include<iostream>
using namespace std;
void divisors(int n){
    int i;
    for( i=1;i*i<=n;i++){
        if(n%i==0){

            cout<<i<<" ";
        // if(i !=(n/i)){
        //     cout<<n/i<<" ";
        // }
        }
    }

    for(;i>=1;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}
int main(){
divisors(15);
    return 0;
}
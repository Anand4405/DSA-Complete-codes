#include<iostream>
using namespace std;
void kth_bitset(int n,int k){

    if(n &(1<<(k-1)) !=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    if((n>>(k-1))&1 !=0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
int main(){
kth_bitset(5,3);
    return 0;
}
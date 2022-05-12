#include<iostream>
using namespace std;

bool check_prime(int a){
    if(a==1){
        return false;
    }
    if(a==2 || a==3){
        return true;
    }
    if(a%2==0 || a%3==0 ){
return false;
    }
    for(int i=5;i*i<(a);i=i+6){  // optimized prime number
        if(a%i==0 || a%(i+2)==0){
            return false;
        }
    }
    return true;
}
int main(){
cout<<check_prime(2);
for(int i=0;i<5;i++){
    cout<<i<<" ";
}
    return 0;

}
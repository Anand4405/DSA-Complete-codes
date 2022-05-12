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

void prime_factors(int n){
    for(int i=2;i<n;i++){
        if(check_prime(i)){
            int x = i;
            while(n%x ==0){
                cout<<i<<" ";
                x = x*i;
            }
        }
    }
}

void optimized_prime_factor(int n){
                            // more optimized prime factors
    if(n<=1){
        return ;
    }
    while(n%2==0){
        cout<<2<<" ";
        n /= 2;
    }
    while(n%3==0){
        cout<<3<<" ";
        n /= 3;
    }
    for(int i=5;i*i<=n;i=i+6){
        while(n%i==0){
            cout<<i<<" ";
            n /=i;
        }

         while(n%(i+2)==0){
            cout<<i+2<<" ";
            n /=(i+2);
        }
    }

    if(n>3){
        cout<<n;
    }
}
int main(){
prime_factors(12);

optimized_prime_factor(65);
    return 0;
}
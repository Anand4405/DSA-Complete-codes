#include<iostream>
using namespace std;
int gcd(int a,int b){  // eluidean algorithm basic
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int optimized_gcd(int a,int b){
    if(b==0){
        return a;
    }
    return optimized_gcd(b,a%b);
}
int main(){
int a=10,b=3;
int c = min(a,b);
while(c>=1){
    if(a%c==0 && b%c==0){
        break;
    }
    c--;
}
cout<<c<<endl;

cout<<gcd(25,22)<<endl;
cout<<optimized_gcd(130,26);
    return 0;
}
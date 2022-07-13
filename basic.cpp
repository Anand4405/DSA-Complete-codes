#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
int sumfdigits(int n){
    if(n==0){
        return 0;
    }
    return 1+sumfdigits(n/10);
}
int &fun(){
    static int i=5;
    return i;
}
int digsum(int n){
    if(n==0){
        return 0;
    }
    return (n%9==0)? 9:(n%9);
}

// int countdigit(int n){
//     return floor(log(10*n)+1);
// }
int main(){
    cout<<12/10<<endl;
    int n=256,sum=0;
    while(n!=0){
        n /=10;
        sum++;
    }
cout<<sumfdigits(56489)<<endl;
    cout<<sum;

    int c = 100;
    string s = to_string(c);
    cout<<s<<endl;
    cout<<digsum(163);
cout<<endl;
    fun() = 30;
    cout<<fun()<<endl;
int ii = 0.4;
static float jj =0.4;
if(ii==jj){
    cout<<"match"<<endl;
}else if(jj>ii) cout<<"Not matching";

    return 0;
}
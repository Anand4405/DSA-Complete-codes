#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
cout<<fact(5)<<endl;
int sum =1;
int n = 5;
if(n==0 ||n==1){
    return 1;
}
for(int i=2;i<=5;++i){
sum *=i;
}
cout<<sum;
    return 0;
}
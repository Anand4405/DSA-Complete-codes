#include<iostream>
using namespace std;
int sum_digits(int n){
    if(n<=9){
        return n;
    }
    return (n%10)+sum_digits(n/10);
}
int main(){
cout<<sum_digits(1204);
    return 0;
}
#include<iostream>
using namespace std;
int optimized_gcd(int a,int b){
    if(b==0){
        return a;
    }
    return optimized_gcd(b,a%b);
}
int optimized_lcm(int a,int b){
    return a*b/optimized_gcd(a,b);
}
int main(){
int a=15,b=3;
int i = max(a,b);
while(i<=(a*b)){
    if(i%a==0 && i%b==0){
        break;}
        i++;

}
//    cout<<i;

cout<<optimized_lcm(10,15);

    return 0;
}
#include<iostream>
using namespace std;
void deci_to_binary(int n){
    if(n==0){
        return;
    }
    deci_to_binary(n/2);
    cout<<n%2;
}
void printN(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    printN(n-1);
}

void Nprint(int n){
    if(n==0){
        return ;
    }
    Nprint(n-1);
    cout<<n<<endl;
}
int main(){
// deci_to_binary(8);
printN(8);
Nprint(5);
    return 0;
}
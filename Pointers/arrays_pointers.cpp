#include<bits/stdc++.h>
using namespace std;


int main(){
int a[10];
cout<<a<<" "<<&a[0]<<endl;
a[0]  =6;
cout<<*a<<endl;

a[1] = 2;
cout<<*(a+1);  // in pointers we points to 8 byte memory but nothing like that in arrays 
                // array can not be reassigned. Pointers can be reassigned
    return 0;
}
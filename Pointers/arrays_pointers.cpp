#include<bits/stdc++.h>
using namespace std;


int main(){
int a[10];
cout<<a<<" "<<&a[0]<<endl;  // arr[i] = *(arr+i);
a[0]  =6;
cout<<*a<<endl;

a[1] = 2;
cout<<*(a+1)<<endl;  // in pointers we points to 8 byte memory but nothing like that in arrays 
  a[1] = 5;              // array can not be reassigned. Pointers can be reassigned
int i=1;
cout<<i[a]<<endl; // this is because i[a] = *(i+a)

// a = a+1 // this is wrong arrays can not be reassigned
int *ptr = &a[0];
cout<<ptr<<endl;

ptr = ptr+1;
cout<<ptr<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void increamen(int *p){
    (*p)++;
    // p = p+1; // this doesnot changes the value in main
}

int main(){

int i=3;
int *p = &i;
cout<<*p<<endl;
increamen(p);
cout<<*p<<endl; // value of p changes.

// int *ptr = 0;
// int aa = 10;
// *ptr = aa; // this method is wrong
// cout<<*ptr<<endl;
    return 0;
}
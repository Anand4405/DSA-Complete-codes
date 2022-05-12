#include<iostream>

using namespace std;

int main(){
int x=3,y=5;
unsigned int a=5;
cout<<(x&y) << endl;
cout<<(x^y) <<endl;
cout<<(x|y) <<endl;

cout<<(x<<1)<<endl; // left shift means whole shifted to left and adds zero to last

cout<<(~a);
    return 0;      // (x<<y) = x*pow(2,y)
}
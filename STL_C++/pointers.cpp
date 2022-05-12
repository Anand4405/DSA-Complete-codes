#include<iostream>
using namespace std;

int main(){
int x=5;
int *p;
int *pp = &x;  // pointer have always same size, array always passes as pointers
p = &x;
string *s;
cout<<x<<endl;
cout<<*p<<endl;
cout<<p<<endl;
cout<<*pp<<endl;
cout<<sizeof(s)<<endl;
cout<<sizeof(*p);

    return 0;
}
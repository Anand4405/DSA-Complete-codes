#include<bits/stdc++.h>
using namespace std;

class A{         // this is hybid inheritance
protected:
int a;
public:
void get_a(){
    std::cout<<"Enter the value of a \n";
    cin>>a;
}

};
class B{
protected:
int b;
public:
void get_b(){
    std::cout<<"Enter the value of b \n";
    cin>>b;
}

};


class C:public B,public A{
public:

void mul(){
get_a();
get_b();
std::cout<<"The product of a and b is "<<a*b<<endl;
}

void display(){
    std::cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
}

};

int main(){
C c;
c.mul();
c.display();
    return 0;
}
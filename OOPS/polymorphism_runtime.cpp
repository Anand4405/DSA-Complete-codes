#include<bits/stdc++.h>
using namespace std;

class Vehicle{
public:
string color;

virtual void print(){

    cout<<"Vehicle \n";
}

};
class Car: public Vehicle{
public:
int numGears;

virtual void print(){

    cout<<"Car \n";  // this is function overriding 
}

};


int main(){
Vehicle *v1 = new Car; // by adding virtual keyword before print so we got runtime polymorphism

v1->print();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Vehicle{
public:
string color;

void print(){

    cout<<"Vehicle \n";
}

};
class Car: public Vehicle{
public:
int numGears;

void print(){

    cout<<"Car \n";  // this is function overriding 
}

};

int main(){
Car c;
c.print();

Vehicle *v1 = new Vehicle;
v1->print();
Vehicle *v2;
v2 = &c; // we can point base class object to derived class but not viceversa
v2->print();
    return 0;
}
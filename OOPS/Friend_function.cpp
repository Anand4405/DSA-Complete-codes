#include <bits/stdc++.h>
using namespace std;
// private properties also available to friend functions

class Bus
{
public:
    void print();
};
void test();




class Truck
{
private:
    int x;

protected:
    int y;

public:
    int z;
    // friend void Bus::print(); // this makes only print function as friend function of this class
    friend class Bus; // this makes entire Bus class as friend to parent class
    friend void test();
};


void Bus::print(){ // we cant make initialize  function inside the
    Truck t;
    t.x = 5;
    t.y = 20;
    t.z = 10;
cout<<t.x<<" "<<t.y<<" "<<t.z<<endl;
}

void test(){
    cout<<"Checking friend function \n";  // friend function dont have access of "this" pointer because they are not members of class
    Truck t;
    t.x = 5;
    t.y = 20;
    t.z = 10;
cout<<t.x<<" "<<t.y<<" "<<t.z<<endl;
}

int main()
{
Bus b;
b.print();
test();
    return 0;
}
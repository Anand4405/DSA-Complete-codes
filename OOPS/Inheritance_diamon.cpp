#include<bits/stdc++.h>
using namespace std;

class Vehicle{

private:
int maxspeed;

protected:
int numTyres;
public:
string color;

// Vehicle(){
//     cout<<"The default construtor is called\n";
// }

void print(){
    cout<<" Vehicle \n";

}

Vehicle(int z){
    cout<<"Parameteized constuctor of vehicle  "<<z<<endl;
    maxspeed = z;
}

~Vehicle(){
    cout<<"Destrutor is called \n";
}

};

class car :virtual public Vehicle{

public:
int numGears;
car():Vehicle(5){
    cout<<"Default construtor of car is called \n";
}

~car(){
    cout<<"Default destrutor of car is called \n";
}

void print(){
    cout<<"The number of tyres : "<<numTyres<<endl;
    cout<<"The number of Gears : "<<numGears<<endl;
    cout<<"The color is : "<<color<<endl;
}

};

class Truck: virtual public Vehicle{ // if we add virtual then only copy of Vehicle comes to Bus
public:
Truck():Vehicle(3){
    cout<<"The default constructor of Truck \n";
}

};

class Bus:public car,public Truck{
public:
Bus():Vehicle(9)  
{cout<<"The BUS constructor \n";}

void print(){
    cout<<"Bus print \n"; // this is one way to remove ambuiguity
}
};



int main(){

Bus b;
// b.print();
// b.car::print(); // to resolve ambuigity we specified which class's print needs to be printed
// b.Truck::print();
    return 0;
}
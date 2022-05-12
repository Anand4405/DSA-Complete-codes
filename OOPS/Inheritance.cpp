#include<bits/stdc++.h>
using namespace  std;

class vehicle{
private:
int maxSpeed;

protected:
int numTyres;

public:
string color;

};

class car:public vehicle{ 
    public:
    int numGears;


    void print(){
        cout<<numTyres<<" "<<color<<" "<<numGears<<endl;
    }

};



int main(){

vehicle v;
v.color = "pink";

car c;
c.numGears = 5;
c.print();

    return 0;
}
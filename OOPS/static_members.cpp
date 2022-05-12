#include<bits/stdc++.h>
using namespace std;

class student{

public:
int age;
int rollnumber;
static int totalStudents; // static means property depends upon class not on objects

student(){
    totalStudents++; // whenever constructor called increament in totalstudents by 1
}

static int getTotalstudents(){  // inside static functions we can use only static data members and static functions.
    return totalStudents;     // in this there is not 'this' keyword.
}

};

int student::totalStudents = 0; // In this way we have to initialize static properties. We cant initialize in the class .
                                 // we need to initialize outside the class

int main(){

student s1;

cout<<student::totalStudents<<endl; // in this way we need to access static properties. 
                                    //:: is scope resolution operator
cout<<s1.totalStudents<<endl; // this is not good way to access but we can access
// s1.totalStudents = 50;
student s2;
cout<<s2.totalStudents<<endl;
student s3;
cout<<s2.totalStudents<<endl;
cout<<student::getTotalstudents()<<endl;
    return 0;
}
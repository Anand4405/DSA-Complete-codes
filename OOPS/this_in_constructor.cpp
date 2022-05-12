#include<bits/stdc++.h>
using namespace std;
class student{
    public:
  int rollnumber;
  int age;
  public:
  student(int rollnumber){
      cout<<"Value of this is "<<this<<endl;
      this->rollnumber = rollnumber;   // in this way we need to set parameter if we have same name of parameter and argument
    cout<<"Constructor 1 is called "<<endl;
  }
  student(int a,int r){
      this->age = a; // same as age = a; this is optional way to create when name of parameter and argument is not same

      this->rollnumber = r;
      cout<<"Constructor 2 is called "<<endl;
      cout<<"value of this is "<<this<<endl;

  }

};

int main(){
student s1(5,7);
cout<<"Address of s1 is "<<&s1<<endl;
student s2(21,87);
student s3(s1); // s3 having all the values of s1 . 
                // this is done by copy constructor which automatically generates when class is created
cout<<s3.age<<endl;
cout<<s2.rollnumber<<endl;

// ***************************************
student *s4 = new student(45,36);
student s5(*s4); // we need to derefer the s4 (dynamic allocation) while passing to s5
student *s6 = new student(*s4);
student *s7 = new student(s2);
cout<<s5.rollnumber<<endl;
s2 = s1; // copy assigment operator. this is used to make same value of s2 as s1.. as s1 and s2 are already created
*s4 = s2; // for dynamic allocation copy assignment operator
 cout<<s2.age<<endl; 
    return 0;
}
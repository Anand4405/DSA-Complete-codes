#include<bits/stdc++.h>
// #include "student.cpp" // in this way we can attach other files to this file 
using namespace std;

class student{
    public:
    int rollnumber;
    int marks;

    private:
    int age;

    public:
    int getAge(){
        return age;
    }
    void setAge(int a){
        age = a;
    }
};

int main(){
student s1;  // statically object is created
s1.rollnumber = 54;
s1.marks = 21;
s1.setAge(24);
student *s2 = new student;  // dynamically object is created

(*s2).marks = 59;
(*s2).rollnumber = 88;
cout<<(*s2).marks<<endl;
cout<<s1.rollnumber;
s2->marks = 12;
cout<<endl<<s2->marks;
    return 0;
}
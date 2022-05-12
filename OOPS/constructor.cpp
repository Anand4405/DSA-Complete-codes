#include<bits/stdc++.h>
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
    student(){
        cout<<"Our constructor is called"<<endl;
    }
    student(int roll){
        rollnumber = roll;
        cout<<"Constructor 2 is called"<<endl;
    }
    student(int a,int r){
        age = a;
        rollnumber = r;
        cout<<"Constructor 3 is called"<<endl;
    }
    void display(){
        cout<<"Display function called"<<endl;
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

cout<<s1.rollnumber<<endl;
student s2(52);
student s3(45,87);
cout<<s3.getAge()<<endl;
    return 0;
}
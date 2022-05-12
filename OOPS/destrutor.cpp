#include<bits/stdc++.h>
using namespace std;

class student{

public:
int age;
int rollnumber;
student(){
    cout<<"Constructor 1 is called"<<endl;
}
student(int a,int r){
    age = a;
    rollnumber = r;
    cout<<"Constructor is called \n";
}
~student(){  // destrutor deallocates the memory . it is called at the end when scope/use of class is finished
    cout<<"Destructor is called"<<endl;
}

};

int main(){
student s1(20,73);
cout<<s1.age<<" "<<s1.rollnumber<<endl;
student* s2 = new student(5,24);
// delete(s2);
student s3 = *s2;
    return 0;
}
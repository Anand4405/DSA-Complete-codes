#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int age;
    const int rollnumber;
    int &x;
    student(int r,int a):rollnumber(r),x(this->age){
        // this->rollnumber = rollnumber;
    age = a;
    }

    void display(){
        cout<<age<<" "<<rollnumber<<endl;
    }
};

int main(){
student s1(54,87);
// s1.age = 19;
s1.display();
    return 0;
}
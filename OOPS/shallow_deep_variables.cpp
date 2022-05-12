#include<bits/stdc++.h>
using namespace std;

class student{
    int age;
    public:
    char *name;
    student(int age ,char *name){
        this->age = age;
        // shallow copy
        // this->name = name;
        // deep copy .. this means if we change name but it wnot affect this name;
        this->name = new char[strlen(name)+1]; // we created new space and then copied +1 taken for \0
        strcpy(this->name,name);
    }
    student (student const &s){ // our copy constructor
                        // after creating our copy contructor ,inbuilt copy constructor is not available
                        // so we need to pass &s
        this->age = s.age;

        this->name = new char[strlen(s.name)+1];
        strcpy(this->name,s.name);

    }
    void display(){
        cout<<this->name<<" "<<this->age<<endl;
    }
};

int main(){
    char name[] = "ANand";
student s1(20,name);
s1.display();
name[2] = 'p';
// student s2(54,name);
student s2(s1); // inbuilt copy constructor is shallow copy
s2.name[1] = 'x';
s2.display();
s1.display();
    return 0;
}
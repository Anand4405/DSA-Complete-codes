#include<iostream>
using namespace std;
struct point
{
    /* data */
    int x,y;
};

struct student{
    int x;
    string name;
    string address;
};

int main(){
point p;
p.x = 10;
p.y = 15;

student s = {10,"Anand","Khed"};
cout<<s.name;
    return 0;
}
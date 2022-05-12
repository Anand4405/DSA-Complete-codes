#include<bits/stdc++.h>
using namespace std;

struct Person{
int age;
float height;

Person(int a,float h){
    age = a;
    height = h;
}


};

struct mycmp{

    bool operator()(Person const &p1,Person const &p2){
        return p1.height<p2.height;

    }
};

int main(){

priority_queue<Person,vector<Person>,mycmp>pq;
Person p1(4,15);
Person p2(6,2);
pq.push(p1);
pq.push(p2);
pq.top();


    return 0;
}
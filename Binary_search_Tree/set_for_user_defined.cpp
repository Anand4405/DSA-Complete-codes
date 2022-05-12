#include<bits/stdc++.h>
using namespace std;
struct Test{
int x;

bool operator<(const Test &t) const{
    return (this->x < t.x);
}

};

int main(){
set<Test>s;

s.insert({5});
s.insert({82});
s.insert({21});
for(Test t:s){
    cout<<(t.x)<<" ";
}

    return 0;
}
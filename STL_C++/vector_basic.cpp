#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v;
cout<<v.size();
vector<int> v2(5,1);
cout<<v.capacity();
v.push_back(5);
cout<<v.capacity()<<endl;
v.push_back(9);
v.pop_back();
    return 0;
}
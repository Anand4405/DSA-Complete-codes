#include<bits/stdc++.h>
using namespace std;
struct stack{
    vector<int>v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
    int top(){
        return v.back();
    }
};

int main(){

    return 0;
}
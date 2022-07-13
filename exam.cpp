#include<iostream>
using namespace std;
union myType{
    char c;
    unsigned int i;
} u;
int main(){
    // u.c = 'Y';
    // u.i = 66;
    // cout<<u.c<<" "<<u.i;
    // int x=10;
    // int &ref = x;
    // ref = 20;
    // cout<<x<<" ";
    // x = 30;
    // cout<<ref;
    // int i =0.7;
    // static float j = 0.7;
    // if(i==j){
    //     cout<<"same";
    // }else if(i<j){
    //     cout<<"less j";
    // }else{
    //     cout<<" less k";
    // }
    return 0;
}
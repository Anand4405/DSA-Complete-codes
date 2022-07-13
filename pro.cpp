#include<bits/stdc++.h>
using namespace std;
void func(){
    static int tmp =10;
    cout<<tmp<<" ";
}
int tmp = 20;
int main(){
int x=10;
int &ref = x;
ref = 30;
cout<<x<<" ";
x = 40;
cout<<ref<<endl;

do{
    cout<<"Inside the loop"<<endl;
}while(0);
cout<<"outside the loop"<<endl;

cout<<tmp<<endl;
func();
cout<<tmp;



    return 0;


}

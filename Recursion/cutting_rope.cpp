#include<iostream>
using namespace std;
int _cu(int n,int a,int b,int c){

    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res = max(_cu(n-a,a,b,c),_cu(n-b,a,b,c),_cu(n-c,a,b,c));
    if(res==-1){
        return -1;
    }
    return res+1;
}
int main(){
cout<<_cu(10,2,2,3);
    return 0;
}
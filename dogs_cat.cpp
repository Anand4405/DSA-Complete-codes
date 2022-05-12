#include<bits/stdc++.h>
using namespace std;

bool issatisfy(int a,int b,int c,int x,int y){
    if(x==0 && y==0) return true;
    if(a+b+c < x+y){
        return false;
    }
    if(c==0){
        if(x<=a && y<=b){
            return true;
        }else{
            return false;
        }
    }
    if(a+c >= x ){
        if(a<x){
        if((a+c -x)+b >= y){
            return true;
        }else
        return false;
    }else{
        if(b+c>=y){
            return true;
        }
        return false;
    }
    }else return false;
   
}

int main(){
int n;
cin>>n;
bool arr[n];
for(int i=0;i<n;i++){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    arr[i] = issatisfy(a,b,c,x,y);
}

for(int i=0;i<n;i++){
    if(arr[i]){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}
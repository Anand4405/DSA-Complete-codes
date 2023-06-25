#include<bits/stdc++.h>
using namespace std;


int main(){
int i =10;
int *p = &i;
cout<<&i<<endl;
cout<<p<<endl;
 p +=1; // it increases the by 4
 cout<<&p<<" "<<p<<endl;
 
cout<<sizeof(p)<<endl;
char c = 'a';
char *cc = &c;
cout<<sizeof(c)<<endl;
cout<<sizeof(cc)<<endl;

int j;
cout<<j<<endl;
 j+=1; 
 cout<<j<<endl;
 int *pp;
 cout<<pp<<endl;
 pp++;
 cout<<pp;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
char str[] = "gfgh"; 

string ss = "fger";
char str2[] = {'a','b','c','\0'};
int arr[] = {1,2,3,4};
cout<<sizeof(str)<<endl;
cout<<str2<<endl;
cout<<sizeof(arr)/sizeof(arr[0])<<" "<<sizeof(str2);
    return 0;
}
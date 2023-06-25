#include<bits/stdc++.h>
using namespace std;


int main()
{
int arr[] = {4,5,6,7};
int *ptr = (arr+1);
cout<<*ptr<<endl;
char b[] = "xyzwer";
char *c = &b[0];
cout<<*c<<" "<<c<<endl;
char *d;
d = b;
d +=3;
cout<<d<<endl;

float arr1[] = {10.5,10.0,13.5,90.5,56.3};
float *ptr1 = &arr1[0];
float *ptr2 = ptr1+3;
cout<<ptr1<<" "<<ptr2<<endl;
cout<<*ptr2<<" "<<ptr2-ptr1<<endl;

// **************************************
int a = 10;
int *pp = &a;
int **qq = &pp;
int bc = 20;
*qq = &bc;
(*pp)++;
cout<<a<<" "<<bc<<endl;
    return 0;
}
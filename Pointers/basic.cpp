#include<bits/stdc++.h>
using namespace std;


int main()
{
    int num = 5;
    cout<<num<<endl;

    // Address of operator - &
    cout<<"Address of num is "<<&num<<endl;

    // pointer stores the address
    // int *ptr; // never do this because it may point to any memory and we may change that so it's bad practise

    int *ptr = &num;
    cout<<ptr<<endl;
    (*ptr)++;
    cout<<*ptr<<" "<<num<<endl;

    // copying of pointer
    int *q = ptr;
    cout<<*q<<endl;
    *q = *q + 1;
    cout<<*q<<endl;
    cout<<"Before increment "<<q<<endl;
    q = q+1;
    cout<<"After increment "<<q<<endl;
    

}
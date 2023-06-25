#include<bits/stdc++.h>
using namespace std;


int main()
{
int arr[10] = {1,2,3,4,5};
cout<<&arr[0]<<endl;
cout<<&arr<<endl;  // all three will print same
cout<<arr<<endl;

int *ptr = &arr[0];
cout<<&ptr<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;
    return 0;
}
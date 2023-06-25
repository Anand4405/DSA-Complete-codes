#include<bits/stdc++.h>
using namespace std;


int main()
{
int arr[10] = {0 ,1,2,3,4,5};
char ch[6] = "anand";
cout<<arr<<endl;
cout<<ch<<endl; // cout is implemented differently for charactar arrays and integer arrays
char *c = &ch[0];
cout<<c<<endl;
c = &ch[1];
cout<<c<<endl;
    return 0;
}
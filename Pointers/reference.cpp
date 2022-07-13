#include <bits/stdc++.h>
using namespace std;

void increament(int &n){
    n++;
}

// int &f(int n){
//     int a = n;  // we can't return reference or pointer of any local variable . It's memory is deleted 
//                //when function is return so this is not valid
//     return a;
// }

// int *f2(){
// int *n ;
// *n = 5;
// return n;
// }

int main()
{
    int i = 10;
    int &j = i; // this is reference variable which points to address of i. It is not creating any new memory
    i++;
    // int &p; // we can't do this beacuse we have to give initializer for reference
    // p = i;
increament(i);
    cout << j << endl;
    j++;
    cout << i << endl;

    int k = 100;
    j = k; // memory location is same so i and j both get value 100
    cout << j << endl;

    cout << i << endl;
    



    return 0;
}
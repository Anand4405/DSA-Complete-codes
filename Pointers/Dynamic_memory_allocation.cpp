#include<bits/stdc++.h>
using namespace std;


int main(){

int *p = new int(6);
// *p = 20;
cout<<*p<<endl;

int *arr = new int[50];  // dynamic allocation of array
     int n;
     cin>>n;
     int *arr2 = new int[n]; // we can allocate memory on runtime and we can decide size of array on 
                            //runtime this uses heap and static allocation uses stack                           
                            // we need to free dynamic memory allocation memory. It automatically wasnt deleted with scope
                            // delete keyword we need to use for making space free
  delete(arr); //this is for deleting single number . this deletes the number to which arr is pointing .arr is still there
  arr = new int(10); 
  cout<<*arr<<endl;

  delete [] arr2; // this is for deleting dynamic array 
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
struct point
{
    /* data */
    int x,y;
};
bool mycmp(point p1,point p2){
    return (p1.x<p2.x);    
}
int main(){
point arr[] = {{1,13},{6,8},{4,9}};
sort(arr,arr+3,mycmp);
for(auto i:arr){      // sort function takes nlogn time ..it internally uses quick sort .. 
//if quicksort taking more time than nlogn then it uses heap sort if array is too small then it uses insertion sort
    cout<<i.x<<" "<<i.y<<endl;
}
    return 0;
}
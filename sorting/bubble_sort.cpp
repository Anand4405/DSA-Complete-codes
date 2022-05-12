#include<iostream>
using namespace std;
// it is stable sort . it cannot changes original order of same element
int main(){
int arr[] = {4,6,7,9,5};
bool swaped = false;
for(int i=0;i<4;i++){
    swaped = false;
    for(int j=0;j<4-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swaped = true;
        }
        if(swaped==false){
            break;
        }
    }
    }
    for(int x:arr){
        cout<<x<<" ";
    }

    return 0;
}
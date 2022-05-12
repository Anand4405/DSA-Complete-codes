#include<iostream>
#include<vector>
using namespace std;

int main(){
int m=3,n=2;
// int arr[3][2] = { {2,3}, // we need to define second value always .only first dimension we can omit.
//                   {4,5},
//                   {9,1}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
    // }
    // int *arr[m];
    // for(int i=0;i<m;i++){
    //     arr[i] = new int[n];
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         arr[i][j] = 10+j+i;
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int> arr[m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i].push_back(10);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    
    return 0;
}
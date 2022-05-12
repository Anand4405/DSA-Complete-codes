#include<iostream>
using namespace std;
const int R=3,C=3;
void search_sorted_row_col(int arr[R][C],int key){
    int i= 0,j=C-1;
    while(i<R && j>=0){
        if(arr[i][j]==key){
            cout<<i<<" "<<j;
            return ;
        }
       else if(arr[i][j]>key){
            j--;
        }
        else if(arr[i][j] <key){
            i++;
        }
        
    }
}
int main(){
int arr[R][C]= {{1,2,3},{2,3,4},{4,5,6}};
int k=0;

search_sorted_row_col(arr,3);
    return 0;
}
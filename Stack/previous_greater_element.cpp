#include<bits/stdc++.h>
using namespace std;

void pre_greater(int *arr,int n){
    stack<int> s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
    
        while(s.empty()==false && s.top()<=arr[i]){
            // k= s.top();
            s.pop();
        }
        int pg = (s.empty()? -1:s.top());
        cout<<pg<<" ";
        s.push(arr[i]);
    }
}

int main(){
int arr[] = {45,7,0,1,2,3,50,2,4,6,9};
pre_greater(arr,11);
    return 0;
}
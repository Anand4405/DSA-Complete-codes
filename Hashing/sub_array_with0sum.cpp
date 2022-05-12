#include<iostream>
#include<unordered_set>
using namespace std;
bool naive_issumzero(int arr[],int n){
    int currsum;
    for(int i=0;i<n;i++){
        currsum = 0;
        for(int j=i;j<n;j++){
            currsum +=arr[j];
            if(currsum==0){
                return true;
            }
        }
    }
    return false;
}

bool optimized(int arr[],int n){
    int prefix_sum=0;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        prefix_sum += arr[i];
        if(s.find(prefix_sum)!= s.end()){
            return true;
        }
        if(prefix_sum==0){
            return true;
        }
        s.insert(prefix_sum);
    }
    return false;
}
int main(){

int arr[] = {4,6,-10,2,3};
cout<<naive_issumzero(arr,5)<<endl;
cout<<optimized(arr,5);
    return 0;
}
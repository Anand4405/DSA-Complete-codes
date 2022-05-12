#include<iostream>
#include<unordered_set>
using namespace std;
int naive_distinct_num(int arr[],int n){
bool flag = false;
int res=0;
for(int i=0;i<n;i++){
    flag = false;
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            flag = true;
        }
    }
    if(flag==false) res++;

}
return res;
}
int optimized(int arr[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}
int main(){
int arr[] = {10,20,15,45,20,10};
cout<<naive_distinct_num(arr,6)<<endl;
cout<<optimized(arr,6);
    return 0;
}
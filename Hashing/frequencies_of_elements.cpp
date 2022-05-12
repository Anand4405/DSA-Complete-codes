#include<iostream>
#include<unordered_map>
using namespace std;
void naive_freq(int arr[],int n){
int freq =1;
for(int i=0;i<n;i++){
    bool flag = false;
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            flag = true;
            break;
        }

    }
    if(flag==true){
        continue;
    }
    freq =1;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            freq++;
        }
    }
    cout<<arr[i]<<" "<<freq<<endl;
}

}
void optimized(int arr[],int n){
    unordered_map<int ,int>um;
    for(int i=0;i<n;i++){
        um[arr[i]]++;
    }
    for(auto i:um){
        cout<<i.first<<" "<<i.second<<endl;
    }
   
}
int main(){
int arr[] = {12,15,14,12,35,21,14};
naive_freq(arr,7);
optimized(arr,7);
    return 0;
}
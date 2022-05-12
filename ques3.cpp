#include<iostream>
#include<algorithm>
using namespace std;
string sol(int arr[],int n){
    string res;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]<1){
            res = "NO";
            return res;
        }
        if(arr[i]>n ){
            while(arr[i]>n || arr[i-1]==arr[i]){
                arr[i] /= 2;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    if(sum==(n*(n+1)/2)){
       
        return "YES";
    }else{
        
        return "NO";
    }

}
int main(){
int n;
    cin>>n;
    
    string res[n];
    int k=0;
        int a;
    for(int i=0;i<n;i++){
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];

        }
    res[k++] = sol(arr,a);
         }
         for(int i=0;i<n;i++){
             cout<<res[i]<<endl;
         }
        
    return 0;
}
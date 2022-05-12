#include<bits/stdc++.h>
using namespace std;
void naive_distinct_element_arr(int arr[],int n,int k){
    for(int i=0;i<=n-k;i++){
        int count =0;
        for(int j =0;j<k;j++){
            bool flag = false;
            for(int p =0;p<j;p++){
                if(arr[i+j]==arr[i+p]){
                    flag = true;
                    break;

            }
                }if(flag==false){
                    count++;
                }
            
        }
            cout<<count<<" ";
    }
   
}



void printDistinct(int arr[], int n, int k)
{
    map<int, int> m; 
   
    for (int i = 0; i < k; i++) { 
        m[arr[i]] += 1; 
    } 
   
    cout << m.size() << " "; 
   
    for (int i = k; i < n; i++) { 
        
        m[arr[i - k]] -= 1;
        
        if (m[arr[i - k]] == 0) { 
            m.erase(arr[i-k]); 
        }   
        m[arr[i]] += 1; 
   
        cout << m.size() << " "; 
    } 
    
}
int main(){
int arr[] = {4,5,5,6,7,2,3,3,9,8};
naive_distinct_element_arr(arr,10,4);
    return 0;
}
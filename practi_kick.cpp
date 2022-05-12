// #include<bits/stdc++.h>
// using namespace std;

// void check_same(string s1,string s2,int n){
//     int n1 = s1.length();
//     int n2 = s2.length();
//     // if(n1>n2){
//     //     cout<<"Case #"<<n<<": IMPOSSIBLE"<<endl;
//     //     return ;
//     // }
//     int i=0,j =0;
//     int res=0;
//     while(i < n1 && j< n2 ){
//         if(s1[i]==s2[j]){
//             i++,j++;
//         }else if(s1[i] != s2[j]){
//             j++;
//             res++;
//         }
//     }
//         if(i ==n1 && j!= n2){
//             res += n2-j;
//         }
//         cout<<n1<<" "<<s2.length()<<endl;
//         cout<<i<<" "<<j;
//     if(i==n1){
//         cout<<"Case #"<<n<<": "<<res<<endl;
//         return;
//     }else{
//         cout<<"Case #"<<n<<": IMPOSSIBLE"<<endl;
//         return ;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     string arr[2*n];
//     int i;
//     for( i=0;i<2*n;i=i+2){
//         string s1 ,s2;
//         cin>>arr[i]>>arr[i+1];
//     }
//     int nn=1;
//     for( i=0;i<2*n;i = i+2){
//         check_same(arr[i],arr[i+1],nn++);
        
//     }
//     return 0;
// }

#include <iostream>
#include<vector>
using namespace std;
int minStartValue(vector<int>& nums) {
    
    int min=0,sum=0;
    for (int i = 0; i < nums.size(); i++){
        sum+=nums[i];
        min=min<sum?min:sum;
    }
    
    return 1-min;
}
int main() {
    vector<int> nums{-3,2,-3,4,2}; 
    cout<<minStartValue(nums)<<endl;  
  return 0;
}
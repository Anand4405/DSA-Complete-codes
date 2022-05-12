#include<iostream>
using namespace std;
bool palindrome(int n1){
    int rev =0;
    int n = n1;
    while(n!=0){
        int j = n%10;
        rev = (rev*10) + j;
        n  = n/10;
    }
    return (rev==n1);
}
int main(){
    int count =0;
    string n = "52324";
    
    for(int i=0;i<2;i++){
        if (n[i]==n[4-i]){
            count++;
        }
    }
    // cout<<count;
    // if(count==2){
    //     cout<<"given num is palindrome"<<endl;

    // }
        cout<<palindrome(5335);

    return 0;
}
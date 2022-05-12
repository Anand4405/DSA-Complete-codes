#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool check_palindrome(string str){
    int low = 0,high = str.length()-1;
    if(high==0){
        return true;
    }
    while(low<high){
        if(str[low]!=str[high]){
            return false;
        }
            low++,high--;
        
    }
    return true;
}

bool palindrome(string str){
    string reb = str;
    reverse(reb.begin(),reb.end()); // naive solution
    return reb==str;
}
int main(){
string str = "abcdcba";
cout<<check_palindrome(str);
    return 0;
}
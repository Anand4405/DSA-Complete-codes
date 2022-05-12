#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){
    string g = s;
    reverse(s.begin(),s.end());
return g==s;
}

int closest_palindrome(int n){
    if(n<=9) return n;
    string s = to_string(n);
    int gr = n+1;
    int sm = n-1;
    if(ispalindrome(s)){
        return n;
    }
    while(true){
        if(ispalindrome(to_string(sm))){
            return sm;
        }
        sm--;
        if(ispalindrome(to_string(gr))){
            return gr;
        }
        gr++;
    }
    // return -1;
}

int main(){
int n = 179;
cout<<closest_palindrome(n);
    return 0;
}
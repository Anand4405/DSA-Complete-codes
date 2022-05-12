#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;
int fact(int n){
    int res=1;
    for(int j=1;j<=n;j++){
        res *= j;
    }
    
    return res;
}
int rank_lexico(string str){
    int res =1;
    int n = str.length();
    int count[CHAR] = {0};
    int mul = fact(n);
    for(int j=0;j<n;j++){
        count[str[j]]++;

    }
    for(int i=1;i<CHAR;i++){
        count[i] += count[i-1];
    }
    for(int i=0;i<n-1;i++){
        mul = mul/(n-i);
        res = res+count[str[i]-1]*mul;
        for(int j=str[i];j<CHAR;j++){
            count[j]--;
        }
    }
    return res;

}
int main(){
string str = "STRING";
cout<<rank_lexico(str);
    return 0;
}
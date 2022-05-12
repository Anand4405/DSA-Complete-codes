#include<bits/stdc++.h>
using namespace std;
void naive_search_string(string str,string subst,int n,int k){
    // int n = str.length();
    for(int i=0;i<n-k+1;i++){
        if(str.substr(i,k)==subst){
            cout<<i<<" ";
        }
    }
}

int main(){
string str = "ababababcd";
string subst = "abab";
naive_search_string(str,subst,10,4);
    return 0;
}

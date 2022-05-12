#include<bits/stdc++.h>
using namespace std;
void fillLPS(string str,int LPS[]){
int i=1,len=0;
int n = str.length();
LPS[0]= 0;
while(i<n){
if(str[i]==str[len]){
    len++;
    LPS[i] = len;
    i++;
}else{
    if(len==0){
        LPS[i] = 0;
        i++;
    }else{
        len = LPS[len-1];
    }
}

}}

void KMP(string pat,string txt){
int N = txt.length();
int M = pat.length();
int lps[M];
fillLPS(pat,lps);
int i=0,j=0;
while(i<N){
    if(pat[i]==txt[j]){
        i++,j++;
    }
    if(j==M){
        cout<<i-j;
        j = lps[j-1];
    }else if(i<N && pat[j] !=txt[i]){
        if(j==0){
            i++;
        }else{
            j = lps[j-1];
        }
    }

}
}
int main(){
string txt = "ababcababaad",pat="ababa";
    KMP(pat,txt);
    return 0;
}
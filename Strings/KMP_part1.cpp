#include<bits/stdc++.h>
using namespace std;
int naive_LPS(string str, int n){
    for(int len=n-1;len>0;len--){
    bool flag = true;
    for(int i=0;i<len;i++){
        if(str[i]!=str[n-len+i]);{
            flag = false;
        }  
    }
    if(flag==true){
        return len;
    }
    }
    return 0;

}

void fillLPS(string str,int lps[]){
    for(int i=0;i<str.length();i++){
        lps[i] = naive_LPS(str,i+1);
    }
}

void optimized_fill_LPS(string str,int lps[]){
    int len =0;
    int n = str.length(),i=1;
    lps[0] = 0;
    while(i<n){
        if(str[i]==str[len]){
            len++;
            lps[i] = len,i++;
        }else {
            if(len==0){
                lps[i] = 0,i++;
            }
            else{
                len = lps[len-1];
            }
            }
    }

}
int main(){
string txt = "abacabad";
int lps[txt.length()];
    optimized_fill_LPS(txt,lps);
    for(int i=0;i<txt.length();i++){
        cout<<lps[i]<<" ";
    }
    return 0;
}
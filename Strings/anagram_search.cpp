#include<bits/stdc++.h>
using namespace std;
// bool naive_ana_search(string txt , string pat ){
//     for(int i=0;i<)
// }
const int CHAR = 256;
bool areSame(int CT[],int CP[]){
    for(int i=0;i<CHAR;i++){
        if(CT[i]!=CP[i])return false;
    }
    return true;
}

bool optimized_ana_search(string txt,string pat){
    int n = txt.length();
    int k = pat.length();
    int ct[256] = {0},cp[256]={0};
    for(int i=0;i<k;i++){
        ct[txt[i]]++;
        cp[pat[i]]++;
    }
    for(int j =k;j<n;j++){
        if(areSame(ct,cp)){
            return true;
        }
        ct[txt[j]]++;
        ct[txt[j-k]]--;
    }
    return false;
}
int main(){
string str = "geeks for geeks";

string str2 = "eek";
cout<<optimized_ana_search(str,str2);
    return 0;
}
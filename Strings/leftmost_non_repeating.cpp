#include<iostream>
using namespace std;
int leftmost_non_repeating(string str){
    int count[256] = {0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]==1){
            return i;
        }
    }
    return -1;
}

int main(){
string str = "abcdsab";
cout<<leftmost_non_repeating(str);
    return 0;
}
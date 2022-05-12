#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void reverse_words(char str[],int n){
    int start =0;  // we reverse individual words then reverse entire string
    for(int end=0;end<n;end++){
        if(str[end] == ' '){
            reverse(str+start,str+end); // reverse excludes last index
            start = end+1;
        }
    }
    reverse(str+start,str+n);
    reverse(str,str+n);

}

int main(){
char str[] = "Anand Patil khed";
reverse_words(str,16);
for(auto x:str){
    cout<<x;
}
    return 0;
}
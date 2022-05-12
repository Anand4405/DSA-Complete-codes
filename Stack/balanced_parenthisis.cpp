#include<bits/stdc++.h>
using namespace std;
bool matching(char a,char b){
    return ((a=='('&& b==')')|| (a=='['&& b==']')||(a=='{' && b=='}'));
}
bool isBalanced(string str){
    stack<char> s;
    int n = str.length();
    int i=0;
    while( i <n){
        if(str[i]=='('|| str[i]=='{' || str[i]=='['){
            s.push(str[i]);
            i++;
        }else{
           if(s.empty()==true){
               return false;
           }
            if(matching(s.top(),str[i])){
                s.pop();
                i++;
            }else{
                return false;
            }
        }
    }
    return s.empty()==true;
}
int main(){
string str = "((()))";
cout<<isBalanced(str);
    return 0;
}
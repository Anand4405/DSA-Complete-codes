#include<bits/stdc++.h>
using namespace std;
bool is_rotated_string(string str1,string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    return ((str1+str1).find(str2) != string::npos); // if given string not present then s.find() return 
                                                        // string::npos else returns index of first occurance
}
int main(){
string str1 = "abcd";
string str2 = "cdab";
cout<<is_rotated_string(str1,str2);
    return 0;
}
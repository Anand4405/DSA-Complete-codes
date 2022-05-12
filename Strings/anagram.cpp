#include<iostream>
#include<algorithm>
#include<string>
using namespace std; // means silent and listen like words same letters with different permutation
bool isAnagram(string str1,string str2){ // naive solution
    if(str1.length()!= str2.length()){
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    return str1==str2;
}

bool optimized_anagram(string str1,string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    int count[256] = {0};
    for(int i=0;i<str1.length();i++){
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
string str1 = "geeks";
string str2 = "keegs";
cout<<isAnagram(str1,str2)<<endl;
cout<<optimized_anagram(str1,str2);
    return 0;
}
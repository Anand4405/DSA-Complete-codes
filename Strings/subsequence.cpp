#include<iostream> // subseqence means characters in an order
using namespace std;
bool isSubsequence(string str,string key){
int i=0,j=0;
int res = key.length();
int n = str.length();
while(j<n && i<res){
    if(str[j]==key[i]){
        j++,i++;
    }else{
        j++;
    }
}
return res==(i);
}

bool recursive_subsequence(string str,string key ,int n,int m){
    if(m==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(str[n-1]==key[m-1]){
        return recursive_subsequence(str,key,n-1,m-1);
    }
    else{
        return recursive_subsequence(str,key,n-1,m);
    }
}
int main(){
string str = "gfgsk";
cout<<isSubsequence(str,"fs")<<endl;
cout<<recursive_subsequence(str,"fks",5,3);
    return 0;
}
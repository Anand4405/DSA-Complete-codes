#include<iostream>
using namespace std;

int left_repeatingchar(string str){  // naive solution
    int count[256] = {0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(count[str[i]]>1){
            return i;
        }
    }

    return -1;
}

int opti_1_leftmost(string str){
    int findex[256];
    fill(findex,findex+256,-1);
    int res = INT_MAX;
    for(int i=0;i<str.length();i++){
        int fi = findex[str[i]];
        if(fi==-1){
            findex[str[i]] = i;
        }else{
            res = min(res,fi);
        }
    }
    return (res==INT_MAX) ? -1:res;
}
int main(){
string str = "teeksforg";
cout<<left_repeatingchar(str)<<endl;
cout<<opti_1_leftmost(str)<<endl;
    return 0;
}
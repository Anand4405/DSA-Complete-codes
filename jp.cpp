#include<bits/stdc++.h>
using namespace std;

vector<int> commom_ele(vector<string>s){

    vector<int>res;
    for(int i=0;i<s.size();i++){
        int k=0;
        for(int j=0;j<s[i].size()-1;j++){
            if(s[i][j]==s[i][j+1]){
                s[i][j+1] = '0';
                k++;
            }
        }
        res.push_back(k);

    }
    return res;
}

int main(){
vector<string> s = {"abbc","break","boook"};
vector<int> ss = commom_ele(s);
for(auto x: ss){
    cout<<x<<" ";
}
    return 0;
}
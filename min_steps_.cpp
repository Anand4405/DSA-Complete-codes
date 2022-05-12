#include<bits/stdc++.h>
using namespace std;

int min_steps(string arr[6],string s,int k){
int res = 0;
unordered_map<string,int>mp;
int i;

for( i=0;i<6;i++){
    if(arr[i]==s){
res = min(abs(k-i),abs(k-i-6));
       
    }


}
return res;

}

int main(){
string arr[6] = {"anand","patil","balaji","vaishali","patil","arati"};

cout<<min_steps(arr,"patil",5);
    return 0;
}
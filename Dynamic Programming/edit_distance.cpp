#include<bits/stdc++.h>

using namespace std;
// in this problem we need to convert S1 into S2. We can do insert,delete,replace operations on any of the string

int edit_distance(string s1,string s2,int m,int n){
    if(m==0) return n;
    if(n==0) return m;

    if(s1[m-1]==s2[n-1]) 
    return edit_distance(s1,s2,m-1,n-1);
    else{

        return 1+min(edit_distance(s1,s2,m-1,n),min(edit_distance(s1,s2,m,n-1),edit_distance(s1,s2,m-1,n-1)));
    }           // this is delete                 insert                   replace


}


int edit_distance_DP(string s1,string s2,int m,int n){
    int dp[m+1][n+1];
    for(int i=0;i<=n;i++){
        dp[0][i] = i;
    }
    for(int j=1;j<=m;j++){
        dp[j][0] = j;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[i-1]){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = 1+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
            }
        }
    }
return dp[m][n];
}

int main(){

string s1 = "geok";
string s2 = "geeks";
cout<<edit_distance(s1,s2,4,5)<<endl;
cout<<edit_distance_DP(s1,s2,4,5);

    return 0;
}



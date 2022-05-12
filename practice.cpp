#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
int n;
cin>>n;
string s;
cin>>s;
int res2=0;
int res=0;
for(int i=0;i<n;i++){
if(s[i] =='a'){
res++;
}
else{
    res2++;
}
}
cout<<min(res,res2);

	// Your code here
	return 0;
}
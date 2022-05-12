#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void powerset(string str){

//     int n = str.length();
//     int powsize = pow(2,n);
// for(int counter=0;counter<powsize;counter++){
//     for(int j=0;j<n;j++){
//         if(counter & (1<<j) !=0){
//             cout<<str[j];
//         }

//     cout<<"\n";
//     }
// }
int n = str.length();

	int powSize = pow(2, n);

	for(int counter = 0; counter < powSize; counter++)
	{
		for(int j = 0; j < n; j++)
		{
			if((counter & (1 << j)) != 0)
                cout<<str[j];
		}
		
		cout<<endl;
	}

}

void recursive_powerset(string s,string curr ="",int i=0){
if(i==s.length()){
	cout<<curr<<endl;
	return ;
}
recursive_powerset(s,curr,i+1);
recursive_powerset(s,curr+s[i],i+1);
}
int main(){
    string s = "acb";
// powerset(s);
recursive_powerset(s);
    return 0;
}
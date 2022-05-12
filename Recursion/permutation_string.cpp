#include<iostream>
using namespace std;
void permu(string str, int i=0){
   if(i ==str.length()-1){
       cout<<str<<endl;
       return ;
   }
   for(int j=i;j<str.length();j++){
       swap(str[i],str[j]);
       permu(str,i+1);
       swap(str[i],str[j]);
   }

}

int main(){
string s = "abc";

permu(s);
    return 0;
}
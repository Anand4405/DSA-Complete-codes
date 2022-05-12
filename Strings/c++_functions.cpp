#include<iostream>
using namespace std;

int main(){
string str = "geeksforgeeks";
cout<<str.length()<<endl;
cout<<str.substr(2,2)<<endl; // beginning index and length of substring needed 
cout<<str.find("for")<<endl;
cout<<str.find("fot")<<endl;
str += "_Anand_Patil";
cout<<str;

string str2 = "bcd";
if(str==str2){
    cout<<"same";
}else if(str>str2){
    cout<<" str greater";
}else{
    cout<<"str2 greater";
}
string name;
string name2;
cout<<"Enter your name : " ;
// cin>>name; // This will take only Anand not Anand Patil
cout<<"Your name is : "<<name<<" ";

getline(cin,name2); // fpr space seperated input use this

cout<<"Your name is : "<<name2<<" ";
    return 0;
}
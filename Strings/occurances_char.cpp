#include<iostream>
using namespace std;

int main(){
string str = "anandpatil";
int arr[26] = {0};
for(int i=0;i<str.length();i++){
    arr[str[i]-'a']++;
}

for(int j=0;j<26;j++){
    if(arr[j]>0){
        cout<<(char)(j+'a')<<" "<<arr[j]<<endl;
    }
}
    return 0;
}